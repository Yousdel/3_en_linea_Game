#ifndef IMAGE_H
#define IMAGE_H

#include "Widgets/shape.h"
//qt
#include <QWidget>
#include <QLabel>
//app


/**
 * @brief Widget con una posicion donde
 * se puede ubicar una ficha (Shape)
 */
class Image : public QLabel
{
    Q_OBJECT
public:
    //ctor
    explicit Image(QWidget *parent = nullptr);

    //metodos
    void
    assignPixmap(const QString &filename, 
				int width, int height)
    {
        setPixmap(QPixmap(filename).
                       scaled(width, height,       //130,130
                              Qt::KeepAspectRatio));
    }

    void
    moveToPoint(int x, int y)
    {
        move(QPoint(x,y));
    }


public slots:


private:    
    //metodos



signals:

};

#endif // POSITION_H
