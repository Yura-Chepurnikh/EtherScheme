#ifndef ORGATELOGIC_H
#define ORGATELOGIC_H

#include "./GateLogic.h"

class ORGateLogic : public GateLogic {
public:
    ORGateLogic(vector<bool> inputs, bool output);
protected:
    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // ORGATELOGIC_H
