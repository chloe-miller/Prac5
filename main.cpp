#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include "ReduceMinimum.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main () {

    vector<int> L;
    string data;

    // read in values
    getline(cin,data);

    stringstream ss(data);

    // extract comma, parse values, store in L
    while (ss.good()) {
        string stemp;
        if (stemp != "\n") {
            getline(ss,stemp,',');
            int itemp = stoi(stemp); // convert to int
            L.push_back(itemp); 
        }
    }

    // create map objects
    MapTriple * triple = new MapTriple;
    MapAbsoluteValue * absolute = new MapAbsoluteValue;

    vector<int> L1;
    L1 = triple->map(L); // triple
    L1 = absolute->map(L1); // absolute value

    vector<int> L2;
    FilterForTwoDigitPositive * twodig = new FilterForTwoDigitPositive;
    FilterOdd * odd = new FilterOdd;
    L2 = twodig->filter(L1);
    L2 = odd->filter(L2);


    ReduceGCD * reduce_gcd = new ReduceGCD;
    ReduceMinimum * reduce_min = new ReduceMinimum;
    int gcd = reduce_gcd->reduce(L2);
    int min = reduce_min->reduce(L2);

    cout<<min<<" "<<gcd<<endl;

    return 0;
}