#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>

/*! \brief Class for displaying Music Sheets feature
 * in a new window opened when Music Sheet is clicked.
 *  Inherits for QMainWindow from Qt
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
