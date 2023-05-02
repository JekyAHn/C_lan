#include<stdio.h>

int screen1()
{
	printf("1번 화면 출력 입니다 ㅎㅎㅎ\n");
	printf("1번을 누르면 계속 1번화면 출력\n");
	printf("2번을 누르면 2번화면 출력\n");
	printf("3번을 누르면 프로그램 종료\n");
	return 0;
}

int screen2()
{
	printf("2번 화면 출력 입니다. ㅜㅜㅜ\n");
	printf("1번을 누르면 1번 화면 출력\n");
	printf("2번을 누르면 계속 2번화면 출력\n");

	return 0;
}

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



