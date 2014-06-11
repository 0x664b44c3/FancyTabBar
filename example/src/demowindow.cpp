#include "demowindow.h"

DemoWindow::DemoWindow(const FancyTabBar::TabBarPosition position, QWidget *parent) : QMainWindow(parent)
{
    FancyTabBar* ftb = new FancyTabBar(position, this);
    ftb->insertTab(0, QIcon(":/mode_Debug.png"), "Debug");
    ftb->insertTab(0, QIcon(":/mode_Edit.png"), "Edit");
    ftb->insertTab(0, QIcon(":/mode_Design.png"), "Design");
    ftb->insertTab(0, QIcon(":/mode_Project.png"), "Project");
    ftb->setTabEnabled(0, true);
    ftb->setTabEnabled(1, false);
    ftb->setTabEnabled(2, true);
    ftb->setTabEnabled(3, true);

    setCentralWidget(ftb);

    if (position == FancyTabBar::Above)
        setWindowTitle("Top");

    if (position == FancyTabBar::Below)
        setWindowTitle("Bottom");

    if (position == FancyTabBar::Left)
        setWindowTitle("Left");

    if (position == FancyTabBar::Right)
        setWindowTitle("Right");
}

DemoWindow::~DemoWindow()
{

}
