#include "image.h"
#include "Widgets/Table/sizes.h"
//qt
#include <QVBoxLayout>




Image::Image(QWidget *parent) :
    QLabel(parent)
{
    setMinimumSize(POS_WIDTH, POS_HEIGHT);
    setMaximumSize(POS_WIDTH, POS_WIDTH);
}



