#include<stdio.h>
#include"screenall.h"

int main()
{
    mainscreen();
    int game = 1;
    int input = 0;
    while (game)
    {
        scanf("%d",&input);
        if(input==2)
        {
            guide();
            while(game)
            {
                scanf("%d",&input);
                if (input==1)
                {
                    mainscreen();
                    game=0;
                }
                else if(input==2)
                {
                    guide();
                }
                else
                {
                    game=1;
                }
            }
            game=1;
            
        }
        if(input==3)
        {
            quit();
            scanf("%d",&input);
            if(input==1)
            {
                game=0;
            }
            else if(input==2)
            {
                mainscreen();
            }

        }
    }
    return 0;
}
    
	




