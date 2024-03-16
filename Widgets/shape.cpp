#include "shape.h"
//app
#include "Widgets/label.h"
//qt
#include <QVBoxLayout>



PShape::PShape(QWidget *parent) :
    QLabel(parent)
{
    showWithNewColor();
}

void PShape::disappear()
{
    hide();
}

void PShape::showWithNewColor()
{
    //asignar la imagen
    QPixmap pxm=
            QPixmap(m_color==FirstColor?
                        ":/Widgets/Images/shapeColor1.xpm":
                        ":/Widgets/Images/shapeColor2.xpm");
    QPixmap *pxm_ok=
            new QPixmap(pxm.scaled(0x64,0x64,
                                   Qt::KeepAspectRatio));

    setPixmap(*pxm_ok);
}
