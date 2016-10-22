#ifndef TESTPLUGIN_H
#define TESTPLUGIN_H
#include <QObject>
#include <interfaces.h>
#include "testplugin_global.h"

class TESTPLUGINSHARED_EXPORT TestPlugin: public QObject, public MyInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "QtPratice.SimplePlugin.TestPlugin")
    Q_INTERFACES(MyInterface)
public:
    TestPlugin(QObject* parent = 0);
    ~TestPlugin();

    void add(int i, int j) const;
};

#endif // TESTPLUGIN_H
