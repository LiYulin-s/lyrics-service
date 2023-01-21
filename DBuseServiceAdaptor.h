/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp LyricsServiceServer.xml -i DBusServiceAdaptor.h -a DBuseServiceAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUSESERVICEADAPTOR_H
#define DBUSESERVICEADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>

QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.lyrics.service
 */
class ServiceAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.lyrics.service")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.lyrics.service\">\n"
"    <property access=\"read\" type=\"as\" name=\"lyrics\"/>\n"
"    <property access=\"read\" type=\"as\" name=\"translatedLyrics\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"currentLyric\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"currentTranslatedLyric\"/>\n"
"    <property access=\"read\" type=\"n\" name=\"index\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"hasTranslation\"/>\n"
"    <method name=\"quit\"/>\n"
"  </interface>\n"
        "")
public:
    ServiceAdaptor(QObject *parent);
    virtual ~ServiceAdaptor();

public: // PROPERTIES
    Q_PROPERTY(QString currentLyric READ currentLyric)
    QString currentLyric() const;

    Q_PROPERTY(QString currentTranslatedLyric READ currentTranslatedLyric)
    QString currentTranslatedLyric() const;

    Q_PROPERTY(bool hasTranslation READ hasTranslation)
    bool hasTranslation() const;

    Q_PROPERTY(short index READ index)
    short index() const;

    Q_PROPERTY(QStringList lyrics READ lyrics)
    QStringList lyrics() const;

    Q_PROPERTY(QStringList translatedLyrics READ translatedLyrics)
    QStringList translatedLyrics() const;

public Q_SLOTS: // METHODS
    void quit();
Q_SIGNALS: // SIGNALS
};

#endif
