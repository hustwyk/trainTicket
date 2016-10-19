#include "mainwindow.h"
#include "logindlg.h"
#include <QApplication>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDlg lw;
    lw.show();

    return a.exec();
}
