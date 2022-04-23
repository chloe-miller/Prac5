#ifndef MAP_GEN
#define MAP_GEN
#include <vector>

// parent map class
class MapGeneric {
    private:
        virtual int f(int x)=0; // pure virtual
    public:
        std::vector<int> map(std::vector<int> input_vector); // recursive
        std::vector<int> mapped_vector;
};

#endif