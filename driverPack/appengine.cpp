#include "appengine.h"

AppEngine::AppEngine(QObject *parent) : QObject(parent)
{

}

void AppEngine::toAllDriversFormSlot()
{
    toAllDriversFormSignal();
}

void AppEngine::toCardDriverFormSlot()
{
    toCardDriverFormSignal();
}
