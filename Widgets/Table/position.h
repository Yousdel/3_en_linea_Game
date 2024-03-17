#ifndef POSITION_H
#define POSITION_H

#include "Widgets/pshape.h"
#include "Widgets/image.h"
#include "Widgets/Table/sizes.h"
//qt
#include <QWidget>
#include <QLabel>
//app


/**
 * @brief Widget con una posicion donde
 * se puede ubicar una ficha (Shape)
 */
class Position : public Image
{
    Q_OBJECT
public:
    //ctor
    explicit Position(QWidget *parent = nullptr);

    //metodos
    void
    assignPixmap(const QString &filename)
    {
        Image::assignPixmap(filename,
                       POS_WIDTH, POS_HEIGHT);       //130,130
    }



public slots:


private:    
    //metodos



signals:

};

#endif // POSITION_H
