#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b){
        putchar('C');
    }
    if(a==c){
        putchar('B');
    }
    if(b==c){
        putchar('A');
    }
    return 0;
}