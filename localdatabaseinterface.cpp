#include "localdatabaseinterface.h"
#include <QRegExp>

QT_CHARTS_USE_NAMESPACE
#define LocalDatabaseInterfaceDebuggerEnabled 1


LocalDatabaseInterface::LocalDatabaseInterface(const QString &dbUsername, const QString &dbPassword, const QString &dbName, QObject *parent):
    QObject(parent), m_dbUsername(dbUsername), m_dbPassword(dbPassword), m_dbName(dbName)
{
    // Register MetaType for other slots from QML
    qRegisterMetaType<QAbstractSeries*>();
    qRegisterMetaType<QAbstractAxis*>();

    // Configure local data base
    anIf(LocalDatabaseInterfaceDebuggerEnabled, anAck("Database info: "
                                                      << localDb.databaseName() << "-"
                                                      << localDb.userName() << "-"
                                                      << localDb.password()));

    localDb = QSqlDatabase::addDatabase("QMYSQL");
    localDb.setHostName("localhost");
    localDb.setPort(3306);
    localDb.setDatabaseName(m_dbName);
    localDb.setUserName(m_dbUsername);
    localDb.setPassword(m_dbPassword);

    // initialize LocaldatabaseHash



    if(localDb.open())
    {
        anIf(LocalDatabaseInterfaceDebuggerEnabled,
            anAck ("Connected to database");
            anTrk ("Initializing LocalDatabaseStationHash"););


      if(initializeLocalDatabaseStationHash())
      {
            anIf(LocalDatabaseInterfaceDebuggerEnabled, anTrk("Initialization succeed!"));

      }
      else
      {
            anIf(LocalDatabaseInterfaceDebuggerEnabled, anTrk("Initialization failed!"));
      }


    }
    else
     {
       anIf(LocalDatabaseInterfaceDebuggerEnabled, anTrk("Could not connect to database!"));
     }

}

bool LocalDatabaseInterface::initializeLocalDatabaseStationHash()
{
    QSqlQuery tmpQuery;

    if(tmpQuery.exec("SELECT id, stationName, top, left_style FROM stations "))
    {
        anIf(LocalDatabaseInterfaceDebuggerEnabled, anAck("Query succeeded: SELECT GlobalID, stationName, top, left_style FROM stations"));

        StationObject tmpStation;
        while(tmpQuery.next())
        {
            QString tmpTop = tmpQuery.value("top").toString();
            QString tmpLeft = tmpQuery.value("left_style").toString();

            tmpTop = tmpTop.remove((tmpTop.length()-2),2);
            tmpLeft = tmpLeft.remove((tmpLeft.length()-2),2);

            tmpStation.setStationId(tmpQuery.value("id").toInt());
            tmpStation.setStationName(tmpQuery.value("stationName").toString());
            tmpStation.setTop(tmpTop.toDouble());
            tmpStation.setLeft(tmpLeft.toDouble());

            m_LocalDatabaseStationHash.insert(tmpStation.stationId(), &tmpStation);

        anIf(LocalDatabaseInterfaceDebuggerEnabled,
             anAck("Add a station to localDatabaseHash:" << tmpStation.stationId() << "-"
                   << tmpStation.stationName() << "-"
                   << tmpStation.top() << "-"
                   << tmpStation.left()));
        }
        return true;
    }

    anIf(LocalDatabaseInterfaceDebuggerEnabled, anError("Query failed: SELECT GlobalID, stationName, top, left_style FROM stations"));

    return false;
}

void LocalDatabaseInterface::start()
{

}

void LocalDatabaseInterface::stop()
{

}

void LocalDatabaseInterface::initializeDataToGraph(QAbstractSeries *series)
{

}

void LocalDatabaseInterface::updateDataToGraph(QAbstractSeries *series)
{

}

QHash<int, StationObject*> LocalDatabaseInterface::LocalDatabaseStationHash()
{
    return m_LocalDatabaseStationHash;
}

QList<QObject*> LocalDatabaseInterface::populateStationModelList()
{
    QList<int> keyList = m_LocalDatabaseStationHash.keys();

    QList<QObject*> tmpModelList;

    for(int i = 0; i < keyList.length();i++)
    {
        tmpModelList.append(m_LocalDatabaseStationHash.value(keyList.at(i)));
    }

    return tmpModelList;
}
