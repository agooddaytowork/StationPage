
#include <QtWidgets/QApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QList>
#include "localdatabaseinterface.h"
#include "anlogger.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    LocalDatabaseInterface localDBInterface("root","klaremote","userspice");


   QList<QObject*> dataList = localDBInterface.populateStationModelList();

    
    QQmlApplicationEngine engine;

#ifdef Q_OS_WIN
    QString extraImportPath(QStringLiteral("%1/../../../../%2"));
#else
    QString extraImportPath(QStringLiteral("%1/../../../%2"));
#endif
    QQmlContext *thisContext = engine.rootContext();

//   thisContext->setContextProperty("myStationModel", QVariant::fromValue(dataList));
     thisContext->setContextProperty("myStationModel", QVariant::fromValue(dataList));

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
