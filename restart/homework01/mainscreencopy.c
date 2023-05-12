	#include"screenall.h"
	#include<stdio.h>

	int mainscreen()
	{
		char screen[1000];

		int he = 0;
		while(he<22)
		{
			int wid = 0;
			while(wid<46)
			{
				if(he==0)
				{
					screen[wid]='-';
				}
				else if(he==21)
				{
					screen[wid]='-';
				}
				else if(wid==0||wid==44)
				{
					screen[wid]='|';
				}
				else if(he==5&&wid==4)
				{
					screen[wid]='D';
				}
				else if(he==5&&wid==10)
				{
					screen[wid]='I';
				}
				else if(he==5&&wid==16)
				{
					screen[wid]='N';
				}
				else if(he==5&&wid==22)
				{
					screen[wid]='O';
				}
				else if(he==5&&wid==28)
				{
					screen[wid]='R';
				}
				else if(he==5&&wid==34)
				{
					screen[wid]='U';
				}
				else if(he==5&&wid==40)
				{
					screen[wid]='N';
				}
				else if(he==8&&wid==1)
				{
					screen[wid]='A';
				}
				else if(he==8&&wid==7)
				{
					screen[wid]='n';
				}
				else if(he==8&&wid==13)
				{
					screen[wid]='J';
				}
				else if(he==8&&wid==19)
				{
					screen[wid]='e';
				}
				else if(he==8&&wid==25)
				{
					screen[wid]='C';
				}
				else if(he==8&&wid==31)
				{
					screen[wid]='h';
				}
				else if(he==8&&wid==37)
				{
					screen[wid]='e';
				}
				else if(he==8&&wid==43)
				{
					screen[wid]='r';
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
			he++;

		}
		return 0;
	}



