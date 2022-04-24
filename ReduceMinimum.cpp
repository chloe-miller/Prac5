#include "ReduceMinimum.h"
#include "ReduceGeneric.h"

int ReduceMinimum::binaryOperator(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}