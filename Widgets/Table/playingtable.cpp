#include "playingtable.h"

#include <QDebug>


PlayingTable::PlayingTable(QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(0x3*0x82, 0x3*0x82);
    setMaximumSize(0x3*0x82, 0x3*0x82);
    addWidgets();
}

void PlayingTable::addWidgets()
{
    for (int i = 0x0; i < 0x9; ++i) {
        pos[i] = new Position(this);
    }

    //asignar cada una de las imagenes de las posiciones
    //para construir el tablero del juego
    pos[0x0]->assignPixmap(":/Widgets/Images/pos1.xpm");
    pos[0x1]->assignPixmap(":/Widgets/Images/pos2.xpm");
    pos[0x2]->assignPixmap(":/Widgets/Images/pos3.xpm");

    pos[0x3]->assignPixmap(":/Widgets/Images/pos4.xpm");
    pos[0x4]->assignPixmap(":/Widgets/Images/pos5.xpm");
    pos[0x5]->assignPixmap(":/Widgets/Images/pos6.xpm");

    pos[0x6]->assignPixmap(":/Widgets/Images/pos7.xpm");
    pos[0x7]->assignPixmap(":/Widgets/Images/pos8.xpm");
    pos[0x8]->assignPixmap(":/Widgets/Images/pos9.xpm");
    //poner las posiciones en sus coordenadas
    int c=0x0;
    for (int row=0x0; row < 0x3; ++row)
        for (int col=0x0; col < 0x3; ++col, ++c)
        {
            qDebug() << c << &pos[c] << row*0x82 << col*0x82;
            pos[c]->moveToPoint(col*0x82, row*0x82);
        }
}
