#ifndef FILTER_NONPOS
#define FILTER_NONPOS
#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric {
    private:
        bool g(int x);
};

#endif