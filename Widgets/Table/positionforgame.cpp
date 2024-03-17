#include "positionforgame.h"

#include "Widgets/Table/position.h"



PositionForGame::PositionForGame(QWidget *parent) :
    QWidget(parent),
    pos (new Position(this)),
    shape (new PShape(this))
{
    pos->moveToPoint(0x0,0x0);
    shape->hide();
}

void PositionForGame::assignPixmapPosition(const QString &filename)
{
    pos->assignPixmap(filename);
}
