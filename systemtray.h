#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H

#include <QObject>

class SystemTray : public QObject
{
    Q_OBJECT
public:
    explicit SystemTray(QObject *parent = nullptr);

signals:

};

#endif // SYSTEMTRAY_H
