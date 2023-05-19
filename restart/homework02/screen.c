#include"textscreen.h"
#include <string.h>

int clearbuffer(char* screen, int width, int height)

{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width+1)
        {
            if (w == width)
            {
                screen[w+(h*(width+1))] = '\n';
            }
            else
            {
                if (w == 0 || w == 1 || w == 2 || w == (width-1) || w == (width-2) || w == (width-3) ||
                    h == 0 || h == 1 || h == (height-1) || h == (height-2))
                {
                    screen[w+(h*(width+1))] = ' ';
                }
                else if (h == 2 || h == 31)
                {
                    screen[w+(h*(width+1))] = '=';
                }
                else if (w == 3 || w == 52)
                {
                    screen[w+(h*(width+1))] = '&';
                }
                else
                {
                    screen[w+(h*(width+1))] = ' ';
                }
            }
            w++; 
        }
        w = 0;
        h++; 
    }
    screen[w+(h*(width+1))] = '\0';
    return 0; 
}

int writeBuffer(const char* string, int x, int y, char* screen, int width)
{
    int length = strlen(string);
    int i;

    for (i = 0; i < length; i++)
    {
        screen[x + y * (width + 1) + i] = string[i];
    }

    return x + length;
}

int TitleBuffer(char* screen, int width, int height)
{
    int x = width ;
    int y = height ;

    writeBuffer("I L o v e          r a n d o m", 13, 10, screen, width);
    writeBuffer("p l a n t !!", 21, 13, screen, width);
    writeBuffer("- - - - - --", 21, 14, screen, width);
    writeBuffer("0 1. Plant grow", 5, 22, screen, width);
    writeBuffer("0 2. Plant guide", 5, 25, screen, width);
    writeBuffer("0 3. Plant game exit", 5, 28, screen, width);
}
int guideBuffer(char* screen, int width, int height)
{
    int x = width ;
    int y = height ;
    writeBuffer(" ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^",4, 3, screen, width);
    writeBuffer("^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ", 4, 4, screen, width);
    writeBuffer("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~", 4, 5, screen, width);
    writeBuffer("The growth of a plant varies", 15, 8, screen, width);
    writeBuffer("depending on your choices.", 16, 10, screen, width);
    writeBuffer("Provide water and sunlight to facilitate", 8, 12, screen, width);
    writeBuffer("-----     -------", 16, 13, screen, width);
    writeBuffer("he plant's growth and eliminate pests.", 10, 14, screen, width);
    writeBuffer("Would you like to hear the explanation again", 6, 16, screen, width);
    writeBuffer("===========", 10, 20, screen, width);
    writeBuffer("\\", 10, 21, screen, width);
    writeBuffer("\\", 10, 22, screen, width);
    writeBuffer("\\", 10, 23, screen, width);
    writeBuffer("YES", 14, 22, screen, width);
    writeBuffer("Push1", 13, 25, screen, width);  
    writeBuffer("\\", 20, 21, screen, width);
    writeBuffer("\\", 20, 22, screen, width);
    writeBuffer("\\", 20, 23, screen, width);
    writeBuffer("===========", 10, 24, screen, width);
    writeBuffer("===========", 35, 20, screen, width);
    writeBuffer("\\", 35, 21, screen, width);
    writeBuffer("\\", 35, 22, screen, width);
    writeBuffer("\\", 35, 23, screen, width);
    writeBuffer("NO", 40, 22, screen, width);
    writeBuffer("Push2", 38, 25, screen, width);
    writeBuffer("\\", 45, 21, screen, width);
    writeBuffer("\\", 45, 22, screen, width);
    writeBuffer("\\", 45, 23, screen, width);
    writeBuffer("===========", 35, 24, screen, width);
    writeBuffer("><><)()(><><)()(><><)()(><><)()(><><)()(><><)()(", 4, 28, screen, width);

}

int GameOverBuffer(char* screen, int width, int height)
{
    int x = width ;
    int y = height ;

    writeBuffer("NAGAJIMA", 4, 1, screen, width);
    writeBuffer("Are you sure you want to end the game", 10, 3, screen, width);
    writeBuffer("and leave the cute and lovely", 14, 5, screen, width);
    writeBuffer("plant in the pot?", 20, 7, screen, width);
    writeBuffer("Are you sure you want to end the game", 10, 9, screen, width);
    writeBuffer("and leave the cute and lovely", 14, 11, screen, width);
    writeBuffer("plant in the pot?", 20, 13, screen, width);
    writeBuffer("Are you sure you want to end the game", 10, 15, screen, width);
    writeBuffer("and leave the cute and lovely", 14, 17, screen, width);
    writeBuffer("plant in the pot?", 20, 19, screen, width);
    writeBuffer("Are you sure you want to end the game", 10, 21, screen, width);
    writeBuffer("and leave the cute and lovely", 14, 23, screen, width);
    writeBuffer("plant in the pot?", 20, 25, screen, width);
    writeBuffer("1.yes..........", 4, 30, screen, width);
    writeBuffer("2.Nonononononoono", 35, 30, screen, width);
    
}
