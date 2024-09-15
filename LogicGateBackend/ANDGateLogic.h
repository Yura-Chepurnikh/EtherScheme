#ifndef ANDGATELOGIC_H
#define ANDGATELOGIC_H

#include "./GateLogic.h"

class ANDGateLogic : public GateLogic {
public:
    ANDGateLogic(vector<bool> inputs, bool output);

    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // ANDGATELOGIC_H
