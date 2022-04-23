/*#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"*/
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include <iostream>
#include <vector>

int main () {

    std::vector<int> myVec;
    myVec.push_back(-4);
    myVec.push_back(-7);
    myVec.push_back(8);
    myVec.push_back(9);
    myVec.push_back(-34);
    myVec.push_back(54);

    for (int i =0; i<myVec.size(); i++) {
        std::cout<<myVec.at(i)<<std::endl;
    }

    FilterOdd * odd = new FilterOdd;
    FilterNonPositive * neg = new FilterNonPositive;
    FilterForTwoDigitPositive * num = new FilterForTwoDigitPositive;
    myVec=num->filter(myVec);

    std::cout<<"Filtered: "<<std::endl;
    for (int i =0; i<myVec.size(); i++) {
        std::cout<<myVec.at(i)<<std::endl;
    }

    /*MapTriple * trip = new MapTriple;
    MapSquare * square = new MapSquare;
    MapAbsoluteValue * abs = new MapAbsoluteValue;
    myVec = abs->map(myVec);*/

    return 0;
}