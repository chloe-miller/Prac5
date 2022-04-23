#ifndef MAP_SQUARE
#define MAP_SQUARE
#include "MapGeneric.h"

// returns input squared
class MapSquare : public MapGeneric {
    private:
        virtual int f(int x);
};

#endif