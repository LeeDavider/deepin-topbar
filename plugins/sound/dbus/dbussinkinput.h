/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusSinkInput -p dbussinkinput com.deepin.daemon.Audio.SinkInput.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSSINKINPUT_H_1470190809
#define DBUSSINKINPUT_H_1470190809

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.daemon.Audio.SinkInput
 */
class DBusSinkInput: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName !="com.deepin.daemon.Audio.SinkInput")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        foreach(const QString &prop, changedProps.keys()) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
                Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.daemon.Audio.SinkInput"; }

public:
    explicit DBusSinkInput(const QString &path, QObject *parent = 0);

    ~DBusSinkInput();

    Q_PROPERTY(double Balance READ balance NOTIFY BalanceChanged)
    inline double balance() const
    { return qvariant_cast< double >(property("Balance")); }

    Q_PROPERTY(double Fade READ fade NOTIFY FadeChanged)
    inline double fade() const
    { return qvariant_cast< double >(property("Fade")); }

    Q_PROPERTY(QString Icon READ icon NOTIFY IconChanged)
    inline QString icon() const
    { return qvariant_cast< QString >(property("Icon")); }

    Q_PROPERTY(bool Mute READ mute NOTIFY MuteChanged)
    inline bool mute() const
    { return qvariant_cast< bool >(property("Mute")); }

    Q_PROPERTY(QString Name READ name NOTIFY NameChanged)
    inline QString name() const
    { return qvariant_cast< QString >(property("Name")); }

    Q_PROPERTY(bool SupportBalance READ supportBalance NOTIFY SupportBalanceChanged)
    inline bool supportBalance() const
    { return qvariant_cast< bool >(property("SupportBalance")); }

    Q_PROPERTY(bool SupportFade READ supportFade NOTIFY SupportFadeChanged)
    inline bool supportFade() const
    { return qvariant_cast< bool >(property("SupportFade")); }

    Q_PROPERTY(double Volume READ volume NOTIFY VolumeChanged)
    inline double volume() const
    { return qvariant_cast< double >(property("Volume")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> SetBalance(double in0, bool in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("SetBalance"), argumentList);
    }

    inline QDBusPendingReply<> SetFade(double in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("SetFade"), argumentList);
    }

    inline QDBusPendingReply<> SetMute(bool in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("SetMute"), argumentList);
    }

    inline QDBusPendingReply<> SetVolume(double volume, bool feedBack)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(volume) << QVariant::fromValue(feedBack);
        return asyncCallWithArgumentList(QStringLiteral("SetVolume"), argumentList);
    }

Q_SIGNALS: // SIGNALS
// begin property changed signals
void BalanceChanged();
void FadeChanged();
void IconChanged();
void MuteChanged();
void NameChanged();
void SupportBalanceChanged();
void SupportFadeChanged();
void VolumeChanged();
};

namespace com {
  namespace deepin {
    namespace daemon {
      namespace Audio {
        typedef ::DBusSinkInput SinkInput;
      }
    }
  }
}
#endif
