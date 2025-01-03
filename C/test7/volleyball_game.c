/*
排球比赛排名

在某单位举办的排球联赛中，共有N（1<N≤10）支球队进行了单循环比赛，最后进行排名。比赛采用五局三胜制，胜三局的队胜一场，按照以下标准和顺序确定最终排名：
(1) 胜场：指比赛中获胜的比赛场次数量。
(2) 积分：比赛结果为 3:0 或 3:1时，胜队积 3 分，负队积 0 分；比赛结果为 3:2 时，胜队积 2 分，负队积 1 分。
 (3) 胜场多者排名在前，胜场相同时，积分多者排名在前，胜场和积分相同时，并列名次，为简单起见，队伍名称按照字典序显示排名顺序。
以N为4为例，用矩阵形式给出4支名称分别为Brante、Douglas、Gardenia和Andrew的赛队之间的比赛结果，3:2、3:1和3:0的比分分别用正整数5、4、3表示，对应地，2:3、1:3和0:3的比分分别用负整数-5、-4和-3表示，如下表所示。
表1
	     Brante	  Douglas	Gardenia  Andrew
Brante	   0	    5	      -4	    3
Douglas	  -5	    0	       3	    4
Gardenia   4	   -3	       0	    5   
Andrew	  -3	   -4	      -5	    0
表1中，Brante与Douglas队的比赛结果为3:2，在上述矩阵中第1行第2列用正整数5表示，对应地，在第2行第1列用-5表示Douglas与Brante的比赛结果为2:3，Brante与Gardenia队的比赛结果为1:3，因此在第1行第3列用-4表示，对应地，在第3行第1列用4表示Gardenia与Brante队的比赛结果为3:1，其余类推。
请编写程序，根据比赛结果，按照上述规则输出最终排名。

输入说明：
输入的第一行是队伍数N和N支队伍的名称（长度不超过12的字符串）；
接下来分N行、每行N个整数，表示比赛结果。

输出说明：
输出分为N行，按照排名顺序每行输出一个队名、胜场数和积分，之间用一个空格分隔。

输入样例：
4 Brante Douglas Gardenia Andrew
0 5 -4 3
-5 0 3 4
4 -3 0 5
-3 -4 -5 0

输出样例：
Douglas 2 7
Brante 2 5
Gardenia 2 5
Andrew 0 1
*/
#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[12];
    int win;
    int score;
} team;
int main()
{
    int n;
    scanf("%d", &n);

    team teams[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", teams[i].name);
        teams[i].win = 0;
        teams[i].score = 0;
    }

    int result[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &result[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            switch (result[i][j])
            {
                case 5:
                    teams[i].score += 2;
                    teams[i].win++;
                    teams[j].score += 1;
                    break;
                case 4:
                case 3:
                    teams[i].score += 3;
                    teams[i].win++;
                    break;
                case -5:
                    teams[i].score += 1;
                    teams[j].score += 2;
                    teams[j].win++;
                    break;
                case -4:
                case -3:
                    teams[j].score += 3;
                    teams[j].win++;
                    break;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(teams[j].win < teams[j + 1].win || 
               (teams[j].win == teams[j + 1].win && teams[j].score < teams[j + 1].score) ||
               (teams[j].win == teams[j + 1].win && teams[j].score == teams[j + 1].score && strcmp(teams[j].name, teams[j + 1].name) > 0))
            {
                team temp = teams[j];
                teams[j] = teams[j + 1];
                teams[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%s %d %d\n", teams[i].name, teams[i].win, teams[i].score);
    }
    return 0;
}