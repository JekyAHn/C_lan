#include<stdio.h>

int main()
{
	char screen[1000];

	int num = 0;
	while(num<22)
	{
		int wid = 0;
		while(wid<46)
		{
			if(num==0)
			{
				screen[wid]='-';
			}
			else if(num==21)
			{
				screen[wid]='-';
			}
			else if(wid==0||wid==44)
			{
				screen[wid]='|';
			}
			else
			{
				screen[wid]=' ';
			}
			wid++;
		}
		screen[45]='\n';
		screen[46]='\0';
		printf("%s",screen);
		num++;

	}
	return 0;
}


