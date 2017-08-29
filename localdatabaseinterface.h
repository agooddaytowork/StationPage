#ifndef LOCALDATABASEINTERFACE_H
#define LOCALDATABASEINTERFACE_H


#include <QtSql/QSqlDatabase>
#include <QtCharts/QAbstractSeries>
#include <QtSql/QSqlQuery>
#include <QHash>
#include "stationobject.h"


QT_CHARTS_USE_NAMESPACE

class LocalDatabaseInterface : public QObject
{

    Q_OBJECT

public:
    explicit LocalDatabaseInterface(const QString &dbUsername, const QString &dbPassword, const QString &dbName, QObject *parent = 0);
    void start();
    void stop();

    QHash<int, StationObject*> LocalDatabaseStationHash();


public slots:
    void initializeDataToGraph(QAbstractSeries *series);
    void updateDataToGraph(QAbstractSeries *series);

private:
    bool initializeLocalDatabaseStationHash();
    QString m_dbUsername;
    QString m_dbPassword;
    QString m_dbName;

    QSqlDatabase localDb;
    QHash<int, StationObject*> m_LocalDatabaseStationHash;
};

#endif // LOCALDATABASEINTERFACE_H
