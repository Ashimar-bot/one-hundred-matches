#include "../src/func.h"

#include <stdio.h>
#include <stdlib.h>

#include "../ctest/ctest.h"

CTEST(ci, ci_test_1)
{
    // Given
    int a = 5;
    int b = 46;

    // When
    int result = ci(&a,&b);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(ci, ci_test_2)
{
    // Given
    int a = 9;
    int b = 5;

    // When
    int result = ci(&a,&b);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(cm, cm_test_1)
{
    // Given
    int a = 1;
    

    // When
    int result = cm(&a);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(cm, cm_test_2)
{
    // Given
    int a = 2;
    

    // When
    int result = cm(&a);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}
