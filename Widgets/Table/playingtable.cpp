#include "playingtable.h"
#include "Widgets/Table/sizes.h"
//qt
#include <QDebug>


PlayingTable::PlayingTable(QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(0x3*POS_WIDTH,
                   0x3*POS_HEIGHT);
    setMaximumSize(0x3*POS_WIDTH,
                   0x3*POS_HEIGHT);
    addWidgets();
}

void PlayingTable::addWidgets()
{
    for (int i = 0x0; i < 0x9; ++i) {
        pos[i] = new PositionForGame(this);
    }

    //asignar cada una de las imagenes de las posiciones
    //para construir el tablero del juego
    pos[0x0]->assignPixmapPosition(":/Widgets/Images/pos1.xpm");
    pos[0x1]->assignPixmapPosition(":/Widgets/Images/pos2.xpm");
    pos[0x2]->assignPixmapPosition(":/Widgets/Images/pos3.xpm");

    pos[0x3]->assignPixmapPosition(":/Widgets/Images/pos4.xpm");
    pos[0x4]->assignPixmapPosition(":/Widgets/Images/pos5.xpm");
    pos[0x5]->assignPixmapPosition(":/Widgets/Images/pos6.xpm");

    pos[0x6]->assignPixmapPosition(":/Widgets/Images/pos7.xpm");
    pos[0x7]->assignPixmapPosition(":/Widgets/Images/pos8.xpm");
    pos[0x8]->assignPixmapPosition(":/Widgets/Images/pos9.xpm");
    //poner las posiciones en sus coordenadas
    int c=0x0;
    for (int row=0x0; row < 0x3; ++row)
        for (int col=0x0; col < 0x3; ++col, ++c)
        {
            pos[c]->moveToPoint(col*POS_WIDTH,
                                row*POS_HEIGHT);
        }
}
