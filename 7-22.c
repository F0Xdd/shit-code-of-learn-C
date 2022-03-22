#include <stdio.h>
// 乌龟与兔子进行赛跑，跑场是一个矩型跑道，跑道边可以随地进行休息。
// 乌龟每分钟可以前进3米，兔子每分钟前进9米；兔子嫌乌龟跑得慢，
// 觉得肯定能跑赢乌龟，于是，每跑10分钟回头看一下乌龟，若发现自己
// 超过乌龟，就在路边休息，每次休息30分钟，否则继续跑10分钟；
// 而乌龟非常努力，一直跑，不休息。假定乌龟与兔子在同一起点同一时刻
// 开始起跑，请问T分钟后乌龟和兔子谁跑得快？
int main()
{
    int T;
    //scanf("%d", &T);
    T = 241;
    int S_turtle = 0, S_rabbit = 0;     //距离
    int V_turtle = 3, V_rabbit = 9;     //速度
    //int T_turtle = 0, T_rabbit = 0;     //时间
    int flag = 0;
    int t=0;
    while(t<T){
        S_rabbit += V_rabbit;           //正常跑
        S_turtle += V_turtle;
        t++;
        printf("t=%d\tS_rabbit=%d\tS_turtle=%d\n", t, S_rabbit, S_turtle);//test
        if((t%10)==0 && t>0){           //10min判定
            if(S_rabbit > S_turtle){    //超过乌龟
                int temp=0;             //休息计时
                while(temp<30){         //30min判定                    
                    S_turtle += V_turtle;
                    temp++;
                    t++;
                    printf("t=%d\tS_rabbit=%d\tS_turtle=%d\ttemp=%d\n", t, S_rabbit, S_turtle, temp);//test
                    if(t==T){
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    break;
                }
                 
            }
        }

        
    }
    
    printf("\n");

    if(S_rabbit<S_turtle){
        printf("@_@ %d\n", S_turtle);
    } else if(S_rabbit>S_turtle){
        printf("^_^ %d\n", S_rabbit);
    } else {
        printf("-_-\n");
    }

    return 0;
}