#include <QCoreApplication>
#include <QDBusConnection>
#include <QDBusInterface>
#include <QDebug>
#include <QLibrary>
#include <QPluginLoader>
#include <QSettings>

#include "AbstractInterface.h"
#include "DBusServiceServer.h"
#include "MainApplication.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MainApplication app(&a);
    /*
    QPluginLoader *loader = new QPluginLoader("libyesplaymusic-interface.so");
    AbstractInterface *interface;
    qDebug() << QLibrary::isLibrary("libyesplaymusic-interface.so");
    qDebug() << a.libraryPaths();
    if (loader->load())
    {
        interface = qobject_cast<AbstractInterface *>(loader->instance());
        qDebug() << "load!";
    }
    else
    {
        qDebug() << "not load!";
    }
    DBusServiceServer *s = new DBusServiceServer();

    QSettings setting("lyrics-service.config", QSettings::NativeFormat);
    setting.beginGroup("Main");
    setting.setPath(QSettings::NativeFormat, QSettings::UserScope,
                    "~/.config/");
    setting.setValue("priority", QStringList({"yesplaymusic", "feeluown"}));
    setting.endGroup();
    // qDebug() << setting.status();
    qDebug() << QT_VERSION_STR;
    QDBusConnection::sessionBus().registerService("org.lyrics.service");
    */
    return a.exec();
}
