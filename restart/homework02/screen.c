#include"textscreen.h"
#include <string.h>
#include <time.h>
#include <windows.h>



int clear(char* screen, int width, int height)

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

int write(const char* string, int x, int y, char* screen, int width)
{
    int length = strlen(string);
    int i;

    for (i = 0; i < length; i++)
    {
        screen[x + y * (width + 1) + i] = string[i];
    }

    return x + length;
}


int title(char* screen, int width, int height)
{
    int x = width ;
    int y = height ;
    

    write("I L o v e          r a n d o m", 13, 10, screen, width);
    write("p l a n t !!", 21, 13, screen, width);
    write("- - - - - --", 21, 14, screen, width);
    write("0 1. Plant grow", 5, 22, screen, width);
    write("0 2. Plant guide", 5, 25, screen, width); 
    write("0 3. Plant game exit", 5, 28, screen, width);
}
int guide(char* screen, int width, int height)
{
    int x = width ;
    int y = height ;
    write(" ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^",4, 3, screen, width);
    write("^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ", 4, 4, screen, width);
    write("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~", 4, 5, screen, width);
    write("The growth of a plant varies", 15, 8, screen, width);
    write("depending on your choices.", 16, 10, screen, width);
    write("Provide water and sunlight to facilitate", 8, 12, screen, width);
    write("-----     -------", 16, 13, screen, width);
    write("he plant's growth and eliminate pests.", 10, 14, screen, width);
    write("Would you like to hear the explanation again", 6, 16, screen, width);
    write("===========", 10, 20, screen, width);
    write("\\", 10, 21, screen, width);
    write("\\", 10, 22, screen, width);
    write("\\", 10, 23, screen, width);
    write("YES", 14, 22, screen, width);
    write("Push1", 13, 25, screen, width);  
    write("\\", 20, 21, screen, width);
    write("\\", 20, 22, screen, width);
    write("\\", 20, 23, screen, width);
    write("===========", 10, 24, screen, width);
    write("===========", 35, 20, screen, width);
    write("\\", 35, 21, screen, width);
    write("\\", 35, 22, screen, width);
    write("\\", 35, 23, screen, width);
    write("NO", 40, 22, screen, width);
    write("Push2", 38, 25, screen, width);
    write("\\", 45, 21, screen, width);
    write("\\", 45, 22, screen, width);
    write("\\", 45, 23, screen, width);
    write("===========", 35, 24, screen, width);
    write("><><)()(><><)()(><><)()(><><)()(><><)()(><><)()(", 4, 28, screen, width);

}

int gameOver(char* screen, int width, int height)
{
    int x = width ;
    int y = height ;

    write("NAGAJIMA", 4, 1, screen, width);
    write("Are you sure you want to end the game", 10, 3, screen, width);
    write("and leave the cute and lovely", 14, 5, screen, width);
    write("plant in the pot?", 20, 7, screen, width);
    write("Are you sure you want to end the game", 10, 9, screen, width);
    write("and leave the cute and lovely", 14, 11, screen, width);
    write("plant in the pot?", 20, 13, screen, width);
    write("Are you sure you want to end the game", 10, 15, screen, width);
    write("and leave the cute and lovely", 14, 17, screen, width);
    write("plant in the pot?", 20, 19, screen, width);
    write("Are you sure you want to end the game", 10, 21, screen, width);
    write("and leave the cute and lovely", 14, 23, screen, width);
    write("plant in the pot?", 20, 25, screen, width);
    write("1.yes..........", 4, 30, screen, width);
    write("2.Nonononononoono", 35, 30, screen, width);
    
}
