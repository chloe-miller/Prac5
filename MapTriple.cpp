#include "MapTriple.h"

int MapTriple::f(int x) {
    return (3*x);
}

std::vector<int> MapTriple::map(std::vector<int> input_vector) {
    if (input_vector.size() == 1) {
        //input_vector.push_back(f(input_vector[0]);
        input_vector[0] = f(input_vector[0]);
        return input_vector;
    } else {
        // map and store last value
        int temp = f(input_vector.back());

        // erase last value
        input_vector.erase(input_vector.end()-1);

        // call function again on remaining values
        map(input_vector);

        // push back temp
        input_vector.push_back(temp);
        // make first value temp, push back other values ~ circular queue style

        return input_vector;
    }
}