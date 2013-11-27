#include "mainwindow.h"
#include "newwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"
//#include <QMediaPlayer>




void MainWindow::on_pushButton_C1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[0])));
    player->setVolume(volume);
    player->play();

}

void MainWindow::on_pushButton_CS1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[1])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_D1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[2])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_DS1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[3])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_E1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[4])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_F1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[5])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_FS1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[6])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_G1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[7])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_GS1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[8])));
    player->setVolume(volume);
  //player->setPlaybackRate(500);
    player->play();
}

void MainWindow::on_pushButton_A1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[9])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_AS1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[10])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_B1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[11])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_C2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[12])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_CS2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[13])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_D2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[14])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_DS2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[15])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_E2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[16])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_F2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[17])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_FS2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[18])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_G2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[19])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_GS2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[20])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_A2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[21])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_AS2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[22])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_B2_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[23])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_C3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[24])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_CS3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[25])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_D3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[26])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_DS3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[27])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_E3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[28])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_F3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[29])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_FS3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[30])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_G3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[31])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_GS3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[32])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_A3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[33])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_AS3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[34])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_B3_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[35])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_C4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[36])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_CS4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[37])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_D4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[38])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_DS4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[39])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_E4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[40])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_F4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[41])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_FS4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[42])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_G4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[43])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_GS4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[44])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_A4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[45])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_AS4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[46])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_B4_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[47])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_C5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[48])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_CS5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[49])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_D5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[50])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_DS5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[51])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_E5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[52])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_F5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[53])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_FS5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[54])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_G5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[55])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_GS5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[56])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_A5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[57])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_AS5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[58])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_B5_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[59])));
    player->setVolume(volume);
    player->play();
}

void MainWindow::on_pushButton_C6_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[60])));
    player->setVolume(volume);
    player->play();
}
