#include "mainwindow.h"
#include "newwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"
#include <QKeyEvent>


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
    case 0x25: // %
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

