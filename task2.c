#include <stdio.h> 

int main(void)
{

int a, b, c, d, e, max;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e); 

    int max1 = a < b ? a : b;
    int max2 = a < c ? a : c;
    int max3 = a < d ? a : d;
    int max4 = a < e ? a : e;

    int result1 = max1 < max2 ? max1 : max2;
    int result2 = max3 < max4 ? max3 : max4;
    int result = result1 < result2 ? result1 : result2;

    printf("%d", result);

    return 0;
}