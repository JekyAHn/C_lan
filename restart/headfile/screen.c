#include<stdio.h>
#include<stdlib.h>
#include"screen.h"


int main()
{	
	screen1();
	int input=0;
	int screen=1;
	
	while(screen)
	{
		scanf("%d",&input);
		if(input==1)
		{
			screen1();
		}
		
		else if(input==2)
		{
			screen2();
			while(screen)
			{
				scanf("%d",&input);
				if(input==1)
				{	
					screen1();
					screen=0;
				}
				else if(input==2)
				{
					screen2();
				}
				else
				{
					screen=1;
				}
			}
			screen=1;
		}
		if(input==3)
		{
			screen=0;
		}
	}
	return 0;
}



