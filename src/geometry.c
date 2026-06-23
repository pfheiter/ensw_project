#include "geometry.h"
#include <math.h>

double calculate_area(const Circle* circle) {
    return M_PI * circle->radius * circle->radius;
}
