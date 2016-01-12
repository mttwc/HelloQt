#include <QApplication>
#include <QWidget>
#include "table_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    TableDemonstration window;
    
    window.resize(400, 250);
    window.setWindowTitle("Table Demonstration");
    window.show();

    return app.exec();
}