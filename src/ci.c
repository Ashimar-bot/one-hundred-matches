#include <stdlib.h>
#include <strings.h>
#include <time.h>
int ci(int *a, int *b)
{
    srand(time(0));
    *a = rand() % 10 + 1;
    if (*a > *b) {
        *a = *b;
return 0;
    }else{return 1;}
}
