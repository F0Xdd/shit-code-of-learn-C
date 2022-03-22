#include <stdio.h>
// hour:<=40  Õý³£/¡·40 1.5±¶
// new 30/h, old 50/h
int main()
{
    int year, hour;
    int new = 30;
    int old = 50;
    float salary = 0;
    scanf("%d %d", &year, &hour);
    if(year<5){
        if(hour<=40){
            salary = new*hour;
        } else {
            salary = new*40 + 1.5*new*(hour%40);
        }
    } else {
        if(hour<=40){
            salary = old*hour;
        } else {
            salary = old*40 + 1.5*old*(hour%40);
        }
    }
    printf("%.2f\n", salary);
    return 0;
}