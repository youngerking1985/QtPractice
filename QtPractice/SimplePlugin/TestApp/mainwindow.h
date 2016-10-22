#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MyInterface;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAdd_triggered();

private:
    void loadPlugins();

private:
    Ui::MainWindow *ui;

    MyInterface* _test;
};

#endif // MAINWINDOW_H
