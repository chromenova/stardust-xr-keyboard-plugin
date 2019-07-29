#ifndef KEYBOARDPLUGIN_H
#define KEYBOARDPLUGIN_H

#include <QObject>
#include <plugininterfaces.h>
#include <configpathgetter.h>
#include <keyboard.h>

#include "samplekeyboard.h"

class KeyboardPlugin : public QObject, public VirtualObjectInterface {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.chromenova.Stardust.VirtualObjectInterface/1.0" FILE "virtualkeyboard.json")
    Q_INTERFACES(VirtualObjectInterface)
public:
    KeyboardPlugin();
    Q_INVOKABLE QObject *createInstance(QObject *parent) override;
};

#endif // KEYBOARDPLUGIN_H
