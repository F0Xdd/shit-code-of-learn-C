#include <stdio.h>
// x<=15, y=4x/3
// x>15, y=2.5x-17.5
int main()
{
    float x;
    float y = 0;
    scanf("%f", &x);
    if(x<=15){
        y = 4*x/3;
    } else {
        y = 2.5*x-17.5;
    }
    printf("%.2f\n", y);
    return 0;
}