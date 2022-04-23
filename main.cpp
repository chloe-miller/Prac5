#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include <iostream>
using namespace std;

int main () {

    vector<int> myVec;

    for (int i =0; i<10; i++) {
        myVec.push_back(i*-10);
    }

    MapTriple * trip = new MapTriple;
    MapSquare * square = new MapSquare;
    MapAbsoluteValue * abs = new MapAbsoluteValue;
    myVec = abs->map(myVec);
    
    for (int i =0; i<10; i++) {
        cout<<myVec[i]<<endl;
    }


    return 0;
}