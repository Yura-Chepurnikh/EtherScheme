#ifndef LOGICGATESYMBOL_H
#define LOGICGATESYMBOL_H

#include "./logicgatesymbols.h"
#include <QtWidgets/QGraphicsPathItem>
#include <QtWidgets/QGraphicsItem>
#include <QtGui/QPen>
#include <QObject>

class LogicGateSymbol {
protected:
    virtual void drawGate() = 0 ;
};

#endif // LOGICGATESYMBOL_H
