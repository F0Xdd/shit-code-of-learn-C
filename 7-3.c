#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // int i;
    // for(i=0; i<3; i++){
    //     printf("%d", (n%10));
    //     n /= 10;
    // }
    do{
        printf("%d", n%10);
        n /= 10;
    }while(n>0);
    return 0;
}