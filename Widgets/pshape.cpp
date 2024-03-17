#include "pshape.h"
#include "Widgets/Table/sizes.h"



PShape::PShape(QWidget *parent) :
    Image(parent)
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
    assignPixmap(m_color==FirstColor?
                        ":/Widgets/Images/shapeColor1.xpm":
                        ":/Widgets/Images/shapeColor2.xpm",
                 SHAPE_WIDTH,SHAPE_HEIGHT);
}
