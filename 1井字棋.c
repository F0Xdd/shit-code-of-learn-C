#include <stdio.h>
void printboard(char bd[3][3]);

int main()
{
    const int size = 3;     //棋盘大小
    const int N = 9;        //最大步数
    int step = 0;           //步数计数器
    char board[size][size]; //棋盘
    int i,j;                //行列控制
    int numofO, numofX;     //判断参数
    int result = -1;    //-1平局，1：X赢，0：O赢
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            board[i][j] = '*';
        }
    }
    //初始化输出
    printboard(board);
    //开始游戏
    while(step<N){
        //读入
        if(step%2 == 0){
            printf("O的回合:几行几列(1-3)\n");
            scanf("%d %d", &i, &j);
            board[--i][--j] = 'O';
            //输出
            printboard(board);
        } else {
            printf("X的回合:几行几列(1-3)\n");
            scanf("%d %d", &i, &j);
            board[--i][--j] = 'X';
            //输出
            printboard(board);
        }
        
        //判断行
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
        
        //判断列
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

        //判断对角线
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
    //局势判断
    switch(result){
        case 1:
            printf("X赢了！\n");
            break;
        case 0:
            printf("O赢了！\n");
            break;
        case -1:
            printf("平局！\n");
            break;
        default:
            printf("Error!\n");
    }

    return 0;
}

//打印棋盘
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
