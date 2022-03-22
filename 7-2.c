#include <stdio.h>

int main()
{
    int hour, minute;
    int x = 1120;
    int min1 = 110;
    // scanf("%d %d", &x, &min1);
    hour = x/100;
    minute = x-hour*100+min1;
    if(minute>=60){
        hour += minute/60;
        minute %= 60; 
    }
    printf("%d%d\n", hour, minute);

    return 0;
}