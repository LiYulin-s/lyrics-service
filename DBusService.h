#ifndef DBUSSERVICE_H
#define DBUSSERVICE_H

#include <QDBusConnection>
#include <QDBusServer>
#include <QObject>
#include <QPluginLoader>

#define

class DBusService : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(
        QStringList lyrics READ lyrics WRITE setLyrics NOTIFY lyricsChanged)
    Q_PROPERTY(QStringList translatedLyrics READ translatedLyrics WRITE
                   setTranslatedLyrics NOTIFY translatedLyricsChanged)
    Q_PROPERTY(QString currentLine READ currentLine WRITE setCurrentLine NOTIFY
                   currentLineChanged)
    Q_PROPERTY(QString translatedLine READ translatedLine WRITE
                   setTranslatedLine NOTIFY translatedLineChanged)
    Q_PROPERTY(qint16 index READ index WRITE setIndex NOTIFY indexChanged)

  private:
    QString m_title;
    QStringList m_lyrics;
    QStringList m_translated_lyrics;
    QString m_current_line;
    QString m_translated_line;
    qint16 m_index;
    QPluginLoader *m_loader;

  public:
    explicit DBusService(QObject *parent, QString target);
    ~DBusService();
    QString title();
    QString currentLine();
    QString translatedLine();
    QStringList lyrics();
    QStringList translatedLyrics();
    qint16 index();
    void setTitle(QString);
    void setLyrics(QStringList);
    void setTranslatedLyrics(QStringList);
    void setCurrentLine(QString);
    void setTranslatedLine(QString);
    void setIndex(qint16);

  signals:
    void titleChanged(QString);
    void lyricsChanged(QStringList);
    void translatedLyricsChanged(QStringList);
    void currentLineChanged(QString);
    void translatedLineChanged(QString);
    void indexChanged(qint16);
};

#endif // DBUSSERVICESERVER_H
