#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sounds.h"
#include "newwindow.h"
#include <QThread>
#include <QMediaPlayer>
#include <QAudioRecorder>
#include <QAudioEncoderSettings>
#include <QDir>
#include <QStringList>
#include <QTime>

/*! \brief Main class
 *         for our virtual piano project.
 *         It contains slots for all signals from the
 *         GUI elements: piano keys, sound selections, color selections,
 *         textbox, and recording
 *  Inherits for QMainWindow from Qt
 */

namespace Ui {
class MainWindow;
}

class Sleeper : public QThread
{
public:
   static void msleep(unsigned long msecs){QThread::msleep(msecs);}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    /**
    * Constructor for MainWindow
    * Initializes several elements for later use in the program.
    * Sets volume and speed settings, sets up audio recording settings,
    * and initializes slider range.
    * @param parent a parent widget, can be null
    */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /*!
     * \brief This slot captures any event from the user
     * on the keyboard and depending on the value of 'event'
     * calls the apropriate slot corresponding to the correct
     * key on the piano. It uses event->modifiers to distinguish between
     * upper and lower case key presses.
     * \param event
     */
    void keyPressEvent(QKeyEvent *event);


    /*!
     * \brief When either the C1 key on the UI piano
     * is clicked or the 1 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_C1_pressed();

    /*!
     * \brief When either the C#1 key on the UI piano
     * is clicked or the ! is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_CS1_pressed();

    /*!
     * \brief When either the D1 key on the UI piano
     * is clicked or the 2 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_D1_pressed();

    /*!
     * \brief When either the D#1 key on the UI piano
     * is clicked or the @ is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_DS1_pressed();

    /*!
     * \brief When either the E1 key on the UI piano
     * is clicked or the 3 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_E1_pressed();

    /*!
     * \brief When either the F1 key on the UI piano
     * is clicked or the 4 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_F1_pressed();

    /*!
     * \brief When either the F#1 key on the UI piano
     * is clicked or the $ is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_FS1_pressed();

    /*!
     * \brief When either the G1 key on the UI piano
     * is clicked or the 5 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_G1_pressed();

    /*!
     * \brief When either the G#1 key on the UI piano
     * is clicked or the % is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_GS1_pressed();

    /*!
     * \brief When either the A1 key on the UI piano
     * is clicked or the 6 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_A1_pressed();

    /*!
     * \brief When either the A#1 key on the piano
     * is pressed or the ^ is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_AS1_pressed();

    /*!
     * \brief When either the B1 key on the piano
     * is pressed or the 7 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_B1_pressed();

    /*!
     * \brief When either the C1 key on the piano
     * is pressed or the 8 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_C2_pressed();

    /*!
     * \brief When either the C#2 key on the piano
     * is pressed or the * is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_CS2_pressed();

    /*!
     * \brief When either the D2 key on the piano
     * is pressed or the 9 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_D2_pressed();

    /*!
     * \brief When either the D#2 key on the piano
     * is pressed or the ( is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_DS2_pressed();

    /*!
     * \brief When either the E2 key on the piano
     * is pressed or the 0 is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_E2_pressed();

    /*!
     * \brief When either the F2 key on the piano
     * is pressed or the q is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_F2_pressed();

    /*!
     * \brief When either the F#2 key on the piano
     * is pressed or the Q is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_FS2_pressed();

    /*!
     * \brief When either the G2 key on the piano
     * is pressed or the w is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_G2_pressed();

    /*!
     * \brief When either the G#2 key on the piano
     * is pressed or the W is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_GS2_pressed();

    /*!
     * \brief When either the A2 key on the piano
     * is pressed or the e is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_A2_pressed();

    /*!
     * \brief When either the A#2 key on the piano
     * is pressed or the E is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_AS2_pressed();

    /*!
     * \brief When either the B2 key on the piano
     * is pressed or the r is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_B2_pressed();

    /*!
     * \brief When either the C3 key on the piano
     * is pressed or the t is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_C3_pressed();

    /*!
     * \brief When either the C#3 key on the piano
     * is pressed or the T is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_CS3_pressed();

    /*!
     * \brief When either the D3 key on the piano
     * is pressed or the y is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_D3_pressed();

    /*!
     * \brief When either the D#3 key on the piano
     * is pressed or the Y is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_DS3_pressed();

    /*!
     * \brief When either the E3 key on the piano
     * is pressed or the u is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_E3_pressed();

    /*!
     * \brief When either the F3 key on the piano
     * is pressed or the i is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_F3_pressed();

    /*!
     * \brief When either the F#3 key on the piano
     * is pressed or the I is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_FS3_pressed();

    /*!
     * \brief When either the G3 key on the piano
     * is pressed or the o is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_G3_pressed();

    /*!
     * \brief When either the G#3 key on the piano
     * is pressed or the O is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_GS3_pressed();

    /*!
     * \brief When either the A3 key on the piano
     * is pressed or the p is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_A3_pressed();

    /*!
     * \brief When either the A#3 key on the piano
     * is pressed or the P is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_AS3_pressed();

    /*!
     * \brief When either the B3 key on the piano
     * is pressed or the a is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_B3_pressed();

    /*!
     * \brief When either the C4 key on the piano
     * is pressed or the s is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_C4_pressed();

    /*!
     * \brief When either the C#4 key on the piano
     * is pressed or the S is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_CS4_pressed();

    /*!
     * \brief When either the D4 key on the piano
     * is pressed or the d is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_D4_pressed();

    /*!
     * \brief When either the D#4 key on the piano
     * is pressed or the D is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_DS4_pressed();

    /*!
     * \brief When either the E4 key on the piano
     * is pressed or the f is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_E4_pressed();

    /*!
     * \brief When either the F4 key on the piano
     * is pressed or the g is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_F4_pressed();

    /*!
     * \brief When either the F#4 key on the UI piano
     * is clicked or the G is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_FS4_pressed();

    /*!
     * \brief When either the G4 key on the UI piano
     * is clicked or the h is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_G4_pressed();

    /*!
     * \brief When either the G#4 key on the UI piano
     * is clicked or the H is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_GS4_pressed();

    /*!
     * \brief When either the A4 key on the UI piano
     * is clicked or the j is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_A4_pressed();

    /*!
     * \brief When either the A#4 key on the UI piano
     * is clicked or the J is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_AS4_pressed();

    /*!
     * \brief When either the B4 key on the UI piano
     * is clicked or the k is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_B4_pressed();

    /*!
     * \brief When either the C5 key on the UI piano
     * is clicked or the l is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_C5_pressed();

    /*!
     * \brief When either the C#5 key on the UI piano
     * is clicked or the L is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_CS5_pressed();

    /*!
     * \brief When either the D5 key on the UI piano
     * is clicked or the z is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_D5_pressed();

    /*!
     * \brief When either the D#5 key on the UI piano
     * is clicked or the Z is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_DS5_pressed();

    /*!
     * \brief When either the E5 key on the UI piano
     * is clicked or the x is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_E5_pressed();

    /*!
     * \brief When either the F5 key on the UI piano
     * is clicked or the c is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_F5_pressed();

    /*!
     * \brief When either the F#5 key on the UI piano
     * is clicked or the C is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_FS5_pressed();

    /*!
     * \brief When either the G5 key on the UI piano
     * is clicked or the v is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_G5_pressed();

    /*!
     * \brief When either the G#5 key on the UI piano
     * is clicked or the V is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_GS5_pressed();

    /*!
     * \brief When either the A5 key on the UI piano
     * is clicked or the b is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_A5_pressed();

    /*!
     * \brief When either the A#5 key on the UI piano
     * is clicked or the B is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_AS5_pressed();

    /*!
     * \brief When either the B5 key on the UI piano
     * is clicked or the n is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_B5_pressed();

    /*!
     * \brief When either the C6 key on the UI piano
     * is clicked or the m is pressed on the computer keyboard
     * this slot takes the QMediaPlayer in the array 'players' that was least recently used, sets its audio file
     * appropriately and then plays the audio file.
     */
    void on_pushButton_C6_pressed();


    /*!
     * \brief When clicked, this button changes the sound
     * of the instrument to be that of a wurlitzer piano, a
     * well known vintage electric piano.
     */
    void on_pushButton_Wurlitzer_clicked();

    /*!
     * \brief When clicked, this button changes the sound
     * of the instrument to be that of a acoustic piano.
     */
    void on_pushButton_Piano_clicked();

    /*!
     * \brief When clicked, this button changes the sound
     * of the instrument to be that of Mellotron Vibes. A
     * Mellotron is one of the first sample based instruments,
     * popularized by The Beatles
     */
    void on_pushButton_Vibes_clicked();

    /*!
     * \brief When clicked, this button changes the sound
     * of the instrument to be that of a Fender Rhodes piano, a
     * well known vintage electric piano.
     */
    void on_pushButton_Rhodes_clicked();

    /*!
     * \brief When clicked, this button changes the sound
     * of the instrument to be that of an electric guitar.
     */
    void on_pushButton_Guitar_pressed();

    /*!
     * \brief When clicked, this button changes the sound
     * of the instrument to be that of a Glockenspiel, a
     * mallet instrument.
     */
    void on_pushButton_Glockenspiel_pressed();

    /*!
     * \brief When the volume knob is moved, this slot sets
     * the value of the volume variable to the value of 'value', allowing
     * for adjustments to the instruments volume.
     * \param value
     */
    void on_dial_valueChanged(int value);

   /*!
    * \brief MainWindow::on_pushButton_clicked
    *  -On click of play button, function allows users to play the text typed 
    *   or pasted into the text box. First, the text is stored into a QString
    *   and processed one character at a time to play the sound corresponding
    *   to that specific charcter.
    */
    void on_pushButton_clicked();
   
    /*!
     * @brief MainWindow::on_horizontalSlider_valueChanged
     * @param value
     *      Function sets the speed at which the text that the user
     *       enters into the text box to the value that the user selects 
     *       by moving the horizontal slider below the text box.
     */

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_musicSheets_clicked();
   
    /*!
     * \brief MainWindow::on_pushButton_2_clicked
     *      Sets the background color of the piano to red
     */
    void on_pushButton_2_clicked();
   
    /*!
     * \brief MainWindow::on_pushButton_3_clicked
     *      Sets the background color of the piano to black
     */
    void on_pushButton_3_clicked();

    /*!
     * \brief MainWindow::on_pushButton_4_clicked
     *      Sets the background color of the piano to green
     */
    void on_pushButton_4_clicked();

    /*!
     * \brief MainWindow::on_pushButton_5_clicked
     *      Sets the background color of the piano to yellow
     */
    void on_pushButton_5_clicked();

    /*!
     * \brief MainWindow::on_pushButton_6_clicked
     *      Sets the background color of the piano to orange
     */
    void on_pushButton_6_clicked();

    /*!
     * \brief MainWindow::on_pushButton_7_clicked
     *      Sets the background color of the piano to blue
     */
    void on_pushButton_7_clicked();

    /*!
     * \brief This button stops both any recording or playback currently in progress.
     */
    void on_pushButton_Stop_clicked();

   /*!
    * \brief When the Record button on the UI piano
    * is clicked, this slot stores the current path of
    * the program in a string. Then a QAudioRecorder object
    * assigns the output location of a soon-to-be
    * new recording to this string's path.
    * Finally, the object starts recording what the 
    * user is actually playing.
    */
    void on_pushButton_Record_clicked();

   /*!
    * \brief When the Play button on the UI piano
    * is clicked, this slot sets the QMediaPlayer settings
    * to the path of where the recording file was stored.
    * It sets its volume, and finally, it plays the audio
    * file of what the user previously recorded. 
    */
    void on_pushButton_Play_clicked();

private:
    Ui::MainWindow *ui;

    /*!
     * \brief Sounds class for choosing different audio samples to play
     */
    Sounds* samples;

    /*!
     * \brief Window for Music Sheets feature
     */
    NewWindow* musicSheet;

    /*!
    * \brief Declares an object, recorder, to be of type
    * QAudioRecorder. Inherits all of its methods, 
    * including record() and stop().
    */
    QAudioRecorder* recorder;

   /*!
    * \brief Declares an object, audiosettings, to be of type
    * QAudioEncoderSettings. The object specifies the audio
    * encoder settings and sets the desired properties.
    */
    QAudioEncoderSettings audioSettings;

    /*!
    * \brief Declares an object, recording, to be of type
    * QString. The object stores the current path of where the 
    * recording will take place.
    */
    QString recording;

    /*!
    * \brief Declares an object, playrecording, to be of type
    * QMediaPlayer. The object allows us to provide the settings
    * for the recorded file, set its volume, and actually
    * play the recording back.
    */
    QMediaPlayer* playRecording;

    /*!
     * \brief Array of 20 QMediaPlayers for use in playing the audio samples for the virtual instrument.
     */
    QMediaPlayer* players;

    /*!
     * \brief Used to determine which QMediaPlayer from the players array to use for playing
     * the current key pressed.
     */
    int whichPlayer;

    /*!
     * \brief Sets internal volume.
     */
    int volume;

    /*!
     * \brief Sets playback speed of text box input.
     */
    int speed;
};

#endif // MAINWINDOW_H
