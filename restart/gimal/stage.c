#include <stdio.h>
#include "gamescreen.h"
int plant_exp = 0;
int level = 1;
int game = 1;
char name[10];

int user()
{
    cls();
    printf("10글자 이내의 식물의 이름을 영어로 정하세요\n");
    printf("이 름 :");
    gets(name); 


}

void stage1()
{
    while (game)
    {
        char insert[5];
        cls();
        gotoxy(1,1);
        printf("식물이름 : %s",name);
        gotoxy(1,2);
        printf("식물레벨 : %d",level);
        gotoxy(1,3);
        printf("식물경험치 : %d/30",plant_exp);
        gs1();
        printf("실행할 행동 번호를 입력하세요 :");
        fgets(insert, sizeof(insert), stdin);
        if(insert[0] == '1')
        {
            plant_exp += innum1();
            
        }
        else if(insert[0] == '2')
        {
            plant_exp += innum2();
            
        }
        else
        {
            printf("잘못된 입력입니다.");
        }
        if (plant_exp >= 20 && plant_exp <= 22)
        {
            cls();
            gotoxy(1,1);
            printf("식물이름 : %s",name);
            gotoxy(1,2);
            printf("식물레벨 : %d",level);
            gotoxy(1,3);
            printf("식물경험치 : %d/30",plant_exp);
            gs1warring();
            printf("실행할 행동 번호를 입력하세요 :");
            fgets(insert, sizeof(insert), stdin);
            int out = 1;
            while (out) 
            {
                if (insert[0] == '3')
                {
                    plant_exp = plant_exp+2;
                    break;
                }
                else 
                {
                    plant_exp = plant_exp-3;
                    break;
                }
            }
        }
        if (plant_exp >= 30)
        {
            level++;
            plant_exp = 0;
            game = 0;
        }
    }
}  

void stage2()
{
    int game = 1;
    while (game)
    {
        char insert[5];
        cls();
        gotoxy(1,1);
        printf("식물이름 : %s",name);
        gotoxy(1,2);
        printf("식물레벨 : %d",level);
        gotoxy(1,3);
        printf("식물경험치 : %d/50",plant_exp);
        gs2();
        printf("실행할 행동 번호를 입력하세요 :");
        fgets(insert, sizeof(insert), stdin);
        if(insert[0] == '1')
        {
            plant_exp += innum1();
            
        }
        if(insert[0] == '2')
        {
            plant_exp += innum2();
            
        }
        else
        {
            printf("잘못된 입력입니다.");
        }
        if (plant_exp >= 25 && plant_exp <= 30 || plant_exp >= 42 && plant_exp <= 47)
        {
            cls();
            gotoxy(1,1);
            printf("식물이름 : %s",name);
            gotoxy(1,2);
            printf("식물레벨 : %d",level);
            gotoxy(1,3);
            printf("식물경험치 : %d/50",plant_exp);
            gs2warring();
            printf("실행할 행동 번호를 입력하세요 :");
            fgets(insert, sizeof(insert), stdin);
            int out = 1;
            while (out) 
            {
                if (insert[0] == '3')
                {
                    plant_exp = plant_exp+2;
                    break;
                }
                else 
                {
                    plant_exp = plant_exp-3;
                    break;
                }
            }
        }
        if (plant_exp >= 50)
        {
            level++;
            plant_exp = 0;
            game = 0;
        }
    }
}

void stage3()
{
    int game = 1;
    while (game)
    {
        char insert[5];
        cls();
        gotoxy(1,1);
        printf("식물이름 : %s",name);
        gotoxy(1,2);
        printf("식물레벨 : %d",level);
        gotoxy(1,3);
        printf("식물경험치 : %d/75",plant_exp);
        gs3();
        printf("실행할 행동 번호를 입력하세요 :");
        fgets(insert, sizeof(insert), stdin);
        if(insert[0] == '1')
        {
            plant_exp += innum1();
            
        }
        if(insert[0] == '2')
        {
            plant_exp += innum2();
            
        }
        else
        {
            printf("잘못된 입력입니다.");
        }
        if (plant_exp >= 13 && plant_exp <= 19 || plant_exp >= 45 && plant_exp <= 49 || plant_exp >= 65 && plant_exp <= 69)
        {
            cls();
            gotoxy(1,1);
            printf("식물이름 : %s",name);
            gotoxy(1,2);
            printf("식물레벨 : %d",level);
            gotoxy(1,3);
            printf("식물경험치 : %d/75",plant_exp);
            gs3warring();
            printf("실행할 행동 번호를 입력하세요 :");
            fgets(insert, sizeof(insert), stdin);
            int out = 1;
            while (out) 
            {
                if (insert[0] == '3')
                {
                    plant_exp = plant_exp+2;
                    break;
                }
                else 
                {
                    plant_exp = plant_exp-3;
                    break;
                }
            }
        }
        if(plant_exp >= 27 && plant_exp <= 31 || plant_exp >= 36 && plant_exp <= 41)
        {
            cls();
            gotoxy(1,1);
            printf("식물이름 : %s",name);
            gotoxy(1,2);
            printf("식물레벨 : %d",level);
            gotoxy(1,3);
            printf("식물경험치 : %d/75",plant_exp);
            hate2();
            gs3();
            printf("실행할 행동 번호를 입력하세요 :");
            fgets(insert, sizeof(insert), stdin);
            int out = 1;
            while (out) 
            {
                if (insert[0] == '3')
                {
                    plant_exp = plant_exp+5;
                    break;
                }
                else 
                {
                    plant_exp = plant_exp-10;
                    break;
                }
            }
        }
        if (plant_exp >= 75)
        {
            level++;
            plant_exp = 0;
            game = 0;
        }
    }
}

void stage4()
{
    int game = 1;
    while (game)
    {
        char insert[5];
        cls();
        gotoxy(1,1);
        printf("식물이름 : %s",name);
        gotoxy(1,2);
        printf("식물레벨 : %d",level);
        gotoxy(1,3);
        printf("식물경험치 : %d/100",plant_exp);
        gs4();
        printf("실행할 행동 번호를 입력하세요 :");
        fgets(insert, sizeof(insert), stdin);
        if(insert[0] == '1')
        {
            plant_exp += innum1();
            
        }
        if(insert[0] == '2')
        {
            plant_exp += innum2();
            
        }
        else
        {
            printf("잘못된 입력입니다.");
        }
        if (plant_exp >= 8 && plant_exp <= 11 || plant_exp >= 29 && plant_exp <= 34 || plant_exp >= 54 && plant_exp <= 59
            || plant_exp >= 70 && plant_exp <= 75 || plant_exp >= 80 && plant_exp <= 88)
        {
            cls();
            gotoxy(1,1);
            printf("식물이름 : %s",name);
            gotoxy(1,2);
            printf("식물레벨 : %d",level);
            gotoxy(1,3);
            printf("식물경험치 : %d/100",plant_exp);
            gs4warring();
            printf("실행할 행동 번호를 입력하세요 :");
            fgets(insert, sizeof(insert), stdin);
            int out = 1;
            while (out) 
            {
                if (insert[0] == '3')
                {
                    plant_exp = plant_exp+2;
                    break;
                }
                else 
                {
                    plant_exp = plant_exp-3;
                    break;
                }
            }
        }
        if(plant_exp >= 15 && plant_exp <= 19 || plant_exp >= 40 && plant_exp <= 44 || plant_exp >= 80 && plant_exp <= 88
            || plant_exp >= 93 && plant_exp <= 99)
        {
            cls();
            gotoxy(1,1);
            printf("식물이름 : %s",name);
            gotoxy(1,2);
            printf("식물레벨 : %d",level);
            gotoxy(1,3);
            printf("식물경험치 : %d/100",plant_exp);
            hate2();
            gs4();
            printf("실행할 행동 번호를 입력하세요 :");
            fgets(insert, sizeof(insert), stdin);
            int out = 1;
            while (out) 
            {
                if (insert[0] == '3')
                {
                    plant_exp = plant_exp+5;
                    break;
                }
                else 
                {
                    plant_exp = plant_exp-10;
                    break;
                }
            }
        }
        if (plant_exp >= 100)
        {
            level++;
            plant_exp = 0;
            game = 0;
        }
    }
}


     
int maingame()
{
    int roof = 1;
    while(roof)
    {
        if (level == 1)
        {
            user();
            stage1();
        }
        else if (level == 2)
        {
            stage2();
        }
        else if (level == 3)
        {
            stage3();
        }
        else if (level == 4)
        {
            stage4();

        }
        if (level == 5)
        {
            // 게임 종료
            roof = 0;
        }
    }
    return 0;
}

