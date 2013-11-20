#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"
//#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QMediaPlayer>
#include <QEvent>
#include <QKeyEvent>
#include <QDir>
#include <QMediaPlayerControl>
#include <iostream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    volume = 50;
    speed = 0;
    samples = new Sounds;
    ui->horizontalSlider->setRange(0, 600);
<<<<<<< HEAD

    //ui->webView->load(QUrl("http://maps.google.com"));
=======
>>>>>>> f5f4b2bb889d5432da0ee5de9f67a4d244d4a6ba

    //Letter = new QKeyEvent;
    //func[0] = MainWindow::on_pushButton_C1_pressed;

    on_pushButton_C6_pressed();
    on_pushButton_C5_pressed();
    on_pushButton_C3_pressed();
    on_pushButton_C4_pressed();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_C1_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QMediaContent(QUrl::fromLocalFile(QDir::currentPath() + samples->files[0])));
    player->setVolume(volume);
    player->play();
    std::cout << player->PlayingState;

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






void MainWindow::keyPressEvent(QKeyEvent* event){
    switch (event->key()) {


    case 0x31: // 1    
        MainWindow::on_pushButton_C1_pressed();
        break;
    case 0x21: // !
        MainWindow::on_pushButton_CS1_pressed();
        break;
    case 0x32: // 2
        MainWindow::on_pushButton_D1_pressed();
        break;
    case 0x40: // @
        MainWindow::on_pushButton_DS1_pressed();
        break;
    case 0x33: // 3
        MainWindow::on_pushButton_E1_pressed();
        break;
    case 0x34: // 4
        MainWindow::on_pushButton_F1_pressed();
        break;
    case 0x24: // $
        MainWindow::on_pushButton_FS1_pressed();
        break;
    case 0x35: // 5
        MainWindow::on_pushButton_G1_pressed();
        break;
    case 0x205: // %
        MainWindow::on_pushButton_GS1_pressed();
        break;
    case 0x36: // 6
        MainWindow::on_pushButton_A1_pressed();
        break;
    case 0x5E: // ^
        MainWindow::on_pushButton_AS1_pressed();
        break;
    case 0x37: // 7
        MainWindow::on_pushButton_B1_pressed();;
        break;
    case 0x38: // 8
        MainWindow::on_pushButton_C2_pressed();
        break;
    case 0x2A: // *
        MainWindow::on_pushButton_CS2_pressed();
        break;
    case 0x39: // 9
        MainWindow::on_pushButton_D2_pressed();
        break;
    case 0x28: // (
        MainWindow::on_pushButton_DS2_pressed();
        break;
    case 0x30: // 0
        MainWindow::on_pushButton_E2_pressed();
        break;
    case 0x51: //q
        if (event->modifiers())
            MainWindow::on_pushButton_FS2_pressed();
        else
            MainWindow::on_pushButton_F2_pressed();
        break;
    case 0x57: //w
        if (event->modifiers())
            MainWindow::on_pushButton_GS2_pressed();
        else
            MainWindow::on_pushButton_G2_pressed();
        break;
     case 0x45: //e
        if (event->modifiers())
            MainWindow::on_pushButton_AS2_pressed();
        else
            MainWindow::on_pushButton_A2_pressed();
        break;
     case 0x52: //r
            MainWindow::on_pushButton_B2_pressed();
        break;
     case 0x54: //t
        if (event->modifiers())
            MainWindow::on_pushButton_CS3_pressed();
        else
            MainWindow::on_pushButton_C3_pressed();
        break;
    case 0x59: //y
        if (event->modifiers())
            MainWindow::on_pushButton_DS3_pressed();
        else
            MainWindow::on_pushButton_D3_pressed();
        break;
    case 0x55: //u
            MainWindow::on_pushButton_E3_pressed();
        break;
    case 0x49: //i
        if (event->modifiers())
            MainWindow::on_pushButton_FS3_pressed();
        else
            MainWindow::on_pushButton_F3_pressed();
        break;
    case 0x4f: //o
        if (event->modifiers())
            MainWindow::on_pushButton_GS3_pressed();
        else
            MainWindow::on_pushButton_G3_pressed();
        break;
    case 0x50: //p
        if (event->modifiers())
            MainWindow::on_pushButton_AS3_pressed();
        else
            MainWindow::on_pushButton_A3_pressed();
        break;
    case 0x41: //a
            MainWindow::on_pushButton_B3_pressed();
        break;
    case 0x53: //s
        if (event->modifiers())
            MainWindow::on_pushButton_CS4_pressed();
        else
            MainWindow::on_pushButton_C4_pressed();
        break;
    case 0x44: //d
        if (event->modifiers())
            MainWindow::on_pushButton_DS4_pressed();
        else
            MainWindow::on_pushButton_D4_pressed();
        break;
    case 0x46: //f
            MainWindow::on_pushButton_E4_pressed();
        break;
    case 0x47: //g
        if (event->modifiers())
            MainWindow::on_pushButton_FS4_pressed();
        else
            MainWindow::on_pushButton_F4_pressed();
        break;
    case 0x48: //h
        if (event->modifiers())
            MainWindow::on_pushButton_GS4_pressed();
        else
            MainWindow::on_pushButton_G4_pressed();
        break;
    case 0x4a: //j
        if (event->modifiers())
            MainWindow::on_pushButton_AS4_pressed();
        else
            MainWindow::on_pushButton_A4_pressed();
        break;
    case 0x4b: //k
            MainWindow::on_pushButton_B4_pressed();
        break;
    case 0x4c: //l
        if (event->modifiers())
            MainWindow::on_pushButton_CS5_pressed();
        else
            MainWindow::on_pushButton_C5_pressed();
        break;
    case 0x5a: //z
        if (event->modifiers())
            MainWindow::on_pushButton_DS5_pressed();
        else
            MainWindow::on_pushButton_D5_pressed();
        break;
    case 0x58: //x
            MainWindow::on_pushButton_E5_pressed();
        break;
    case 0x43: //c
        if (event->modifiers())
            MainWindow::on_pushButton_FS5_pressed();
        else
            MainWindow::on_pushButton_F5_pressed();
        break;
    case 0x56: //v
        if (event->modifiers())
            MainWindow::on_pushButton_GS5_pressed();
        else
            MainWindow::on_pushButton_G5_pressed();
        break;
    case 0x42: //b
        if (event->modifiers())
            MainWindow::on_pushButton_AS5_pressed();
        else
            MainWindow::on_pushButton_A5_pressed();
        break;
    case 0x4e: //n
            MainWindow::on_pushButton_B5_pressed();
        break;
    case 0x4d: //m
            MainWindow::on_pushButton_C6_pressed();
        break;

    default:
        break;
    }
}


void MainWindow::on_pushButton_Wurlitzer_clicked()
{
    samples->setSound(1);
}

void MainWindow::on_pushButton_Vibes_clicked()
{
    samples->setSound(2);
}

void MainWindow::on_pushButton_Rhodes_clicked()
{
    samples->setSound(5);
}

void MainWindow::on_pushButton_Clavichord_clicked()
{
    samples->setSound(6);
}

void MainWindow::on_pushButton_Guitar_pressed()
{
    samples->setSound(7);
}

void MainWindow::on_pushButton_Glockenspiel_pressed()
{
    samples->setSound(8);
}



void MainWindow::on_dial_valueChanged(int value)
{
    volume = value;
}
