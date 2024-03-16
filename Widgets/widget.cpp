#include "widget.h"
//qt
#include <QHBoxLayout>
#include <QVBoxLayout>
//app
#include "Widgets/info.h"
#include "Widgets/sideband.h"
#include "Widgets/Table/playingtable.h"




Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("3 En Línea");
    setMinimumSize(600,500);
    addWidgets();
}


Widget::~Widget()
{
}


void Widget::addWidgets()
{
    QVBoxLayout *main_layout=
            new QVBoxLayout(this);
    QHBoxLayout *game_layout=
            new QHBoxLayout;
    SideBand *sideBand1=
            new SideBand(this);
    SideBand *sideBand2=
            new SideBand(this);
    sideBand2->setColor(PShape::SecondColor);

    //tablero
    PlayingTable *playingTable=
            new PlayingTable(this);

    //ubicar jugador 1
    game_layout->addWidget(sideBand1);
    //tablero
    game_layout->addWidget(playingTable);
    //ubicar jugador 2
    game_layout->addWidget(sideBand2);

    Info *info=
            new Info(this);
    main_layout->addLayout(game_layout);
    main_layout->addWidget(info);
}

