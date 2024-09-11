#ifndef ANDLOGICGATESYMBOL_H
#define ANDLOGICGATESYMBOL_H

#include "./LogicGateSymbol.h"
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QWidget>

class AndLogicGateSymbol : public QObject,  public LogicGateSymbol {
    Q_OBJECT

public:
    AndLogicGateSymbol();
};

#endif // ANDLOGICGATESYMBOL_H
