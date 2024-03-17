#ifndef POSITIONFORGAME_H
#define POSITIONFORGAME_H

//qt
#include <QWidget>
//app
#include "Widgets/pshape.h"
#include "Widgets/Table/sizes.h"

class Position;
class PShape;


/**
 * @brief Esta sera la clase de cada posicion lista para
 * "aceptar" fichas.
 */
class PositionForGame : public QWidget
{
    Q_OBJECT
public:
    explicit PositionForGame(QWidget *parent);

    void assignPixmapPosition(
            const QString &filename);
    void putShape(const PShape::Color &color)
    {
        shape->setColor(color);
        shape->moveToPoint(POS_WIDTH/0x2-SHAPE_WIDTH/0x2,
                           POS_HEIGHT/0x2-SHAPE_HEIGHT/0x2);
        shape->show();
    }

    void moveToPoint(int x, int y)
    {
        move(QPoint(x,y));
    }

signals:

private:
    Position *pos;
    PShape *shape;

};

#endif // POSITIONFORGAME_H
