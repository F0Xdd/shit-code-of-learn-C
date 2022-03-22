#include <stdio.h>

int main()
{
    int a, b;
    int i;
    int sum = 0;
    scanf("%d %d", &a, &b);
    while(a<=b){
        printf("%5d", a);
        sum += a;
        a++;
        i++;
        if((i%5)==0){
            printf("\n");
        }
    }
    if(i%5){
        printf("\n");
    }
    printf("Sum = %d\n", sum);
    return 0;
}