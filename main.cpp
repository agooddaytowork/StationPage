
#include "main.h"

    StationObject::StationObject(QObject *parent):QObject(parent)
    {

    }

    StationObject::StationObject(const QString &name, const double &top, const double &left, QObject *parent)
        :QObject(parent), m_stationName(name), m_top(top), m_left(left)
    {
    }


    QString StationObject::stationName() const
    {
        return m_stationName;
    }

    void StationObject::setStationName(const QString &name)
    {
        if(name != m_stationName)
        {
            m_stationName = name;
            emit stationNameChanged();
        }
    }

    double StationObject::top() const
    {
        return m_top;
    }

    void StationObject::setTop(const double &top)
    {
        if(top != m_top)
        {
            m_top = top;
            emit topChanged();
        }
    }

    double StationObject::left() const
    {
        return m_left;
    }

void StationObject::setLeft(const double &left)
    {
        if(left != m_left)
        {
            m_left = left;
            emit leftChanged();
        }
    }


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);


    QList<QObject*> dataList;

    dataList.append(new StationObject("S1", 200, 500.0));
    dataList.append(new StationObject("S2", 0.0, 50.0));
    dataList.append(new StationObject("S3", 50.0, 50.0));
    QQmlApplicationEngine engine;

#ifdef Q_OS_WIN
    QString extraImportPath(QStringLiteral("%1/../../../../%2"));
#else
    QString extraImportPath(QStringLiteral("%1/../../../%2"));
#endif
    QQmlContext *thisContext = engine.rootContext();

    thisContext->setContextProperty("myStationModel", QVariant::fromValue(dataList));

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
