#ifndef NOTLOGICGATESYMBOL_H
#define NOTLOGICGATESYMBOL_H

#include "LogicGateSymbol.h"
#include <QObject>

class NotLogicGateSymbol : public QObject, public LogicGateSymbol {
    Q_OBJECT
public:
    NotLogicGateSymbol();
};

#endif // NOTLOGICGATESYMBOL_H
