#include <stdio.h>

int main()
{
    float a1;
    int a2;
    char a3;
    float a4;
    scanf("%f %d %c %f", &a1, &a2, &a3, &a4);
    printf("%c %d %.2f %.2f\n", a3, a2, a1, a4);
    return 0;
}