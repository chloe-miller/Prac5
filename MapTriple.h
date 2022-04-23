#ifndef MAP_TRIP
#define MAP_TRIP
#include "MapGeneric.h"

// returns input x 3
class MapTriple : public MapGeneric {
    private:
    virtual int f(int x); // virtual

    public:
    // virtual
    virtual std::vector<int> map(std::vector<int> input_vector); // recursive
};

#endif