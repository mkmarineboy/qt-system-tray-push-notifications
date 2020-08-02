#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H

#include <QObject>
#include <QSystemTrayIcon>

class SystemTray : public QSystemTrayIcon
{
    Q_OBJECT
public:
    explicit SystemTray(QObject *parent = nullptr);
    ~SystemTray();

public Q_SLOTS:

    void handleMessageClicked();

Q_SIGNALS:

private:

};

#endif // SYSTEMTRAY_H
