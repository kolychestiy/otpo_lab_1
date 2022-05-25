#include <stdio.h>

#include "myfunc.h"

int main()
{
    printf("Hello World!\n");

    float ans[2];
    switch (quadeq(1, 1, 1, ans)){
        case -1:
                printf("задайте ненулевой коэфицент a\n");
                break;
        case 0:
            printf("нет корней\n");
            break;
        case 1:
            printf("x = %f\n", *ans);
            break;
        case 2:
            printf("x1 = %f\nx2 = %f\n", *ans, *(ans + 1));
            break;
    }

    return myfunc(2);
}
