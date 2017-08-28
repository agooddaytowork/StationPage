#ifndef LOCALDATABASEINTERFACE_H
#define LOCALDATABASEINTERFACE_H

#include "main.h"
#include <QtSql/QSqlDatabase>
#include <QtCharts/QAbstractSeries>

QT_CHARTS_USE_NAMESPACE

class LocalDatabaseInterface : public QObject
{

    Q_OBJECT

public:
    explicit LocalDatabaseInterface(const QString &dbUsername, const QString &dbPassword, const QString &dbName, QObject *parent = 0);
    void start();
    void stop();


public slots:
    void initializeDataToGraph(QAbstractSeries *series);
    void updateDataToGraph(QAbstractSeries *series);

private:

    QString m_dbUsername;
    QString m_dbPassword;
    QString m_dbName;

    QSqlDatabase localDb;
};

#endif // LOCALDATABASEINTERFACE_H
