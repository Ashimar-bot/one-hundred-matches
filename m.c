
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include "types.h"
int main(void)
{
pravila();
printf("1.Для игры двоем\n2.Для игры против компъютера\n"); 
scanf("%d",&ch); 
switch(ch) 
{ 

case 2: 
    srand(time(0));
    Motion = 1;  
    Count = InitialCount;
    do {
        if (Motion == 1) {
            do {
                printf("Ваш ход.На столе %d спичек.\n", Count);
                printf("Сколько вы хотите взять спичек?\n");
                scanf("%d", &Num);
                mi(&Num,&Count,&Correct);  //manual input ручной ввод

            } while (!Correct);
        } else {
            do {
                ci(&Num,&Count);  //computer input
                printf("Ход компьютера.Берет %d спичек\n\n\n\n", Num);
            } while (!Correct);
        }
        Count -= Num;
        cm(&Motion); 
    } while (Count > 0);
    if (Motion  == 1) {
        printf("Вы победили!\n");
    } else {
        printf("Победил компьютер\n");
    }
break;
}
    return 0;
}
