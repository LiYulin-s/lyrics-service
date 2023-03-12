#include "MainApplication.h"

MainApplication::MainApplication(QObject *parent) : QObject{parent}
{
    QDBusConnection::sessionBus().registerService(SERVICE_NAME);
    m_service_server = new DBusService(this);
    m_settings =
        new QSettings("lyrics-service.conf", QSettings::NativeFormat, this);
    m_settings->setPath(QSettings::NativeFormat, QSettings::UserScope,
                        "$HOME/.config/");
    loadConfig();
}

MainApplication::~MainApplication()
{
}

void MainApplication::loadConfig()
{
}
