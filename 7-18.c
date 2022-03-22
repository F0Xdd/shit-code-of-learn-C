#include <stdio.h>
float fx(float a3, float a2, float a1, float a0, float x);
int main()
{
    float a3, a2, a1, a0;
    float a, b;
    scanf("%f %f %f %f\n%f %f", &a3, &a2, &a1, &a0, &a, &b);
    //a3=3,a2=-1,a1=-3,a0=1;
    a=-0.5, b=0.5;
    float t = 0.0;
    float fa = 0.0, fb = 0.0, ft = 0.0;
    int flag = 1;
    while((b-a) > 0.0001){
        fa = fx(a3,a2,a1,a0,a);
        fb = fx(a3,a2,a1,a0,b);
        //printf("a=%f\tfa=%f\tb=%f\tfb=%f\t", a, fa, b, fb);//test
        if( fa*fb < 0){
            t = (a+b)/2;
            ft = fx(a3,a2,a1,a0,t);
            //printf("t=%f\tft=%f\n", t, ft);//test
            if(ft == 0){
                flag = 0;
                break;
            }else if(fa*ft > 0){
                a = t;
            } else {
                b = t;
            }

        } else {
            printf("ERROR\n");
            break;
        }
    }
    if(flag){
        t = (a+b)/2;
    }
    printf("%.2f\n", t);
    return 0;
}

float fx(float a3, float a2, float a1, float a0, float x)
{
    return a3*x*x*x + a2*x*x + a1*x + a0;
}