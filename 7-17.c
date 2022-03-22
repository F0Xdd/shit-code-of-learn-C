#include <stdio.h>
// ¾®N£¬ ÅÀU£¬ÏÂ»¬D
int main()
{
    int N, U, D;
    scanf("%d %d %d", &N, &U, &D);
    int min = 0;
    int Height = 0;
    while(Height<N){
        Height += U;
        min++;
        if(Height>=N){
            break;
        }
        Height -= D;
        min++;
    }
    printf("%d\n", min);

    return 0;
}