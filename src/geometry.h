#ifndef GEOMETRY_H
#define GEOMETRY_H

typedef struct {
    double radius;
} Circle;

double calculate_area(const Circle* circle);

#endif // GEOMETRY_H