#include <stdio.h>

int main()
{
    float Open, High, Low, Close;
    int flag = 0;
    scanf("%f %f %f %f", &Open, &High, &Low, &Close);
    if(Close<Open){
        printf("BW-Solid");
    } else if(Close>Open){
        printf("R-Hollow");
    } else {
        printf("R-Cross");
    }
    if(Low<Open && Low<Close){
        printf(" with Lower Shadow");
        flag = 1;
    }
    if(High>Open && High>Close){
        if(flag){
            printf(" and");
        } else {
            printf(" with");
        }
        printf(" Upper Shadow");
    }

    return 0;
}