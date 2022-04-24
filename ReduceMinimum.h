#ifndef REDUCE_MIN
#define REDUCE_MIN
#include "ReduceGeneric.h"
class ReduceMinimum : public ReduceGeneric {
    private:
        int binaryOperator(int x, int y);
};

#endif