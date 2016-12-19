#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QDialog *MyDialog;
    QLineEdit *ID_lineEdit;
    QPushButton *ID_Btn;
    QLabel *labID;
private slots:
    void WriteID();

};

#endif // MAINWINDOW_H
