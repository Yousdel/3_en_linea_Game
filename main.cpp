#include "Widgets/widget.h"
#include "Widgets/Table/playingtable.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
//    PlayingTable playingTable;
//    playingTable.show();
    return a.exec();
}
