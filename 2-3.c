#include <stdio.h>

int main()
{
    int n= 4;
    int i, j, k;
    for(i=1;i<=n;i++){
       for(k=i;k>1;k--){
            printf(" ");
        }
       for(j=n;j>=i;j--){    
           printf("* ");   
       } 
       printf("\b");
       printf("\n");
    }
    return 0;
}
