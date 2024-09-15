#ifndef XORGATELOGIC_H
#define XORGATELOGIC_H

#include "./GateLogic.h"

class XORGateLogic : public GateLogic {
public:
    XORGateLogic(vector<bool> inputs, bool output);
protected:
    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // XORGATELOGIC_H
