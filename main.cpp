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
        QMessageBox::information(0,QObject::tr("��ʾ"),QObject::tr("���֤����"));
        return 0;
    }
    else
    {
        QMessageBox::information(0,QObject::tr("��ʾ"),QObject::tr("���ʹ������"));
        return 0;
    }

    
    return a.exec();
}
