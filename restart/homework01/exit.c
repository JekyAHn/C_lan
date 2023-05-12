#include"screenall.h"
#include<stdio.h>

int quit()
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
			else if(he==1&&wid==5)
			{
				screen[wid]='O';
			}
			else if(he==1&&wid==40)
			{
				screen[wid]='O';
			}
			else if(he==3&&wid>0&&wid<44)
			{
				screen[wid]='_';
			}
			else if(he==8&&wid==15)
			{
				screen[wid]='A';
			}
			else if(he==8&&wid==16)
			{
				screen[wid]='r';
			}
			else if(he==8&&wid==17)
			{
				screen[wid]='e';
			}
			else if(he==8&&wid==19)
			{
				screen[wid]='y';
			}
			else if(he==8&&wid==20)
			{
				screen[wid]='o';
			}
			else if(he==8&&wid==21)
			{
				screen[wid]='u';
			}
			else if(he==8&&wid==23)
			{
				screen[wid]='s';
			}
			else if(he==8&&wid==24)
			{
				screen[wid]='u';
			}
			else if(he==8&&wid==25)
			{
				screen[wid]='r';
			}   
			else if(he==8&&wid==26)
			{
				screen[wid]='e';
			} 
			else if(he==8&&wid==28)
			{
				screen[wid]='y';
			} 
			else if(he==8&&wid==29)
			{
				screen[wid]='o';
			} 
			else if(he==8&&wid==30)
			{
				screen[wid]='u';
			} 
 			else if(he==10&&wid==12)
			{
				screen[wid]='w';
			}  
 			else if(he==10&&wid==13)
			{
				screen[wid]='a';
			} 
 			else if(he==10&&wid==14)
			{
				screen[wid]='n';
			} 
 			else if(he==10&&wid==15)
			{
				screen[wid]='t';
			} 
 			else if(he==10&&wid==17)
			{
				screen[wid]='t';
			} 
 			else if(he==10&&wid==18)
			{
				screen[wid]='o';
			} 
 			else if(he==10&&wid==20)
			{
				screen[wid]='q';
			} 
 			else if(he==10&&wid==21)
			{
				screen[wid]='u';
			} 
   			else if(he==10&&wid==22)
			{
				screen[wid]='i';
			}           
 			else if(he==10&&wid==23)
			{
				screen[wid]='t';
			} 
 			else if(he==10&&wid==25)
			{
				screen[wid]='t';
			} 
 			else if(he==10&&wid==26)
			{
				screen[wid]='h';
			} 
 			else if(he==10&&wid==27)
			{
				screen[wid]='e';
			} 
 			else if(he==10&&wid==29)
			{
				screen[wid]='g';
			} 
 			else if(he==10&&wid==30)
			{
				screen[wid]='a';
			}  
 			else if(he==10&&wid==31)
			{
				screen[wid]='m';
			} 
 			else if(he==10&&wid==32)
			{
				screen[wid]='e';
			} 
 			else if(he==17&&wid==10)
			{
				screen[wid]='1';
			}
 			else if(he==17&&wid==11)
			{
				screen[wid]='.';
			}
 			else if(he==17&&wid==12)
			{
				screen[wid]='y';
			}
 			else if(he==17&&wid==13)
			{
				screen[wid]='e';
			}
 			else if(he==17&&wid==14)
			{
				screen[wid]='s';
			}
 			else if(he==17&&wid==30)
			{
				screen[wid]='2';
			}
 			else if(he==17&&wid==31)
			{
				screen[wid]='.';
			}
 			else if(he==17&&wid==32)
			{
				screen[wid]='N';
			}
 			else if(he==17&&wid==33)
			{
				screen[wid]='o';
			}
			else if(he==7&&wid>10&&wid<34)
			{
				screen[wid]='?';
			}
			else if(he==11&&wid>10&&wid<34)
			{
				screen[wid]='?';
			}
			else if(he>7&&he<11&&wid==34)
			{
				screen[wid]='?';
			}
			else if(he>7&&he<11&&wid==10)
			{
				screen[wid]='?';
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
}