#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "lisencemanage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LisenceManage manage;
    if(!manage.getCheckResult())
    {
        QMessageBox::information(0,QObject::tr("提示"),QObject::tr("许可证到期"));
        return 0;
    }
    else
    {
        QMessageBox::information(0,QObject::tr("提示"),QObject::tr("软件使用期内"));
        return 0;
    }

    
    return a.exec();
}
