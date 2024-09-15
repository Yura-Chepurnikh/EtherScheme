#ifndef NOTGATELOGIC_H
#define NOTGATELOGIC_H

#include "./GateLogic.h"

class NOTGateLogic : public GateLogic {
public:
    NOTGateLogic(vector<bool> inputs, bool output);
protected:
    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // NOTGATELOGIC_H
