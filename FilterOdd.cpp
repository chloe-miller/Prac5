#include "FilterOdd.h"
#include "FilterGeneric.h"

bool FilterOdd::g(int x) {
    if ((x % 2) != 0) {
        return 1;
    } else {
        return 0;
    }
}