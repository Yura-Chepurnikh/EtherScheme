#ifndef NORGATELOGIC_H
#define NORGATELOGIC_H

#include "./GateLogic.h"

class NORGateLogic : public GateLogic {
public:
    NORGateLogic(vector<bool> inputs, bool output);
protected:
    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // NORGATELOGIC_H
