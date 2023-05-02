#include<stdio.h>

int screen()
{
	printf("############################################\n");
	printf("############################################\n");
	printf("##                                        ##\n");
	printf("##                                        ##\n");
	printf("##            H  U  N  G  R  Y            ##\n");
	printf("##                                        ##\n");
	printf("##            D    I    N    O            ##\n");
	printf("##                                        ##\n");
	printf("##                                        ##\n");
	printf("##   1  GAMESTART                         ##\n");
	printf("##   2. GAIDE                             ##\n");
	printf("##   3. EXIT                              ##\n");
	printf("##                                        ##\n");
	printf("############################################\n");
	printf("############################################\n");

	return 0;
}

int text()
{
	printf("############################################\n");
	printf("############################################\n");
	printf("##  An hungry dino who wants to eat meat  ##\n");
	printf("##                                        ##\n");
	printf("##      Please jump and avoid obstacles   ##\n");
	printf("##                                        ##\n");
	printf("##           while eating the meat        ##\n");
	printf("##                                        ##\n");
	printf("##            HURRY UP MOVE!!!            ##\n");
	printf("##                                        ##\n");
	printf("##         1. Yes          2. No          ##\n");
	printf("##                                        ##\n");
	printf("##                                        ##\n");
	printf("############################################\n");
	printf("############################################\n");

	return 0;

}

int main() 
{
	screen();
	int game = 1;
	int input = 0;
	while(game)
	{
		scanf("%d",&input);
		if(input==2)
		{
			text();
			while(game)
			{
				scanf("%d",&input);
				if(input==1)
				{
					screen();
					game=0;
				}
                                else if(input== 2)
				{
					text();
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
			game=0;
		}
		
	}
	return 0;
}
