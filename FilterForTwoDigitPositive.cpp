#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x) {
    if ((x > 0) && ((x/10) >= 1)) {
        return 1;
    } else {
        return 0;
    }
}