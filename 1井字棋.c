#include <stdio.h>
void printboard(char bd[3][3]);

int main()
{
    const int size = 3;     //���̴�С
    const int N = 9;        //�����
    int step = 0;           //����������
    char board[size][size]; //����
    int i,j;                //���п���
    int numofO, numofX;     //�жϲ���
    int result = -1;    //-1ƽ�֣�1��XӮ��0��OӮ
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            board[i][j] = '*';
        }
    }
    //��ʼ�����
    printboard(board);
    //��ʼ��Ϸ
    while(step<N){
        //����
        if(step%2 == 0){
            printf("O�Ļغ�:���м���\n");
            scanf("%d %d", &i, &j);
            board[--i][--j] = 'O';
            //���
            printboard(board);
        } else {
            printf("X�Ļغ�:���м���\n");
            scanf("%d %d", &i, &j);
            board[--i][--j] = 'X';
            //���
            printboard(board);
        }
        
        //�ж���
        for(i=0; i<size && result==-1; i++){
            numofO = numofX = 0;
            for(j=0; j<size; j++){
                if(board[i][j] == 'O'){
                    numofO ++;
                } else if(board[i][j] == 'X'){
                    numofX ++;
                }
            }
            if(numofO == size){
                result = 0;
                break;
            } else if(numofX == size){
                result = 1;
                break;
            }
        }
        if(result != -1){
            break;
        }
        
        //�ж���
        for(j=0; j<size && result==-1; j++){
            numofO = numofX = 0;
            for(i=0; i<size; i++){
                if(board[i][j] == 'O'){
                    numofO ++;
                } else if(board[i][j] == 'X'){
                    numofX ++;
                }
            }
            if(numofO == size){
                result = 0;
                break;
            } else if(numofX == size){
                result = 1;
                break;
            }
        }
        if(result != -1){
            break;
        }

        //�ж϶Խ���
        if((board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')){
            result = 0;
        }
        if((board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')){
            result = 1;
        }
        if((board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O')){
            result = 0;
        }
        if((board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X')){
            result = 1;
        }
        if(result != -1){
            break;
        }
        

        step++;
    }
    //�����ж�
    switch(result){
        case 1:
            printf("XӮ�ˣ�\n");
            break;
        case 0:
            printf("OӮ�ˣ�\n");
            break;
        case -1:
            printf("ƽ�֣�\n");
            break;
        default:
            printf("Error!\n");
    }

    return 0;
}

//��ӡ����
void printboard(char bd[3][3])
{   
    int i, j;
    for(j=0;j<3;j++){
        printf("\n");
        for(i=0;i<3;i++){
            putchar(bd[i][j]);
            printf("\t");
        }
        printf("\n\n");
    }
}