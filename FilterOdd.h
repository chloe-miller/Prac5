#ifndef FILTER_ODD
#define FILTER_ODD
#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric {
    private:
        virtual bool g(int x);
};
#endif