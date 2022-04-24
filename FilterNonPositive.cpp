#include "FilterNonPositive.h"
#include "FilterGeneric.h"

bool FilterNonPositive::g(int x) {
    if (x>0) {
        return 0;
    } else {
        return 1;
    }
}