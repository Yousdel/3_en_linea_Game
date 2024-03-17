#ifndef PLAYINGTABLE_H
#define PLAYINGTABLE_H

#include <QWidget>
//app
#include "Widgets/Table/positionforgame.h"


/**
 * @brief Widget con el Tablero del juego
 */
class PlayingTable : public QWidget
{
    Q_OBJECT
public:
    explicit PlayingTable(QWidget *parent = nullptr);


public slots:
    void putShapeOn(int position, PShape::Color color)
    {
        if (position >=0x9 || position <0x0)
        {
            return;
        }
        pos[position]->putShape(color);
    }


private:
    PositionForGame *pos[9];

    //metodos
    void addWidgets();

signals:

};

#endif // PLAYINGTABLE_H
