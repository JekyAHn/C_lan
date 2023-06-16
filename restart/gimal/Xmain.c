#include <stdio.h>
#include <stdlib.h>
#include "textscreen.h"

int main()
{
    char screen[57 * 34 + 1];
    int width = 56;
    int height = 34;
    int game = 1;

    int t = 0;
    int in = 0;
    int in2 = 0;
    int in3 = 0;

    while (game)
    {
       if (t==0)
       {
            system("cls");
            clear(screen, width, height);
            title(screen, width, height);

            printf("%s\nplease input -->",screen);
            scanf("%d",&in);
            t = 1;
       }
       if (in==1)
       {
            t = 0;
       }
       else if(in==2)
       {
            system("cls");
            clear(screen, width, height);
            guide(screen, width, height);

            printf("%s\nplease input -->",screen);
            scanf("%d",&in2);
            while (game)
            {
                if (in2==1)
                {
                    t = 0;
                    break;
                }
                else if (in2==2)
                {
                    in = 2;
                    break;
                }
                else
                {
                    printf("no signal");
                    scanf("%d",&in2);
                }
                
            }
       }
       else if(in==3)
       {
            system("cls");
            clear(screen, width, height);
            gameOver(screen, width, height);

            printf("%s\nplease input -->",screen);
            scanf("%d",&in3);
            if (in3==1)
            {
                system("cls");
                game = 0;
            }  
            while (game)
            {
                if (in3==2)
                {
                    t = 0;
                    break;
                }
                else
                {
                    printf("no signal");
                    scanf("%d",&in3);
                }

            }
        }
        else
        {
            printf("no signal");
            scanf("%d",&in);
        }
    }
    return 0;  
}
