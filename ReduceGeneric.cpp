#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector<int> myVec) {
    // when size gets to 1, return final value
    if (myVec.size() == 1) {
        return myVec.front();
    } else {
        // operate on last two elements
        int temp = binaryOperator(myVec.back(),myVec[myVec.size()-2]);

        // delete last two elements
        myVec.pop_back();
        myVec.pop_back();

        // add temp onto end
        myVec.push_back(temp);

        // call function again
        return reduce(myVec);
    }
}