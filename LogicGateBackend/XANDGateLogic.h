#ifndef XANDGATELOGIC_H
#define XANDGATELOGIC_H

#include "./GateLogic.h"

class XANDGateLogic : public GateLogic {
public:
    XANDGateLogic(vector<bool> inputs, bool output);
protected:
    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // XANDGATELOGIC_H
