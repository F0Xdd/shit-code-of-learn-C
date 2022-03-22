#include <stdio.h>

int main()
{
    int foot, inch;
    int input;
    scanf("%d", &input);
    foot = input/30.48;
    inch = ((input/30.48)-foot)*12;
    printf("%d %d\n", foot, inch);

    return 0;
}