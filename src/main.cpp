#include <QApplication>
#include <QWidget>
#include "splitter_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SplitterDemonstration window;
    
    window.resize(350, 300);
    window.setWindowTitle("Splitter Demonstration");
    window.show();

    return app.exec();
}