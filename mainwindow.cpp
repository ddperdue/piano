#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QMediaPlayer>
#include <QEvent>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   /* QMediaPlayer* key = new QMediaPlayer;
    key->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C2 -11.wav"));
    key->setVolume(50);
    key->play();*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::on_pushButton_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C3 -11.wav"));
    player->setVolume(50);
    player->play();

}


void MainWindow::on_pushButton_2_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C#3 -11.wav"));
    player2->setVolume(50);
    player2->play();
}

void MainWindow::on_pushButton_3_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D3 -11.wav"));
    player2->setVolume(50);
    player2->play();
}


void MainWindow::on_pushButton_4_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D#3 -11.wav"));
    player2->setVolume(50);
    player2->play();
}

void MainWindow::on_pushButton_5_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 E3 -11.wav"));
    player2->setVolume(50);
    player2->play();
}


void MainWindow::on_pushButton_6_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_7_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F#3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_8_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_9_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G#3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_10_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_11_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A#3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_12_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 B3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_13_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_14_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C#4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_15_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_16_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D#4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_17_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 E4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_18_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_19_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F#4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_20_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_21_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G#4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_22_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_23_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A#4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_24_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 B4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_25_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_26_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C#5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_27_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_28_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D#5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_29_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 E5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::keyPressEvent(QKeyEvent* event){
   // QKeyEvent* event = new QKeyEvent;
    switch (event->key()) {
    case 0x51: //q
        MainWindow::on_pushButton_pressed();
        break;
    case 0x57: //w
        MainWindow::on_pushButton_2_pressed();
        break;
     case 0x45: //e
        MainWindow::on_pushButton_3_pressed();
        break;
     case 0x52: //r
        MainWindow::on_pushButton_4_pressed();
        break;
     case 0x54: //t
        MainWindow::on_pushButton_5_pressed();
        break;
    case 0x59: //y
        MainWindow::on_pushButton_6_pressed();
        break;
    case 0x55: //u
        MainWindow::on_pushButton_7_pressed();
        break;
    case 0x49: //i
        MainWindow::on_pushButton_8_pressed();
        break;
    case 0x4f: //o
        MainWindow::on_pushButton_9_pressed();
        break;
    case 0x50: //p
        MainWindow::on_pushButton_10_pressed();
        break;
    case 0x41: //a
        MainWindow::on_pushButton_11_pressed();
        break;
    case 0x53: //s
        MainWindow::on_pushButton_12_pressed();
        break;
    case 0x44: //d
        MainWindow::on_pushButton_13_pressed();
        break;
    case 0x46: //f
        MainWindow::on_pushButton_14_pressed();
        break;
    case 0x47: //g
        MainWindow::on_pushButton_15_pressed();
        break;
    case 0x48: //h
        MainWindow::on_pushButton_16_pressed();
        break;
    case 0x4a: //j
        MainWindow::on_pushButton_17_pressed();
        break;
    case 0x4b: //k
        MainWindow::on_pushButton_18_pressed();
        break;
    case 0x4c: //l
        MainWindow::on_pushButton_19_pressed();
        break;
    case 0x3b: //;
        MainWindow::on_pushButton_20_pressed();
        break;
    case 0x5a: //z
        MainWindow::on_pushButton_21_pressed();
        break;
    case 0x58: //x
        MainWindow::on_pushButton_22_pressed();
        break;
    case 0x43: //c
        MainWindow::on_pushButton_23_pressed();
        break;
    case 0x56: //v
        MainWindow::on_pushButton_24_pressed();
        break;
    case 0x42: //b
        MainWindow::on_pushButton_25_pressed();
        break;
    case 0x4e: //n
        MainWindow::on_pushButton_26_pressed();
        break;
    case 0x4d: //m
        MainWindow::on_pushButton_27_pressed();
        break;
    case 0x2c: //,
        MainWindow::on_pushButton_28_pressed();
        break;
    case 0x2e: //.
        MainWindow::on_pushButton_29_pressed();
        break;


        default:
            break;
    }
}
*/

void MainWindow::on_pushButton_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C2 -11.wav"));
    player->setVolume(50);
    player->play();
    //MainWindow::key->play();

}


void MainWindow::on_pushButton_2_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D2 -11.wav"));
    player2->setVolume(50);
    player2->play();
}

void MainWindow::on_pushButton_3_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 E2 -11.wav"));
    player2->setVolume(50);
    player2->play();
}


void MainWindow::on_pushButton_4_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F2 -11.wav"));
    player2->setVolume(50);
    player2->play();
}

void MainWindow::on_pushButton_5_pressed()
{
    QMediaPlayer* player2 = new QMediaPlayer;
    player2->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G2 -11.wav"));
    player2->setVolume(50);
    player2->play();
}


void MainWindow::on_pushButton_6_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A2 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_7_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 B2 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_8_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_9_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_10_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 E3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_11_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_12_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_13_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_14_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 B3 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_15_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_16_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_17_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 E4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_18_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_19_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_20_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_21_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 B4 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_22_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_23_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 D5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_24_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 E5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_25_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 F5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_26_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 G5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_27_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 A5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_28_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 B5 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::on_pushButton_29_pressed()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/Users/DanPerdue/Music/Scarbee 16/Samples/EEP/Sustained/M/WEP sus m3 C6 -11.wav"));
    player->setVolume(50);
    player->play();
}

void MainWindow::keyPressEvent(QKeyEvent* event){
   // QKeyEvent* event = new QKeyEvent;
    switch (event->key()) {
    case 0x51: //q
        MainWindow::on_pushButton_pressed();
        break;
    case 0x57: //w
        MainWindow::on_pushButton_2_pressed();
        break;
     case 0x45: //e
        MainWindow::on_pushButton_3_pressed();
        break;
     case 0x52: //r
        MainWindow::on_pushButton_4_pressed();
        break;
     case 0x54: //t
        MainWindow::on_pushButton_5_pressed();
        break;
    case 0x59: //y
        MainWindow::on_pushButton_6_pressed();
        break;
    case 0x55: //u
        MainWindow::on_pushButton_7_pressed();
        break;
    case 0x49: //i
        MainWindow::on_pushButton_8_pressed();
        break;
    case 0x4f: //o
        MainWindow::on_pushButton_9_pressed();
        break;
    case 0x50: //p
        MainWindow::on_pushButton_10_pressed();
        break;
    case 0x41: //a
        MainWindow::on_pushButton_11_pressed();
        break;
    case 0x53: //s
        MainWindow::on_pushButton_12_pressed();
        break;
    case 0x44: //d
        MainWindow::on_pushButton_13_pressed();
        break;
    case 0x46: //f
        MainWindow::on_pushButton_14_pressed();
        break;
    case 0x47: //g
        MainWindow::on_pushButton_15_pressed();
        break;
    case 0x48: //h
        MainWindow::on_pushButton_16_pressed();
        break;
    case 0x4a: //j
        MainWindow::on_pushButton_17_pressed();
        break;
    case 0x4b: //k
        MainWindow::on_pushButton_18_pressed();
        break;
    case 0x4c: //l
        MainWindow::on_pushButton_19_pressed();
        break;
    case 0x3b: //;
        MainWindow::on_pushButton_20_pressed();
        break;
    case 0x5a: //z
        MainWindow::on_pushButton_21_pressed();
        break;
    case 0x58: //x
        MainWindow::on_pushButton_22_pressed();
        break;
    case 0x43: //c
        MainWindow::on_pushButton_23_pressed();
        break;
    case 0x56: //v
        MainWindow::on_pushButton_24_pressed();
        break;
    case 0x42: //b
        MainWindow::on_pushButton_25_pressed();
        break;
    case 0x4e: //n
        MainWindow::on_pushButton_26_pressed();
        break;
    case 0x4d: //m
        MainWindow::on_pushButton_27_pressed();
        break;
    case 0x2c: //,
        MainWindow::on_pushButton_28_pressed();
        break;
    case 0x2e: //.
        MainWindow::on_pushButton_29_pressed();
        break;


        default:
            break;
    }
}





