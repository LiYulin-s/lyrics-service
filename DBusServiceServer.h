#ifndef DBUSSERVICESERVER_H
#define DBUSSERVICESERVER_H

#include <QDBusConnection>
#include <QDBusServer>
#include <QObject>

#include "DBuseServiceAdaptor.h"

#define Dict QMap<QString, QVariant>

class DBusServiceServer : public QObject
{
    Q_OBJECT

  private:
    Dict m_current_song;
    QString title;
    QStringList m_lyrics;
    QStringList m_translated_lyrics;
    QString m_current_lyric;
    QString m_current_translated_lyric;
    qint16 m_index;
    bool m_has_translation;

    Q_PROPERTY(Dict currentSong READ currentSong NOTIFY songChanged)
    Q_PROPERTY(Dict currentLyric READ currentLyric WRITE setCurrentLyric NOTIFY
                   currentLyricChanged)

  public slots:
    void quit()
    {
        exit(0);
    }

  public:
    explicit DBusServiceServer(QObject *parent = nullptr);
    Dict currentSong();
    QStringList lyrics();
    QStringList translatedLyrics();
    QString currentLyric();
    QString currentTranslatedLyric();
    qint16 index();
    bool hasTranslation();
    void setSong(bool has_translation, QStringList lyrics,
                 QStringList translated_lyrics);
    void setLyric(qint16 index, QString lyric, QString translated_lyric);
    void setLyrics(QStringList lyrics);
    void setTranslatedLyrics(QStringList translated_lyrics);
    void setCurrentLyric(QString current_lyric);
    void setCurrentTranslatedLyric(QString current_translated_lyric);
    void setIndex(qint16 index);
    void setHasTranslation(bool has_translation);

  signals:
    void songChanged(bool has_translation, QStringList lyrics,
                     QStringList translated_lyrics);
    void lyricChanged(qint16 index, QString lyric, QString translated_lyric);
};

#endif // DBUSSERVICESERVER_H
