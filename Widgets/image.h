#ifndef IMAGE_H
#define IMAGE_H

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
                       scaled(width, height,
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
