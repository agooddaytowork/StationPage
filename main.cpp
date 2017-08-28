
#include "main.h"


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
