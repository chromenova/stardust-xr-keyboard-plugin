#ifndef SAMPLEKEYBOARD_H
#define SAMPLEKEYBOARD_H

#include <keyboard.h>
#include <QTimer>
#include <QKeyEvent>

class SampleKeyboard : public Keyboard
{
    Q_OBJECT
public:
    SampleKeyboard(QObject *parent = nullptr);
    Q_INVOKABLE void sendText(QString text);

    // Keyboard interface
signals:
    void fullKeyEvent(QObject *keyEvent);
    void keyEvent(int key, bool pressed);

public slots:
    void sendCharacter();
    void releaseKey();

private:
    QTimer *m_releaseTimer;
    QString m_text;
};

#endif // SAMPLEKEYBOARD_H
