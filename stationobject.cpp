#include "stationobject.h"


StationObject::StationObject(QObject *parent):QObject(parent)
{

}

StationObject::StationObject(const int &id,const QString &name, const double &top, const double &left, QObject *parent)
    :QObject(parent),m_id(id), m_stationName(name), m_top(top), m_left(left)
{
}

int StationObject::stationId() const
{
    return m_id;
}

void StationObject::setStationId(const int &id)
{
    if(id != m_id)
    {
        m_id = id;
        emit stationIdChanged();
    }
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
