#include "image.h"

//qt
#include <QVBoxLayout>




Image::Image(QWidget *parent) :
    QLabel(parent)
{
    setMinimumSize(0x82, 0x82);
    setMaximumSize(0x82, 0x82);
}



