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
			else if(he==8||wid==44)
			{
				screen[wid]='@';
			}
			else if(he==10||wid==44)
			{
				screen[wid]='@';
			}
			else if(he==9&&wid<15)
			{
				screen[wid]='\\';
			}
			else if(he==9&&wid>29)
			{
				screen[wid]='/';
			}
			else if(he==5&&wid==2)
			{
				screen[wid]='G';
			}
			else if(he==5&&wid==7)
			{
				screen[wid]='R';
			}
			else if(he==5&&wid==12)
			{
				screen[wid]='O';
			}
			else if(he==5&&wid==17)
			{
				screen[wid]='W';
			}
			else if(he==5&&wid==22)
			{
				screen[wid]='P';
			}
			else if(he==5&&wid==27)
			{
				screen[wid]='L';
			}
			else if(he==5&&wid==32)
			{
				screen[wid]='A';
			}
			else if(he==5&&wid==37)
			{
				screen[wid]='N';
			}
			else if(he==5&&wid==42)
			{
				screen[wid]='T';
			}
			else if(he==9&&wid==16)
			{
				screen[wid]='w';
			}
			else if(he==9&&wid==17)
			{
				screen[wid]='a';
			}						
			else if(he==9&&wid==18)
			{
				screen[wid]='t';
			}
			else if(he==9&&wid==19)
			{
				screen[wid]='e';
			}
			else if(he==9&&wid==20)
			{
				screen[wid]='r';
			}
			else if(he==9&&wid==22)
			{
				screen[wid]='a';
			}
			else if(he==9&&wid==23)
			{
				screen[wid]='n';
			}
			else if(he==9&&wid==24)
			{
				screen[wid]='d';
			}
			else if(he==9&&wid==26)
			{
				screen[wid]='s';
			}
			else if(he==9&&wid==27)
			{
				screen[wid]='u';
			}
			else if(he==9&&wid==28)
			{
				screen[wid]='n';
			}
			else if(he==13&&wid==4)
			{
				screen[wid]='1';
			}
			else if(he==13&&wid==5)
			{
				screen[wid]='.';
			}
			else if(he==13&&wid==8)
			{
				screen[wid]='G';
			}
			else if(he==13&&wid==9)
			{
				screen[wid]='a';
			}
			else if(he==13&&wid==10)
			{
				screen[wid]='m';
			}
			else if(he==13&&wid==11)
			{
				screen[wid]='e';
			}
			else if(he==13&&wid==13)
			{
				screen[wid]='S';
			}
			else if(he==13&&wid==14)
			{
				screen[wid]='t';
			}
			else if(he==13&&wid==15)
			{
				screen[wid]='a';
			}
			else if(he==13&&wid==16)
			{
				screen[wid]='r';
			}
			else if(he==13&&wid==17)
			{
				screen[wid]='t';
			}
			else if(he==15&&wid==4)
			{
				screen[wid]='2';
			}
			else if(he==15&&wid==5)
			{
				screen[wid]='.';
			}
			else if(he==15&&wid==8)
			{
				screen[wid]='G';
			}
			else if(he==15&&wid==9)
			{
				screen[wid]='a';
			}
			else if(he==15&&wid==10)
			{
				screen[wid]='m';
			}
			else if(he==15&&wid==11)
			{
				screen[wid]='e';
			}
			else if(he==15&&wid==13)
			{
				screen[wid]='G';
			}
			else if(he==15&&wid==14)
			{
				screen[wid]='u';
			}
			else if(he==15&&wid==15)
			{
				screen[wid]='i';
			}
			else if(he==15&&wid==16)
			{
				screen[wid]='d';
			}
			else if(he==15&&wid==17)
			{
				screen[wid]='e';
			}
			else if(he==17&&wid==4)
			{
				screen[wid]='3';
			}
			else if(he==17&&wid==5)
			{
				screen[wid]='.';
			}
			else if(he==17&&wid==8)
			{
				screen[wid]='E';
			}
			else if(he==17&&wid==9)
			{
				screen[wid]='x';
			}
			else if(he==17&&wid==10)
			{
				screen[wid]='i';
			}
			else if(he==17&&wid==11)
			{
				screen[wid]='t';
			}
			else if(he==20&&wid==30)
			{
				screen[wid]='\\';
			}
			else if(he==19&&wid==29)
			{
				screen[wid]='\\';
			}
			else if(he==18&&wid==29)
			{
				screen[wid]='\\';
			}
			else if(he==17&&wid==28)
			{
				screen[wid]='\\';
			}	
			else if(he==16&&wid==28)
			{
				screen[wid]='\\';
			}
			else if(he==15&&wid==27)
			{
				screen[wid]='\\';
			}
			else if(he==14&&wid>27&&wid<40)
			{
				screen[wid]='_';
			}	
			else if(he==15&&wid==40)
			{
				screen[wid]='/';
			}	
			else if(he==16&&wid==39)
			{
				screen[wid]='/';
			}	
			else if(he==17&&wid==39)
			{
				screen[wid]='/';
			}
			else if(he==18&&wid==38)
			{
				screen[wid]='/';
			}	
			else if(he==19&&wid==38)
			{
				screen[wid]='/';
			}	
			else if(he==20&&wid==37)
			{
				screen[wid]='/';
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



