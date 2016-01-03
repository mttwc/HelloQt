#include "simple_menu_demonstration.h"
#include <QAction>
#include <QMenu>
#include <QMenuBar>

SimpleMenuDemonstration::SimpleMenuDemonstration(QWidget *parent)
    : QMainWindow(parent)
{
    // The ampersand denotes the shortcut
    QAction *quit = new QAction("&Quit", this);
    
    // Necessary for OSX because I can't get the menu bar to appear (seems like an old qt bug)
    menuBar()->setNativeMenuBar(false);
    
    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);
    
    // Note the signal is from the QAction class and the slot is from the QApplication class, which matches the widgets (1st and 3rd params)
    connect(quit, &QAction::triggered, qApp, QApplication::quit);
}