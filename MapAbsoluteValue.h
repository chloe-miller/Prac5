#ifndef MAP_ABS
#define MAP_ABS
#include "MapGeneric.h"

// returns absolute value of input
class MapAbsoluteValue : public MapGeneric {
    private:
        int f(int x);
};

#endif