#include "sideband.h"
//qt
#include <QVBoxLayout>
//app
#include "Widgets/label.h"
#include "Widgets/pshape.h"


SideBand::SideBand(QWidget *parent) :
    QWidget(parent)
{
    addWidgets();
}

void SideBand::moveOneShape()
{
    if (shapes==0x0)
    {
        return;
    }
    --shapes;
    shape[shapes-0x1].disappear();
    emit oneShapeMoved();
}

void SideBand::addWidgets()
{
    QVBoxLayout *main_layout=
            new QVBoxLayout(this);

    Label *lab=
            new Label(
                QString(tr("Jugador %1")).arg(team()),
                this);

    main_layout->addStretch(0x1);
    main_layout->addWidget(lab);

    for(int i = 0x0 ; i < 0x3; ++i)
    {
        main_layout->addWidget(&shape[i]);
    }
    setColor(PShape::FirstColor);
    main_layout->addStretch(0x1);
}

void SideBand::setColor(const PShape::Color &color)
{
    m_color=color;
    for (PShape &sh : shape) {
        sh.setColor(color);
    }
}


