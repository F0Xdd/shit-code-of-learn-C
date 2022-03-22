#include <stdio.h>

int main()
{
    int hour, min;
    scanf("%d:%d", &hour, &min);
    if(hour>12){
        hour %= 12;
        printf("%d:%d PM\n", hour, min);
    } else {
        printf("NOT PM!\n");
    }
    
    return 0;
}