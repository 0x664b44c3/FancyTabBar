#include <QApplication>
#include "demowindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoWindow mwTop(FancyTabBar::Above);
    mwTop.show();

    DemoWindow mwBottom(FancyTabBar::Below);
    mwBottom.show();

    DemoWindow mwLeft(FancyTabBar::Left);
    mwLeft.show();

    DemoWindow mwRight(FancyTabBar::Right);
    mwRight.show();

    return a.exec();
}
