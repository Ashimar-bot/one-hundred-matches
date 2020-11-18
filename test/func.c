#include "../src/func.h"

#include <stdio.h>
#include <stdlib.h>

#include "../ctest/ctest.h"

CTEST(ci, ci_good)
{
    // Given
    const int a = 5;
    const int b = 46;

    // When
    const int result = ci(a,b);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
