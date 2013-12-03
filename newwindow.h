#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>

/*! \brief Music sheets NewWindow.
 *Creates a new window when user clicks on
 *the music sheets button. The new window
 *displays various sample music sheets
 *for the user to play. 
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
