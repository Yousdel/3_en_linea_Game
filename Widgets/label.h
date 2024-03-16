#ifndef LABEL_H
#define LABEL_H


#include <QLabel>




class Label : public QLabel
{
public:
    Label(QWidget *parent=nullptr);
    Label(const QString &text,
          QWidget *parent=nullptr);

private:
    void setStyle();

};

#endif // LABEL_H
