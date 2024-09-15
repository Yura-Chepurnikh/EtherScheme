#ifndef XNORGATELOGIC_H
#define XNORGATELOGIC_H

#include "./GateLogic.h"

class XNORGateLogic : public GateLogic {
public:
    XNORGateLogic(vector<bool> inputs, bool output);
protected:
    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // XNORGATELOGIC_H
