#include "MapGeneric.h"

std::vector<int> MapGeneric::map(std::vector<int> input_vector) {
    if (input_vector.size() == 1) {
        // change last value
        input_vector[0] = input_vector[0]*3;
        return input_vector;
    } else {
        // store last value
        int temp = input_vector.back();
        
        // map last value
        temp = temp * 3;

        // erase last value
        input_vector.erase(input_vector.end()-1);

        // call function again
        map(input_vector);

        // push back value
        input_vector.push_back(temp);

        // return
        return input_vector;
    }
}