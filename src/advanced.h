#ifndef ADVANCED_H
#define ADVANCED_H

#include "matrix.h"

double determinant2x2(Matrix matrix);
double determinant3x3(Matrix matrix);
int rank2x2(Matrix matrix);
int inverse2x2(Matrix matrix, Matrix* result);
void eigenvalues2x2(Matrix matrix,
                    double* lambda1,
                    double* lambda2);
                    
#endif