#include <stdio.h>
#include <stdlib.h>
#include "textscreen.h"

int main()
{
    char screen[57 * 34 + 1];
    int width = 56;
    int height = 34;
    int game = 1;

    char input;

    while (game)
    {
        clearbuffer(screen, width, height);
        TitleBuffer(screen, width, height);
        system("cls");
        printf("%s\nPlease input>", screen);

        scanf("%s",&input);
        if (input == '2')
        {
            clearbuffer(screen, width, height);
            guideBuffer(screen, width, height);

            system("cls");
            printf("%s\nPlease input>", screen);

            scanf("%s", &input);
            if (input == '1')
             {
                clearbuffer(screen, width, height);
                TitleBuffer(screen, width, height);
             }
        }
        else if (input == '3')
        {
            clearbuffer(screen, width, height);
            GameOverBuffer(screen, width, height);

            system("cls");
            printf("%s\nPlease input>", screen);

            scanf("%s", &input);
            if (input == '1')
            {
                game = 0;
            }
            else if (input == '2')
            {
                clearbuffer(screen, width, height);
                TitleBuffer(screen, width, height);
            }
        
        }
        

    }
    return 0;
}

