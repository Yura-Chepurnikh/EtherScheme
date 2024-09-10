#ifndef ANDLOGICGATESYMBOL_H
#define ANDLOGICGATESYMBOL_H

#include "./LogicGateSymbol.h"
#include <QPainter>
#include <QWidget>

class AndLogicGateSymbol : public QObject, public QGraphicsPathItem {
    Q_OBJECT

public:
    AndLogicGateSymbol();

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget* widget) override;
};

#endif // ANDLOGICGATESYMBOL_H
