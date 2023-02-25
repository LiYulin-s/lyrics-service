#include "DBusServiceServer.h"

QStringList DBusServiceServer::lyrics()
{
    return m_lyrics;
}

QStringList DBusServiceServer::translatedLyrics()
{
    return m_translated_lyrics;
}

QString DBusServiceServer::currentLyric()
{
    return m_current_lyric;
}

QString DBusServiceServer::currentTranslatedLyric()
{
    return m_current_translated_lyric;
}

qint16 DBusServiceServer::index()
{
    return m_index;
}

bool DBusServiceServer::hasTranslation()
{
    return m_has_translation;
}

void DBusServiceServer::setSong(bool has_translation, QStringList lyrics,
                                QStringList translated_lyrics = {})
{
    setHasTranslation(has_translation);
    setLyrics(lyrics);
    if (hasTranslation())
        setTranslatedLyrics(translated_lyrics);
    emit songChanged(m_has_translation, m_lyrics, m_translated_lyrics);
}

void DBusServiceServer::setLyric(qint16 index, QString lyric,
                                 QString translated_lyric = "")
{
    setIndex(index);
    setCurrentLyric(lyric);
    if (hasTranslation())
        setCurrentTranslatedLyric(translated_lyric);
    emit lyricChanged(m_index, m_current_lyric, m_current_translated_lyric);
}

void DBusServiceServer::setLyrics(QStringList lyrics)
{
    m_lyrics = lyrics;
}

void DBusServiceServer::setTranslatedLyrics(QStringList translated_lyrics)
{
    m_translated_lyrics = translated_lyrics;
}

void DBusServiceServer::setCurrentLyric(QString current_lyric)
{
    m_current_lyric = current_lyric;
}

void DBusServiceServer::setCurrentTranslatedLyric(
    QString current_translated_lyric)
{
    m_current_translated_lyric = current_translated_lyric;
}

void DBusServiceServer::setIndex(qint16 index)
{
    m_index = index;
}

void DBusServiceServer::setHasTranslation(bool has_translation)
{
}

DBusServiceServer::DBusServiceServer(QObject *parent) : QObject{parent}
{
    qDBusRegisterMetaType<Dict>();
    new ServiceAdaptor(this);
    QDBusConnection::sessionBus().registerObject("/", this);
}
