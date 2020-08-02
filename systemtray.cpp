#include "systemtray.h"
#include <QDebug>

SystemTray::SystemTray(QObject *parent) : QSystemTrayIcon(parent)
{

    setIcon(QIcon(":/rocket-icon.png"));
    setVisible(true);
    showMessage("GOOL","BUCASPOR ATTI", QIcon(":/rocket-icon.png"), 20000);
    connect(this, &SystemTray::messageClicked, this, &SystemTray::handleMessageClicked);
}

SystemTray::~SystemTray()
{
    disconnect(this, &SystemTray::messageClicked, this, &SystemTray::handleMessageClicked);
}

void SystemTray::handleMessageClicked()
{
    qDebug() << __PRETTY_FUNCTION__ << __LINE__;
}
