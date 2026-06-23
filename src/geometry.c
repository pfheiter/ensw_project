#include "geometry.h"
#define _USE_MATH_DEFINES
#include <math.h>

double calculate_area(const Circle_t* circle) {
    return M_PI * circle->radius * circle->radius;
}

double calculate_perimeter(const Circle* circle) {
    return 2 * M_PI * circle->radius;
}
// comment
