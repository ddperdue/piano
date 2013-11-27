#include "mainwindow.h"


void MainWindow::on_pushButton_Record_clicked()
{
    recording = QDir::currentPath() + "/" + QTime::currentTime().toString() + ".amr";

    recorder->setOutputLocation(QUrl::fromLocalFile(recording));
    recorder->record();
}

void MainWindow::on_pushButton_Stop_clicked()
{
    recorder->stop();

}

void MainWindow::on_pushButton_Play_clicked()
{
    playRecording->setMedia(QUrl::fromLocalFile(recording));
    playRecording->setVolume(100);

    playRecording->play();


}

