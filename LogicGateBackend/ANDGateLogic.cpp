#include "./ANDGateLogic.h"

ANDGateLogic::ANDGateLogic(vector<bool> inputs, bool output) : GateLogic(inputs, output) { }

bool ANDGateLogic::CalculateOutput(vector<bool> inputs) {
    int n = inputs.size();
    for (int i = 0; i < n; ++i) {
        Output &= inputs[i];
    }
    return Output;
}
