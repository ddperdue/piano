#include "mainwindow.h"
#include "newwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"


void MainWindow::on_pushButton_C1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[0])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_CS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[1])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();

}

void MainWindow::on_pushButton_D1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[2])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_DS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[3])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_E1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[4])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_F1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[5])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_FS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[6])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_G1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[7])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_GS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[8])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_A1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[9])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_AS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[10])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_B1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[11])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_C2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[12])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_CS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[13])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_D2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[14])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_DS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[15])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_E2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[16])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_F2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[17])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_FS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[18])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_G2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[19])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_GS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[20])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_A2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[21])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_AS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[22])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_B2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[23])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_C3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[24])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_CS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[25])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_D3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[26])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();;
}

void MainWindow::on_pushButton_DS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[27])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_E3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[28])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_F3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[29])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();;
}

void MainWindow::on_pushButton_FS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[30])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_G3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[31])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_GS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[32])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_A3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[33])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_AS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[34])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_B3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[35])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_C4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[36])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_CS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[37])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_D4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[38])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_DS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[39])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_E4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[40])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_F4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[41])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_FS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[42])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_G4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[43])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_GS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[44])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_A4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[45])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_AS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[46])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_B4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[47])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_C5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[48])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_CS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[49])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_D5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[50])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_DS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[51])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_E5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[52])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_F5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[53])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_FS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[54])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_G5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[55])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_GS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[56])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_A5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[57])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_AS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[58])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_B5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[59])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}

void MainWindow::on_pushButton_C6_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[60])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
}
