#include <stdio.h>

int main()
{
    int x, y, n;
    scanf("%d", &n);
    int t = 1;
    int flag = 1;
    while(t<n){
        if(t*t>=n){
            break;
        }
        t++;
    }
    // printf("t=%d\n", t);//test
    
    for(x=1; x<=t; x++){
        for(y=x; y<=t; y++){
            if(x*x + y*y == n){
                printf("%d=%d*%d\t", n, x, y);
                flag = 0;
            }
        }
    }
    if(flag){
        printf("No Solution\n");
    }
    return 0;
}