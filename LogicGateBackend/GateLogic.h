#ifndef GATELOGIC_H
#define GATELOGIC_H

#include <vector>
using namespace  std;

class GateLogic {
public:
    GateLogic(vector<bool> inputs, bool output);

    virtual bool CalculateOutput(vector<bool> inputs) = 0;
    vector<bool> Inputs;
    bool Output;
};

#endif // GATELOGIC_H
