#ifndef BUFFERGATELOGIC_H
#define BUFFERGATELOGIC_H

#include "./GateLogic.h"

class BUFFERGateLogic : public GateLogic {
public:
    BUFFERGateLogic(vector<bool> inputs, bool output);
protected:
    bool CalculateOutput(vector<bool> inputs) override;
};

#endif // BUFFERGATELOGIC_H
