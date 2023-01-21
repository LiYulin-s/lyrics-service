#include <QCoreApplication>
#include <QDBusConnection>

#include "DBusServiceServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DBusServiceServer *s = new DBusServiceServer();
    QDBusConnection::sessionBus().registerService("org.lyrics.service");
    return a.exec();
}
