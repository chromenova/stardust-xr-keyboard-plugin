#include "samplekeyboard.h"

SampleKeyboard::SampleKeyboard(QObject *parent) : Keyboard (parent) {
    m_releaseTimer = new QTimer(this);
    m_releaseTimer->setSingleShot(true);
    m_releaseTimer->setInterval(50);
    m_releaseTimer->callOnTimeout(this, &SampleKeyboard::releaseKey, Qt::AutoConnection);
}

void SampleKeyboard::sendCharacter() {
    QKeyEvent keyEvent(QEvent::KeyPress, Qt::Key_F, Qt::KeyboardModifier::ShiftModifier, 33, 33, Qt::KeyboardModifier::ShiftModifier, "F", false, 1);
    emit fullKeyEvent(qKeyEventToQmlEvent(&keyEvent));
    m_releaseTimer->start();
}

void SampleKeyboard::releaseKey() {
    QKeyEvent keyEvent(QEvent::KeyRelease, Qt::Key_F, Qt::KeyboardModifier::ShiftModifier, 33, 33, Qt::KeyboardModifier::ShiftModifier, "F", false, 1);
    emit fullKeyEvent(qKeyEventToQmlEvent(&keyEvent));
}

