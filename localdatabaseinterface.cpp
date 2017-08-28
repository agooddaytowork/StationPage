#include "localdatabaseinterface.h"
QT_CHARTS_USE_NAMESPACE

LocalDatabaseInterface::LocalDatabaseInterface(const QString dbUsername, const QString dbPassword, const QString dbName, QObject *parent):
    m_dbUsername(dbUsername), m_dbPassword(dbPassword), m_dbName(dbName), QObject(parent)
{
    qRegisterMetaType<QAbstractSeries*>();
    qRegisterMetaType<QAbstractAxis*>();
}
