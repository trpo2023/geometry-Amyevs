#include <../thirdparty/ctest.h>
#include <libgeometry/parser.h>

CTEST(ctest, check_perimetr)
{
    float pi = 3.14;
    float rad = 3.5;
    const double expected = 2 * pi * rad;
    const double result = percircle(rad);
    ASSERT_DBL_NEAR_TOL(expected, result, 1e-1);
}

CTEST(ctest, check_area)
{
    float pi = 3.14;
    float rad = 3.5;
    const double expected = pi * rad * rad;
    const double result = areacircle(rad);
    ASSERT_DBL_NEAR_TOL(expected, result, 1e-1);
}