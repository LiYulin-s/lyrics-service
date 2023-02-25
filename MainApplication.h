#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include <QDBusConnection>
#include <QDBusServiceWatcher>
#include <QObject>
#include <QSettings>

#include "AbstractInterface.h"
#include "DBusServiceServer.h"

#define SERVICE_NAME "org.lyrics.service"

class MainApplication : public QObject
{
    Q_OBJECT
  public:
    explicit MainApplication(QObject *parent = nullptr);
    ~MainApplication();
    void loadConfig();

  private:
    QSettings *m_settings;
    AbstractInterface *m_interface;
    DBusServiceServer *m_service_server;

  signals:
};

#endif // MAINAPPLICATION_H
