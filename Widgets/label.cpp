#include "label.h"



Label::Label(QWidget *parent) :
    QLabel(parent)
{
    setStyle();
}


Label::Label(const QString &text,
             QWidget *parent) :
    QLabel(text,parent)
{
    setStyle();
}


void Label::setStyle()
{
    setFont(QFont("Times",26));
}
