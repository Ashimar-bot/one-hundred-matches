#include <stdbool.h>
#include <stdio.h>
void mi(int *a, int *b, bool *c)
{
    if ((*a >= 1) && (*a <= 10) && (*a <= *b)) {
        *c = true;
    } else {
        printf("Некорректный ввод!Повторите ввод\n\n\n\n");

        *c = false;
    }
}
