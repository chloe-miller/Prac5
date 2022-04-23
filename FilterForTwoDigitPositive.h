#ifndef FILTER_2DIG
#define FILTER_2DIG
#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric {
    private:
        bool g(int x);
};
#endif