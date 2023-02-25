#ifndef ABSTRACTINTERFACE_H
#define ABSTRACTINTERFACE_H

#include <QObject>

class Q_DECL_IMPORT AbstractInterface
{
  public:
    virtual ~AbstractInterface() = 0;
    virtual void songChanged(bool has_translation, QStringList lyrics,
                             QStringList translated_lyrics, qint16 index,
                             QString lyric, QString translated_lyric) = 0;
    virtual void lyricChanged(qint16 index, QString lyric,
                              QString translated_lyric) = 0;
};

QT_BEGIN_NAMESPACE
#define iid "org.qt-project.lyrics-service.abstract-interface"
Q_DECLARE_INTERFACE(AbstractInterface, iid)
QT_END_NAMESPACE

#endif
