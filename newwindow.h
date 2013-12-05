#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>

<<<<<<< HEAD
/*! \brief Class for displaying Music Sheets feature
 * in a new window opened when Music Sheet is clicked.
 *  Inherits for QMainWindow from Qt
=======
/*! \brief Music sheets NewWindow.
 *Creates a new window when user clicks on
 *the music sheets button. The new window
 *displays various sample music sheets
 *for the user to play. 
>>>>>>> 50b6156f95a4acf7afac0c77e7a85d4d935385c4
 */

namespace Ui {
class NewWindow;
}

class NewWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit NewWindow(QWidget *parent = 0);
    ~NewWindow();
    
private:
    Ui::NewWindow *ui;
};

#endif // NEWWINDOW_H
