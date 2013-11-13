#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sounds.h"
//#include <QtMultimedia/QMediaPlayer>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Sounds* samples;

private slots:




    void keyPressEvent(QKeyEvent *event);



    void on_pushButton_C1_pressed();

    void on_pushButton_CS1_pressed();

    void on_pushButton_D1_pressed();

    void on_pushButton_DS1_pressed();

    void on_pushButton_E1_pressed();

    void on_pushButton_F1_pressed();

    void on_pushButton_FS1_pressed();

    void on_pushButton_G1_pressed();

    void on_pushButton_GS1_pressed();

    void on_pushButton_A1_pressed();

    void on_pushButton_AS1_pressed();

    void on_pushButton_B1_pressed();

    void on_pushButton_C2_pressed();

    void on_pushButton_CS2_pressed();

    void on_pushButton_D2_pressed();

    void on_pushButton_DS2_pressed();

    void on_pushButton_E2_pressed();

    void on_pushButton_F2_pressed();

    void on_pushButton_FS2_pressed();

    void on_pushButton_G2_pressed();

    void on_pushButton_GS2_pressed();

    void on_pushButton_A2_pressed();

    void on_pushButton_AS2_pressed();

    void on_pushButton_B2_pressed();

    void on_pushButton_C3_pressed();

    void on_pushButton_CS3_pressed();

    void on_pushButton_D3_pressed();

    void on_pushButton_DS3_pressed();

    void on_pushButton_E3_pressed();

    void on_pushButton_F3_pressed();

    void on_pushButton_FS3_pressed();

    void on_pushButton_G3_pressed();

    void on_pushButton_GS3_pressed();

    void on_pushButton_A3_pressed();

    void on_pushButton_AS3_pressed();

    void on_pushButton_B3_pressed();

    void on_pushButton_C4_pressed();

    void on_pushButton_CS4_pressed();

    void on_pushButton_D4_pressed();

    void on_pushButton_DS4_pressed();

    void on_pushButton_E4_pressed();

    void on_pushButton_F4_pressed();

    void on_pushButton_FS4_pressed();

    void on_pushButton_G4_pressed();

    void on_pushButton_GS4_pressed();

    void on_pushButton_A4_pressed();

    void on_pushButton_AS4_pressed();

    void on_pushButton_B4_pressed();

    void on_pushButton_C5_pressed();

    void on_pushButton_CS5_pressed();

    void on_pushButton_D5_pressed();

    void on_pushButton_DS5_pressed();

    void on_pushButton_E5_pressed();

    void on_pushButton_F5_pressed();

    void on_pushButton_FS5_pressed();

    void on_pushButton_G5_pressed();

    void on_pushButton_GS5_pressed();

    void on_pushButton_A5_pressed();

    void on_pushButton_AS5_pressed();

    void on_pushButton_B5_pressed();

    void on_pushButton_C6_pressed();

    void on_pushButton_Wurlitzer_clicked();

    void on_pushButton_Vibes_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QString file;
};

#endif // MAINWINDOW_H
