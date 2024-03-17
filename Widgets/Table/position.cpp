#include "position.h"






Position::Position(QWidget *parent) :
    Image(parent)
{
    setMinimumSize(POS_WIDTH, POS_HEIGHT);
    setMaximumSize(POS_WIDTH, POS_HEIGHT);
}



