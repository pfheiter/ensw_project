#include "advanced.h"
#include <math.h>

double determinant2x2(Matrix matrix)
{
    return matrix.data[0][0] * matrix.data[1][1]
         - matrix.data[0][1] * matrix.data[1][0];
}

double determinant3x3(Matrix matrix)
{
    double a = matrix.data[0][0];
    double b = matrix.data[0][1];
    double c = matrix.data[0][2];

    double d = matrix.data[1][0];
    double e = matrix.data[1][1];
    double f = matrix.data[1][2];

    double g = matrix.data[2][0];
    double h = matrix.data[2][1];
    double i = matrix.data[2][2];

    return a*(e*i - f*h)
         - b*(d*i - f*g)
         + c*(d*h - e*g);
}

int rank2x2(Matrix matrix)
{
    double det = determinant2x2(matrix);

    if (det != 0) {
        return 2;
    }

    if (matrix.data[0][0] != 0 ||
        matrix.data[0][1] != 0 ||
        matrix.data[1][0] != 0 ||
        matrix.data[1][1] != 0) {
        return 1;
    }

    return 0;
}

int inverse2x2(Matrix matrix, Matrix* result)
{
    double det = determinant2x2(matrix);

    if (det == 0) {
        return 0;
    }

    result->rows = 2;
    result->cols = 2;

    result->data[0][0] =  matrix.data[1][1] / det;
    result->data[0][1] = -matrix.data[0][1] / det;
    result->data[1][0] = -matrix.data[1][0] / det;
    result->data[1][1] =  matrix.data[0][0] / det;

    return 1;
}

void eigenvalues2x2(Matrix matrix,
                    double* lambda1,
                    double* lambda2)
{
    double a = matrix.data[0][0];
    double b = matrix.data[0][1];
    double c = matrix.data[1][0];
    double d = matrix.data[1][1];

    double trace = a + d;
    double det = determinant2x2(matrix);

    double discriminant =
        trace * trace - 4 * det;

    *lambda1 =
        (trace + sqrt(discriminant)) / 2.0;

    *lambda2 =
        (trace - sqrt(discriminant)) / 2.0;
}