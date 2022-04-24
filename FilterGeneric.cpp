#include "FilterGeneric.h"
#include <vector>

std::vector<int> FilterGeneric::filter(std::vector<int> input_vector) {
    if (input_vector.size() == 1) {
        if (g(input_vector.at(0))) {
            mapped_vector.insert(mapped_vector.begin(),input_vector.at(0));
        }
        return mapped_vector;
    } else {
        // store last value
        int temp = input_vector.back();

        // passes test?
        if (g(temp)) {
            mapped_vector.insert(mapped_vector.begin(),temp);
        }

        // delete last value
        input_vector.pop_back();

        // call function again
        return filter(input_vector);

    }
}
