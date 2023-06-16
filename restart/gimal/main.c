#include <stdio.h>
#include <stdlib.h>
#include "textscreen.h"
#include "gamesorce.h"
#include "play.h"

int main()
{
int start = 1;
int t = 0;
int in1 = 0;
int in2 = 0;
int gamestop = 0;

while (start)
{
    if (t==0)
    {
        system("cls");
        titleclear();
        title();

        printf("\nplease input -->");
        scanf_s("%d",&in1);
         t = 1;
    }
    if (in1 == 1)
    {
        user();
        maingame();
        cls();
        titleclear();
        end();
        start = 0;
    }
    if (in1 == 2)
    {
        system("cls");
        titleclear();
        guide();

        printf("\n메인화면으로 나가려면 1번을 입력하세요");
        scanf_s("%d",&in2);
        while (start)
        {
            if (in2==1)
            {
                t = 0;
                break;
            }
            else
            {
                printf("잘못된 입력입니다");
                scanf_s("%d",&in2);
            }

        }
        
    }
    else if(in1 == 3)
    {
        start = 0;
    }
    else
    {
       printf("잘못된 입력입니다");
       printf("\nplease input -->");
       scanf_s("%d",&in1); 
    }
}
    return 0;
}