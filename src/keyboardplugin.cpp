#include "keyboardplugin.h"

KeyboardPlugin::KeyboardPlugin() {

}

QObject *KeyboardPlugin::createInstance(QObject *parent) {
    SampleKeyboard *keyboard = new SampleKeyboard(parent);
    return keyboard;
}

