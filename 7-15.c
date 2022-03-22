#include <stdio.h>

int main()
{
    double pi_2 = 0.0;
    double x = 0.0;
    scanf("%lf", &x);
    int fz = 1;
    int fm = 1;
    int tfz = 0, tfm = 1;
    double test=1.0;
    do{
        
        //printf("fz/fm=%d/%d\t", fz, fm);
        pi_2 += (double)fz/fm;
        
        tfz++;
        fz *= tfz;
        tfm += 2;
        fm *= tfm;
        test = (double)fz/fm;
    }while(test>x);
    pi_2 += (double)fz/fm;
    printf("PI = %f\n", pi_2*2);
    return 0;
}