#ifndef SIDEBAND_H
#define SIDEBAND_H

#include <QWidget>
#include "Widgets/pshape.h"





/**
 * @brief Banda lateral generica
 */
class SideBand : public QWidget
{
    Q_OBJECT
public:
    //ctor
    explicit SideBand(QWidget *parent = nullptr);

    //metodos
    void setColor(const PShape::Color &color);
    int
    team() const
    {
        return m_color==PShape::FirstColor? 1: 2;
    }

public slots:
    /**
     * @brief mover una ficha hacia el tablero principal
     * (en realidad elimina la ficha para que ya no se vea)
     */
    void moveOneShape();

signals:
    void oneShapeMoved();


private:
    int shapes = 0x3; /**<cantidad de fichas*/
    PShape::Color m_color;
    PShape shape[3];

    //metodos
    void addWidgets();
};

#endif // SIDEBAND_H
