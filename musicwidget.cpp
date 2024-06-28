#include "musicwidget.h"
#include "ui_musicwidget.h"
#include "Texts.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QHBoxLayout>
#include <QPushButton>
#include <QString>


MusicWidget::MusicWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MusicWidget)
{
    ui->setupUi(this);

    mediaPlayer=new QMediaPlayer(this);
    audioOutput= new QAudioOutput(this);

    //path_now="D:/Lishuhua/qt_projects/宗熹的音乐播放器/music/Haddaway - What Is Love.mp3";
    //path_now=path_classic;
    //mediaPlayer->setSource(QUrl::fromLocalFile(path_classic));

    connect(mediaPlayer, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    mediaPlayer->setAudioOutput(audioOutput);
    audioOutput->setVolume(2);


}

void MusicWidget::setMusic(QString path){
    mediaPlayer->setSource(QUrl::fromLocalFile(path));

}

void MusicWidget::updateMusicTitle(QString title)
{
    ui->label->setText(title);
    ui->label->setWordWrap(true);
}

MusicWidget::~MusicWidget()
{
    delete ui;
    mediaPlayer->stop();
    mediaPlayer->setAudioOutput(NULL);
    delete mediaPlayer;
    delete audioOutput;
}



void MusicWidget::on_btPlayPause_clicked()
{
    if (mediaPlayer->playbackState() == QMediaPlayer::PlayingState) {

        mediaPlayer->pause();
        ui->btPlayPause->setStyleSheet("QPushButton#btPlayPause{border-image:url(:/new/prefix1/image/play.png);}");
    }
    else if(mediaPlayer->playbackState() == QMediaPlayer::PausedState){

        mediaPlayer->play();
        ui->btPlayPause->setStyleSheet("QPushButton#btPlayPause{border-image:url(:/new/prefix1/image/pause.png);}");

    }
    else {
        mediaPlayer->play();
        ui->btPlayPause->setStyleSheet("QPushButton#btPlayPause{border-image:url(:/new/prefix1/image/pause.png);}");

    }
}


void MusicWidget::on_btHalt_clicked()
{
    mediaPlayer->stop();
    ui->btPlayPause->setStyleSheet("QPushButton#btPlayPause{border-image:url(:/new/prefix1/image/play.png);}");
}

