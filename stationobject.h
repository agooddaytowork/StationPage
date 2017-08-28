#ifndef STATIONOBJECT_H
#define STATIONOBJECT_H

#include "main.h"

class StationObject: public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString stationName READ stationName WRITE setStationName NOTIFY stationNameChanged)
    Q_PROPERTY(double top READ top WRITE setTop NOTIFY topChanged)
    Q_PROPERTY(double left READ left WRITE setLeft NOTIFY leftChanged)

public:
    StationObject(QObject *parent = 0);

    StationObject(const QString &name, const double &top, const double &left, QObject *parent=0);

    QString stationName() const;

    void setStationName(const QString &name);

    double top() const;

    void setTop(const double &top);

    double left() const;
    void setLeft(const double &left);

signals:
    void stationNameChanged();
    void topChanged();
    void leftChanged();

private:

    QString m_stationName;
    double m_top;
    double m_left;

};

#endif // STATIONOBJECT_H
