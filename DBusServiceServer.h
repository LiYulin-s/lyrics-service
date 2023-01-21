#ifndef DBUSSERVICESERVER_H
#define DBUSSERVICESERVER_H

#include <QDBusServer>
#include <QObject>

#include "DBuseServiceAdaptor.h"

class DBusServiceServer : public QObject
{
    Q_OBJECT

private:
    QStringList m_lyrics;
    QStringList m_translated_lyrics;
    QString m_current_lyric;
    QString m_current_translated_lyric;
    qint16 m_index;
    bool m_has_translation;

    Q_PROPERTY(QStringList lyrics READ lyrics)
    Q_PROPERTY(QStringList translatedLyrics READ translatedLyrics)
    Q_PROPERTY(QString currentLyric READ currentLyric)
    Q_PROPERTY(
    QString currentTranslatedLyric READ currentTranslatedLyric)
    Q_PROPERTY(qint16 index READ index)
    Q_PROPERTY(bool hasTranslation READ hasTranslation)

public slots:
    void quit() { exit(0); }

public:
    explicit DBusServiceServer(QObject* parent = nullptr);

    QStringList lyrics();
    QStringList translatedLyrics();
    QString currentLyric();
    QString currentTranslatedLyric();
    qint16 index();
    bool hasTranslation();

    void setLyrics(QStringList lyrics);
    void setTranslatedLyrics(QStringList translated_lyrics);
    void setCurrentLyric(QString current_lyric);
    void setCurrentTranslatedLyric(QString current_translated_lyric);
    void setIndex(qint16 index);
    void setHasTranslation(bool has_translation);

signals:

};

#endif // DBUSSERVICESERVER_H
