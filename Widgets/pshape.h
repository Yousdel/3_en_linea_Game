#ifndef SHAPE_H
#define SHAPE_H

#include <QLabel>
//app
#include "Widgets/image.h"


/**
 * @brief widget con la ficha
 */
class PShape : public Image
{
    Q_OBJECT
public:
    enum Color {
        FirstColor, SecondColor
    };

    explicit PShape(QWidget *parent = nullptr);

    void
    setColor(const Color &color)
    {
        m_color=color;
        showWithNewColor();
    }

    const Color
    &color() const
    {
        return m_color;
    }

    void disappear();


private:
    Color m_color;

    void showWithNewColor();


signals:

};

#endif // SHAPE_H
