#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"

void MainWindow::on_pushButton_clicked()
{
    int i;
    QString txt = ui->lineEdit->text();


    for (i=0;i<txt.size();i++){

        Sleeper::msleep(speed);

        if(txt[i] == '1'){
            MainWindow::on_pushButton_C1_pressed();
        }
        if(txt[i] == '!'){
            MainWindow::on_pushButton_CS1_pressed();
        }
        if(txt[i] == '2'){
            MainWindow::on_pushButton_D1_pressed();
        }
        if(txt[i] == '@'){
            MainWindow::on_pushButton_DS1_pressed();
        }
        if(txt[i] == '3'){
            MainWindow::on_pushButton_E1_pressed();
        }
        if(txt[i] == '4'){
            MainWindow::on_pushButton_F1_pressed();
        }
        if(txt[i] == '$'){
            MainWindow::on_pushButton_FS1_pressed();
        }
        if(txt[i] == '5'){
            MainWindow::on_pushButton_G1_pressed();
        }
        if(txt[i] == '%'){
            MainWindow::on_pushButton_GS1_pressed();
        }
        if(txt[i] == '6'){
            MainWindow::on_pushButton_A1_pressed();
        }
        if(txt[i] == '^'){
            MainWindow::on_pushButton_AS1_pressed();
        }
        if(txt[i] == '7'){
            MainWindow::on_pushButton_B1_pressed();
        }
        if(txt[i] == '8'){
            MainWindow::on_pushButton_C2_pressed();
        }
        if(txt[i] == '*'){
            MainWindow::on_pushButton_CS2_pressed();
        }
        if(txt[i] == '9'){
            MainWindow::on_pushButton_D2_pressed();
        }
        if(txt[i] == '('){
            MainWindow::on_pushButton_DS2_pressed();
        }
        if(txt[i] == '0'){
            MainWindow::on_pushButton_E2_pressed();
        }
        if(txt[i] == 'q'){
            MainWindow::on_pushButton_FS2_pressed();
        }
        if(txt[i] == 'Q'){
            MainWindow::on_pushButton_F2_pressed();
        }
        if(txt[i] == 'W'){
            MainWindow::on_pushButton_GS2_pressed();
        }
        if(txt[i] == 'w'){
            MainWindow::on_pushButton_G2_pressed();
        }
        if(txt[i] == 'E'){
            MainWindow::on_pushButton_AS2_pressed();
        }
        if(txt[i] == 'e'){
            MainWindow::on_pushButton_A2_pressed();
        }
        if(txt[i] == 'r'){
            MainWindow::on_pushButton_B2_pressed();
        }
        if(txt[i] == 'T'){
            MainWindow::on_pushButton_CS3_pressed();
        }
        if(txt[i] == 't'){
            MainWindow::on_pushButton_C3_pressed();
        }
        if(txt[i] == 'Y'){
            MainWindow::on_pushButton_DS3_pressed();
        }
        if(txt[i] == 'y'){
            MainWindow::on_pushButton_D3_pressed();
        }
        if(txt[i] == 'u'){
            MainWindow::on_pushButton_E3_pressed();
        }
        if(txt[i] == 'I'){
            MainWindow::on_pushButton_FS3_pressed();
        }
        if(txt[i] == 'i'){
            MainWindow::on_pushButton_F3_pressed();
        }
        if(txt[i] == 'O'){
            MainWindow::on_pushButton_GS3_pressed();
        }
        if(txt[i] == 'o'){
            MainWindow::on_pushButton_G3_pressed();
        }
        if(txt[i] == 'P'){
            MainWindow::on_pushButton_AS3_pressed();
        }
        if(txt[i] == 'p'){
            MainWindow::on_pushButton_A3_pressed();
        }
        if(txt[i] == 'a'){
            MainWindow::on_pushButton_B3_pressed();
        }
        if(txt[i] == 'S'){
            MainWindow::on_pushButton_CS4_pressed();
        }
        if(txt[i] == 's'){
            MainWindow::on_pushButton_C4_pressed();
        }
        if(txt[i] == 'D'){
            MainWindow::on_pushButton_DS4_pressed();
        }
        if(txt[i] == 'd'){
            MainWindow::on_pushButton_D4_pressed();
        }
        if(txt[i] == 'f'){
            MainWindow::on_pushButton_E4_pressed();
        }
        if(txt[i] == 'G'){
            MainWindow::on_pushButton_FS4_pressed();
        }
        if(txt[i] == 'g'){
            MainWindow::on_pushButton_F4_pressed();
        }
        if(txt[i] == 'H'){
            MainWindow::on_pushButton_GS4_pressed();
        }
        if(txt[i] == 'h'){
            MainWindow::on_pushButton_G4_pressed();
        }
        if(txt[i] == 'J'){
            MainWindow::on_pushButton_AS4_pressed();
        }
        if(txt[i] == 'j'){
            MainWindow::on_pushButton_A3_pressed();
        }
        if(txt[i] == 'a'){
            MainWindow::on_pushButton_B3_pressed();
        }
        if(txt[i] == 'S'){
            MainWindow::on_pushButton_CS4_pressed();
        }
        if(txt[i] == 's'){
            MainWindow::on_pushButton_C4_pressed();
        }
        if(txt[i] == 'D'){
            MainWindow::on_pushButton_DS4_pressed();
        }
        if(txt[i] == 'd'){
            MainWindow::on_pushButton_D4_pressed();
        }
        if(txt[i] == 'f'){
            MainWindow::on_pushButton_E4_pressed();
        }
        if(txt[i] == 'G'){
            MainWindow::on_pushButton_FS4_pressed();
        }
        if(txt[i] == 'g'){
            MainWindow::on_pushButton_F4_pressed();
        }
        if(txt[i] == 'H'){
            MainWindow::on_pushButton_GS4_pressed();
        }
        if(txt[i] == 'h'){
            MainWindow::on_pushButton_G4_pressed();
        }
        if(txt[i] == 'J'){
            MainWindow::on_pushButton_AS4_pressed();
        }
        if(txt[i] == 'j'){
            MainWindow::on_pushButton_A4_pressed();
        }
        if(txt[i] == 'k'){
            MainWindow::on_pushButton_B4_pressed();
        }
        if(txt[i] == 'L'){
            MainWindow::on_pushButton_CS5_pressed();
        }
        if(txt[i] == 'l'){
            MainWindow::on_pushButton_C5_pressed();
        }
        if(txt[i] == 'Z'){
            MainWindow::on_pushButton_DS5_pressed();
        }
        if(txt[i] == 'z'){
            MainWindow::on_pushButton_D5_pressed();
        }
        if(txt[i] == 'x'){
            MainWindow::on_pushButton_E5_pressed();
        }
        if(txt[i] == 'C'){
            MainWindow::on_pushButton_FS5_pressed();
        }
        if(txt[i] == 'c'){
            MainWindow::on_pushButton_F5_pressed();
        }
        if(txt[i] == 'V'){
            MainWindow::on_pushButton_GS5_pressed();
        }
        if(txt[i] == 'v'){
            MainWindow::on_pushButton_G5_pressed();
        }
        if(txt[i] == 'B'){
            MainWindow::on_pushButton_AS5_pressed();
        }
        if(txt[i] == 'b'){
            MainWindow::on_pushButton_A5_pressed();
        }
        if(txt[i] == 'n'){
            MainWindow::on_pushButton_B5_pressed();
        }
        if(txt[i] == 'm'){
            MainWindow::on_pushButton_C6_pressed();
        }
    }
}



void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    speed = value;
}
