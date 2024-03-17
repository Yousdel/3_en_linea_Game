#include "widget.h"
//qt
#include <QHBoxLayout>
#include <QVBoxLayout>
//app
#include "Widgets/info.h"
#include "Widgets/sideband.h"
#include "Widgets/Table/playingtable.h"
#include "Tools/Utils.h"



Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(APP_TITLE);
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

    //ubicar banda del jugador 1
    game_layout->addWidget(sideBand1);
    //tablero
    game_layout->addStretch(0x1);
    game_layout->addWidget(playingTable);
    //ubicar banda del  jugador 2
    game_layout->addStretch(0x1);
    game_layout->addWidget(sideBand2);

    Info *info=
            new Info(this);
    main_layout->addLayout(game_layout);
    main_layout->addWidget(info);

    //ejemplo
    playingTable->putShapeOn(0x0, PShape::FirstColor);
    playingTable->putShapeOn(0x7, PShape::SecondColor);
}

