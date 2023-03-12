#include "DBusService.h"

QString DBusService::title()
{
    return m_title;
}

QStringList DBusService::lyrics()
{
    return m_lyrics;
}

QStringList DBusService::translatedLyrics()
{
    return m_translated_lyrics;
}

QString DBusService::currentLine()
{
    return m_current_line;
}

QString DBusService::translatedLine()
{
    return m_translated_line;
}

qint16 DBusService::index()
{
    return m_index;
}

void DBusService::setTitle(QString title)
{
    m_title = title;
    emit titleChanged(m_title);
}

void DBusService::setLyrics(QStringList lyrics)
{
    m_lyrics = lyrics;
    emit lyricsChanged(m_lyrics);
}

void DBusService::setTranslatedLyrics(QStringList translated_lyrics)
{
    m_translated_lyrics = translated_lyrics;
    emit translatedLyricsChanged(m_translated_lyrics);
}

void DBusService::setCurrentLine(QString current_line)
{
    m_current_line = current_line;
    emit currentLineChanged(m_current_line);
}

void DBusService::setTranslatedLine(QString current_translated_line)
{
    m_translated_line = current_translated_line;
    emit translatedLineChanged(m_translated_line);
}

void DBusService::setIndex(qint16 index)
{
    m_index = index;
    emit indexChanged(m_index);
}

DBusService::DBusService(QObject *parent, QString target) : QObject{parent}
{
    m_loader = new QPluginLoader(, this)
}
