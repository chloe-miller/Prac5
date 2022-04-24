#include "MapGeneric.h"
#include <vector>

std::vector<int> MapGeneric::map(std::vector<int> input_vector) {
    // base case when size is 1
    if (input_vector.size() == 1) {
        // map final element 
        mapped_vector.insert(mapped_vector.begin(),f(input_vector.at(0)));
        // return result
        return mapped_vector;
    } else {
        // map and store last element
        int temp = f(input_vector.back());
        // delete last element
        input_vector.pop_back();
        // insert mapped element at start of vector
        mapped_vector.insert(mapped_vector.begin(),temp);
        // call function again until size of input is 1
        return map(input_vector);
    }
}