#include <stdbool.h>
#include <stdio.h>
int mi(int *a, int *b, bool *c)
{
    if ((*a >= 1) && (*a <= 10) && (*a <= *b)) {
        *c = true;
return 0;
    } else {
        printf("Некорректный ввод!Повторите ввод\n\n\n\n");

        *c = false;
return 1;
    }
}
