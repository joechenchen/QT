#include "mainwindow.h"
#include "QBoxLayout"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
//    QWidget *window = new QWidget;
//    this->setCentralWidget(window);
    QFont font;
    font.setPointSize(28);
    MyDialog = new QDialog();
    setCentralWidget(MyDialog);
    resize(480, 300);
    labID = new QLabel("ID:",MyDialog);
    labID->setFont(font);
    ID_lineEdit = new QLineEdit(MyDialog);
    ID_lineEdit->setMaxLength(8);
    ID_lineEdit->setFont(font);
    ID_lineEdit->setAlignment(Qt::AlignCenter);
    ID_Btn = new QPushButton("写ID",MyDialog);
    ID_Btn->setFont(font);

    labID->setFixedSize(60,60);
    ID_lineEdit->setFixedSize(200,60);
    ID_Btn->setFixedSize(100,60);
    QHBoxLayout *Hlayout = new QHBoxLayout(MyDialog);
    Hlayout->addWidget(labID);
    Hlayout->addWidget(ID_lineEdit);
    Hlayout->addWidget(ID_Btn);
//    Hlayout->setStretchFactor(labID,1);
//    Hlayout->setStretchFactor(ID_lineEdit,3);
//    Hlayout->setStretchFactor(ID_Btn,1);
    connect(ID_Btn,SIGNAL(clicked()),this,SLOT(WriteID()));

}

MainWindow::~MainWindow()
{

}


void MainWindow::WriteID()
{

    ID_lineEdit->cursorBackward(1,8);
    ID_lineEdit->setFocus();
//    ID_lineEdit->selectAll();


}
