#ifndef GEOMETRY_H
#define GEOMETRY_H

typedef struct {
    double radius;
} Circle_t;

double calculate_area(const Circle_t* circle);

double calculate_perimeter(const Circle* circle);

#endif // GEOMETRY_H