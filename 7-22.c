#include <stdio.h>
// �ڹ������ӽ������ܣ��ܳ���һ�������ܵ����ܵ��߿�����ؽ�����Ϣ��
// �ڹ�ÿ���ӿ���ǰ��3�ף�����ÿ����ǰ��9�ף��������ڹ��ܵ�����
// ���ÿ϶�����Ӯ�ڹ꣬���ǣ�ÿ��10���ӻ�ͷ��һ���ڹ꣬�������Լ�
// �����ڹ꣬����·����Ϣ��ÿ����Ϣ30���ӣ����������10���ӣ�
// ���ڹ�ǳ�Ŭ����һֱ�ܣ�����Ϣ���ٶ��ڹ���������ͬһ���ͬһʱ��
// ��ʼ���ܣ�����T���Ӻ��ڹ������˭�ܵÿ죿
int main()
{
    int T;
    //scanf("%d", &T);
    T = 241;
    int S_turtle = 0, S_rabbit = 0;     //����
    int V_turtle = 3, V_rabbit = 9;     //�ٶ�
    //int T_turtle = 0, T_rabbit = 0;     //ʱ��
    int flag = 0;
    int t=0;
    while(t<T){
        S_rabbit += V_rabbit;           //������
        S_turtle += V_turtle;
        t++;
        printf("t=%d\tS_rabbit=%d\tS_turtle=%d\n", t, S_rabbit, S_turtle);//test
        if((t%10)==0 && t>0){           //10min�ж�
            if(S_rabbit > S_turtle){    //�����ڹ�
                int temp=0;             //��Ϣ��ʱ
                while(temp<30){         //30min�ж�                    
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