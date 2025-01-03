/*
题目 5：消除类游戏
问题描述
消除类游戏是深受大众欢迎的一种游戏，游戏在一个包含有 n 行 m 列的游戏棋盘上进
行，棋盘的每一行每一列的方格上放着一个有颜色的棋子，当一行或一列上有连续三个或更
多的相同颜色的棋子时，这些棋子都被消除。当有多处可以被消除时，这些地方的棋子将同
时被消除。
现在给你一个 n 行 m 列的棋盘，棋盘中的每一个方格上有一个棋子，请给出经过一次
消除后的棋盘。
请注意：一个棋子可能在某一行和某一列同时被消除。
输入格式
输入的第一行包含两个整数 n, m，用空格分隔，分别表示棋盘的行数和列数。
接下来 n 行，每行 m 个整数，用空格分隔，分别表示每一个方格中的棋子的颜色。颜
色使用1 至9 编号。
输出格式
输出 n 行，每行 m 个整数，相邻的整数之间使用一个空格分隔，表示经过一次消除后
的棋盘。如果一个方格中的棋子被消除，则对应的方格输出 0，否则输出棋子的颜色编号。
样例输入1
4 5
2 2 3 1 2
3 4 5 1 4
2 3 2 1 3
2 2 2 4 4
样例输出1
2 2 3 0 2
3 4 5 0 4
2 3 2 0 3
0 0 0 4 4
样例说明
棋盘中第4 列的1 和第 4 行的2 可以被消除，其他的方格中的棋子均保留。
样例输入2
4 5
2 2 3 1 2
3 1 1 1 1
2 3 2 1 3
2 2 3 3 3
样例输出2
2 2 3 0 2
3 0 0 0 0
2 3 2 0 3
2 2 0 0 0
样例说明
棋盘中所有的1 以及最后一行的3 可以被同时消除，其他的方格中的棋子均保留。
评测用例规模与约定
所有的评测用例满足：1 ≤ n, m ≤ 30。
*/
#include<stdio.h>

int main()
{
    int n;int m;
    scanf("%d %d",&n, &m);

    int board[n][m];
    int board_bkp[n][m];
    for(int line = 0;line < n; line++)
    {
        for(int column = 0;column < m; column++)
        {
            scanf("%d",&board[line][column]);
            board_bkp[line][column] = board[line][column];
        }
    }
    
    for(int line = 0; line < n; line++)
    {
        for(int column = 2; column < m; column++)
        {
            if(board[line][column] == board[line][column - 1] && board[line][column] == board[line][column - 2])
            {
                board[line][column] = 0;
                board[line][column - 1] = 0;
                board[line][column - 2] = 0;
            }
        }
    }

    for(int column = 0; column < m; column++)
    {
        for(int line = 2; line < n; line++)
        {
            if (board_bkp[line][column] == board_bkp[line - 1][column] && board_bkp[line - 2][column] == board_bkp[line][column])
            {
                board_bkp[line][column] = 0;
                board_bkp[line - 1][column] = 0;
                board_bkp[line - 2][column] = 0;
            }
        }
    }

    int board_final[n][m];
    for(int line = 0; line < n; line++)
    {
        for(int column = 0; column < m; column++)
        {
            if(board_bkp[line][column] == 0 || board[line][column] == 0)
            {
                board_final[line][column] = 0;
            }
            else
            {
                board_final[line][column] = board[line][column];
            }
        }
    }

    for(int line = 0; line < n; line++)
    {
        for(int column = 0; column < m; column++)
        {
            printf("%d ",board_final[line][column]);
        }
        printf("\n");
    }
    return 0;
}