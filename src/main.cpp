#include <QApplication>
#include <QWidget>
#include "progress_bar_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ProgressBarDemonstration window;
    
    window.resize(250, 150);
    window.setWindowTitle("Progress Bar Demonstration");
    window.show();

    return app.exec();
}