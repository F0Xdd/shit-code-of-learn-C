#include <stdio.h>

int main()
{
    int a, b;
    char c;
    int ret = 0;
    scanf("%d %c %d", &a, &c, &b);
    if(c=='+'){
        ret = a+b;
    } else if(c=='-'){
        ret = a-b;
    } else if(c=='*'){
        ret = a*b;
    } else if(c=='/'){
        ret = a/b;
    } else {
        printf("ERROR");
        return 0;
    }
    printf("%d\n", ret);
    return 0;
}