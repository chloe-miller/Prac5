#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"

bool FilterForTwoDigitPositive::g(int x) {
    if ((x>=10) && (x<100)) {
        return 1;
    } else {
        return 0;
    }
}