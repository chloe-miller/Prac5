#ifndef REDUCE_GEN
#define REDUCE_GEN
#include <vector>

class ReduceGeneric {
    private:
        virtual int binaryOperator(int x, int y)=0;
    public:
        int reduce(std::vector<int> myVec);
        std::vector<int> tempVec;

};

#endif 