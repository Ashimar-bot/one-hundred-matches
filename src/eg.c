#include <stdio.h>
int eg(int *a)
{
    if (*a == 1) {
        printf("Вы победили!\n");
return 0;
    } else {
        printf("Победил компьютер\n");
return 1;
    }
}
