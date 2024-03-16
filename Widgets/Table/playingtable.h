#ifndef PLAYINGTABLE_H
#define PLAYINGTABLE_H

#include <QWidget>
//app
#include "Widgets/Table/position.h"


/**
 * @brief Widget con el Tablero del juego
 */
class PlayingTable : public QWidget
{
    Q_OBJECT
public:
    explicit PlayingTable(QWidget *parent = nullptr);


public slots:



private:
    Position *pos[9];

    //metodos
    void addWidgets();

signals:

};

#endif // PLAYINGTABLE_H
