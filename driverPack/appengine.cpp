#include "appengine.h"

AppEngine::AppEngine(QObject *parent) : QObject(parent)
{

}

void AppEngine::toAllDriversFormSlot()
{
    toAllDriversFormSignal();
}

void AppEngine::toAllDriversFormAfterAutorizationSlot()
{
    toAllDriversFormAfterAutorizationSignal();
}

void AppEngine::toCardDriverFormSlot()
{
    toCardDriverFormSignal();
}

void AppEngine::toRootModeSlot()
{
    toRootModeSignal();
}
