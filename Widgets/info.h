#ifndef INFO_H
#define INFO_H

#include <QWidget>

class Info : public QWidget
{
    Q_OBJECT
public:
    explicit Info(QWidget *parent = nullptr);

signals:

private:
    void addWidgets();


};

#endif // INFO_H
