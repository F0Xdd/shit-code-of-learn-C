// 本题要求编写程序，输出指定的由“*”组成的倒三角图案。

// 输入格式:
// 本题目没有输入。

// 输出格式:
// 按照下列格式输出由“*”组成的倒三角图案。

// * * * *
//  * * *
//   * *
//    *
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
