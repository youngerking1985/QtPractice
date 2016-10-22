#include <QDebug>
#include "testplugin.h"

TestPlugin::TestPlugin(QObject* parent)
    :QObject(parent)
{
    qDebug() << "TestPlugin::TestPlugin";
}

TestPlugin::~TestPlugin()
{
    qDebug() << "TestPlugin::~TestPlugin";
}

void TestPlugin::add(int i, int j) const
{
    qDebug() << "TestPlugin::add" << i + j;
}
