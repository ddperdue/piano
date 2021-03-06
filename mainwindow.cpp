#include "mainwindow.h"
#include "newwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"
#include <iostream>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/darkerWoodGrain.png");
    ui->label_3->setPixmap(pix);

    volume = 50;
    speed = 0;
    samples = new Sounds;
    musicSheet = new NewWindow;
    recorder = new QAudioRecorder(this);
    playRecording = new QMediaPlayer;

    audioSettings.setCodec("audio/amr");
    audioSettings.setQuality(QMultimedia::HighQuality);

    recorder->setEncodingSettings(audioSettings);
    recorder->setAudioInput("Built-In Input");

    players = new QMediaPlayer[20];

    whichPlayer = 0;

    ui->horizontalSlider->setRange(0, 600);

    on_pushButton_C6_pressed();
    on_pushButton_C5_pressed();
    on_pushButton_C3_pressed();
    on_pushButton_C4_pressed();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Wurlitzer_clicked()
{
    samples->setSound(1);
}

void MainWindow::on_pushButton_Vibes_clicked()
{
    samples->setSound(2);
}

void MainWindow::on_pushButton_Piano_clicked()
{
    volume = volume + 50;
    samples->setSound(3);
}

void MainWindow::on_pushButton_Rhodes_clicked()
{
    samples->setSound(4);
}

void MainWindow::on_pushButton_Guitar_pressed()
{
    samples->setSound(5);
}

void MainWindow::on_pushButton_Glockenspiel_pressed()
{
    samples->setSound(6);
}

void MainWindow::on_dial_valueChanged(int value)
{
    volume = value;
}



void MainWindow::on_pushButton_musicSheets_clicked()
{
    musicSheet->show();

}



