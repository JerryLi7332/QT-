#ifndef MUSICWIDGET_H
#define MUSICWIDGET_H

#include "Texts.h"
#include <QWidget>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QPushButton>
#include <QString>



namespace Ui {
class MusicWidget;
}

class MusicWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MusicWidget(QWidget *parent = nullptr);
    ~MusicWidget();
    // Method to play a specific audio file
    //void playAudio(const QString &audioFilePath);
    void setMusic(QString path);
    void updateMusicTitle(QString title);

private slots:
    void on_btPlayPause_clicked();
    void on_btHalt_clicked();

public:
    Ui::MusicWidget *ui;
    QMediaPlayer *mediaPlayer;  // Add QMediaPlayer member
    QAudioOutput *audioOutput;

    //QPushButton *playButton;
    //QLayout *layout;

public:
    //QString path_now;

};



#endif // MUSICWIDGET_H
