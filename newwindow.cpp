#include "newwindow.h"
#include "ui_newwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QTextBrowser>

/*! \brief Music sheets NewWindow.
 *creating a music sheet window type read-only
 *when Music sheets is clicked it will open
 *new window with different music sheets in it.
 */

NewWindow::NewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewWindow)
{
    ui->setupUi(this);
    ui->textBrowser->setText("***Some Of Für Elise***"
                             "\nf D f D f a d s p - t u p a  - u O a s"
                             "\nu f D f D f a d s p - t u p a  -  u s a p - a s d f - o g f d - i f d s"
                             "\nu d s a - u f u f f x D f D f D f D f D f D f a d s p"
                             "\nt u p a - u O a s - u f D f D f a d s p - t u p a - u s a p"


                             "\n\n***Twinkle Twinkle Little Star***"
                            "\ndd jj kk j hh GG ff d jj hh GG f jj hh GG f dd jj kk j hh GG ff d"

                             "\n\n***Happy Birthday To You***"
                             "\ns s d s g f"
                             "\ns s d s h g"
                             "\ns s l j g f d"
                             "\nJ J j g h g"

                             "\n\n***The Godfather***"
                             "\no-s-D-d-s-D-s-d-s-O-P-o"
                             "\no-s-D-d-s-D-s-d-s-o-I- i"
                             "\ni-O-a-d"
                             "\ni-O-a-s"
                             "\nt-Y-P-O-o-P-O-O-o-o-r-t"
                             "\ns-s-a-P-d-s-O-o"
                             "\no-P-o-i"
                             "\ni-O-i-o"
                            "\nP-o-s-D-d-s-D-s-d-s-O-P-o"
                            "\no-s-D-d-s-D-s-d-s-o-I-i"
                             "\ns-s-a-P-d-s-O-o"
                             "\nt-Y-P-O-o-P-O-O-o-o-r-t"

                             "\n\n***A Whole New World***"
                             "\nu y i u t w"
                             "\nu y i u t u y"
                             "\ny T u y r y t r t e t y t w"

                             "\n\nu y i u t w"
                             "\nu y i u t u y"
                             "\ny T u y r y t r t e t y t u"

                             "\n\nu i p o"
                             "\nu i p o y i u u"
                             "\nu i o a p o"
                             "\nt a s o"
                             "\nt u y t y i u t r t"

                             "\n\n***Under The Sea***"
                             "\nu o s f f f d g f s"
                             "\nu u o s s s a d s"

                             "\n\ns s s s a d s o"
                             "\nu o o o i p o"
                             "\ns s s s a d s o"
                             "\nu o o o i p o"
                             "\np s s p o s o s"
                             "\nd d d s f d s"
                             "\np s s p o s o s"
                             "\nd d d s f d s"

                             "\n\nf s"
                             "\nf d s p - f d s d"
                             "\nf d s p o f d s p o f d s f"
                             "\nf d s p p s d d"
                             "\nf d s d d f f s"
                             "\nf d s p o f d s p o f d s f"


                             "\n\n***Yesterday***"
                             "\noii paSdfgf dd ddsPpoP pp oipoyi pp"
                             "\noii paSdfgf dd ddsPpoP pp oipoyi pp"
                             "\np p dfgfd fdsd p"
                             "\np p dfgfd fsPf g s P p"
                             "\noii paSdfgf dd ddsPpoPpp oipoyi pp"
                             "\np p dfgfd fdsd p"
                             "\np p dfgfd fsPf g"
                             "\noii paSdfgf dd ddsPpoPpp oipoyi pp"
                             "\nipoyi pp"

                             "\n\n***Terminator theme:***"
                             "\nyui u t q - yui u t p o - yui u t w - q - 9 qq 0 9"

                             "\n\n***X-Files***"
                             "\np f d f h f - p f d f j f - l k j h j f - l k j h k - p f d f h f - pu"


                             "\n\n***Mario Theme***"
                             "\nfff sf h o soupa Ppo fhj ghf sda"
                             "\nsoupa Ppo fhj ghf sda hGgDf"
                             "\nOpspsd hGgDf III Opspsd (DO) (id)"
                             "\n(us) ssssdfspo ssssdf ssssdfspo"
                             "\nfffsfho fsoopggp ajjjhgfspo fsoopggp"
                             "\n(ao) (dg) (dg) (dg) (sf) (ad) (os) u t"

                             "\n\n***Tetris Theme***"
                             "\nf asd sap psf dsa sd fs pp"
                             "\ndgj hgf sfdsa asd fs pp"


                             "\n\n***Edelweiss (Sound of Muisc)***"
                             "\n w y p - o y t - r r r t y u y - r y p o y t - r y y u I o o o"
                             "\np y I u y r y o - u o p - o I y - r y p - o y t - r y y u I o o o"


                             "\n\n\nmusic sheets courtesy of VirtualPiano.net"
                             );

}

NewWindow::~NewWindow()
{
    delete ui;
}
