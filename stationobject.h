#ifndef STATIONOBJECT_H
#define STATIONOBJECT_H


#include <QtWidgets/QApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QList>
#include "anlogger.h"



class StationObject: public QObject
{

    Q_PROPERTY(int stationId READ stationId WRITE setStationId NOTIFY stationIdChanged)
    Q_PROPERTY(QString stationName READ stationName WRITE setStationName NOTIFY stationNameChanged)
    Q_PROPERTY(double top READ top WRITE setTop NOTIFY topChanged)
    Q_PROPERTY(double left READ left WRITE setLeft NOTIFY leftChanged)

    Q_OBJECT



public:
    explicit StationObject(QObject *parent = 0);

    explicit StationObject(const int &id, const QString &name, const double &top, const double &left, QObject *parent=0);

    int stationId() const;
    void setStationId(const int &id);

    QString stationName() const;
    void setStationName(const QString &name);

    double top() const;
    void setTop(const double &top);

    double left() const;
    void setLeft(const double &left);

signals:
    void stationIdChanged();
    void stationNameChanged();
    void topChanged();
    void leftChanged();

private:
    int m_id;
    QString m_stationName;
    double m_top;
    double m_left;

};

#endif // STATIONOBJECT_H
