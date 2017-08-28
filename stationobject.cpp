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
