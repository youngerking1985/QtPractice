#include <QPluginLoader>
#include <QDir>
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <interfaces.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _test(NULL)
{
    ui->setupUi(this);

    loadPlugins();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadPlugins()
{
    foreach (QObject *plugin, QPluginLoader::staticInstances())
    {
        qDebug() << "plugin" << plugin;
    }

    QDir pluginsDir = QDir(qApp->applicationDirPath());
    pluginsDir.cd("plugins");

    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = loader.instance();
        if (plugin) {
            qDebug() << "plugin---" << fileName;
            _test = dynamic_cast<MyInterface*>(plugin);
            plugin->setParent(this);
        }
    }
}

void MainWindow::on_actionAdd_triggered()
{
    if(_test)
        _test->add(3, 2);
}
