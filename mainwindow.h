#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

    
private slots:
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

    void on_pushButton_4_pressed();

    void on_pushButton_5_pressed();

    void on_pushButton_6_pressed();

    void on_pushButton_7_pressed();

    void on_pushButton_8_pressed();

    void on_pushButton_9_pressed();

    void on_pushButton_10_pressed();

    void on_pushButton_11_pressed();

    void on_pushButton_12_pressed();

    void on_pushButton_13_pressed();

    void on_pushButton_14_pressed();

    void on_pushButton_15_pressed();

    void on_pushButton_16_pressed();

    void on_pushButton_17_pressed();

    void on_pushButton_18_pressed();

    void on_pushButton_19_pressed();

    void on_pushButton_20_pressed();

    void on_pushButton_21_pressed();

    void on_pushButton_22_pressed();

    void on_pushButton_23_pressed();

    void on_pushButton_24_pressed();

    void on_pushButton_25_pressed();

    void on_pushButton_26_pressed();

    void on_pushButton_27_pressed();

    void on_pushButton_28_pressed();

    void on_pushButton_29_pressed();

    void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
   // QMediaPlayer* key;

};

#endif // MAINWINDOW_H
