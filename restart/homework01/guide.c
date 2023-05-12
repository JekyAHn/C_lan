#include"screenall.h"
#include<stdio.h>

int guide()
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
            else if(he==9&&wid>7&&wid<35)
            {
                screen[wid]='-';
            }
            else if(he==11&&wid>11&&wid<31)
            {
                screen[wid]='-';
            }
            else if(he==20&&wid==31)
            {
                screen[wid]='/';
            }
           else if(he==19&&wid==32)
            {
                screen[wid]='/';
            }
           else if(he==18&&wid==33)
            {
                screen[wid]='/';
            }
           else if(he==17&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==16&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==15&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==14&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==13&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==12&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==11&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==10&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==7&&wid==34)
            {
                screen[wid]='|';
            }
           else if(he==6&&wid==33)
            {
                screen[wid]='\\';
            }
           else if(he==5&&wid==32)
            {
                screen[wid]='\\';
            }
           else if(he==4&&wid==33)
            {
                screen[wid]='/';
            }
          else if(he==4&&wid==34)
            {
                screen[wid]='\\';
            }
           else if(he==4&&wid==35)
            {
                screen[wid]='/';
            }            
          else if(he==4&&wid==36)
            {
                screen[wid]='\\';
            }
           else if(he==4&&wid==37)
            {
                screen[wid]='/';
            }
          else if(he==4&&wid==38)
            {
                screen[wid]='\\';
            }
           else if(he==4&&wid==39)
            {
                screen[wid]='/';
            }
          else if(he==4&&wid==40)
            {
                screen[wid]='\\';
            }
           else if(he==4&&wid==41)
            {
                screen[wid]='/';
            }
          else if(he==4&&wid==42)
            {
                screen[wid]='\\';
            }
           else if(he==4&&wid==43)
            {
                screen[wid]='/';
            }
          else if(he==4&&wid==44)
            {
                screen[wid]='\\';
            }
           else if(he==4&&wid==45)
            {
                screen[wid]='/';
            }
            else if(wid>31&&he<5)
            {
                screen[wid]='@';
            }
            else if(wid>27&&wid<32&&he<8)
            {
                screen[wid]='@';
            }
			else if(he==8&&wid==8)
			{
				screen[wid]='P';
			}
			else if(he==8&&wid==9)
			{
				screen[wid]='l';
			}
			else if(he==8&&wid==10)
			{
				screen[wid]='e';
			}
			else if(he==8&&wid==11)
			{
				screen[wid]='a';
			}
			else if(he==8&&wid==12)
			{
				screen[wid]='s';
			}
			else if(he==8&&wid==13)
			{
				screen[wid]='e';
			}
			else if(he==8&&wid==15)
			{
				screen[wid]='g';
			}
			else if(he==8&&wid==16)
			{
				screen[wid]='r';
			}
			else if(he==8&&wid==17)
			{
				screen[wid]='o';
			}   
			else if(he==8&&wid==18)
			{
				screen[wid]='w';
			} 
			else if(he==8&&wid==20)
			{
				screen[wid]='t';
			} 
			else if(he==8&&wid==21)
			{
				screen[wid]='h';
			} 
			else if(he==8&&wid==22)
			{
				screen[wid]='e';
			} 
 			else if(he==8&&wid==24)
			{
				screen[wid]='p';
			} 
 			else if(he==8&&wid==25)
			{
				screen[wid]='l';
			} 
 			else if(he==8&&wid==26)
			{
				screen[wid]='a';
			} 
 			else if(he==8&&wid==27)
			{
				screen[wid]='n';
			} 
 			else if(he==8&&wid==28)
			{
				screen[wid]='t';
			} 
 			else if(he==8&&wid==30)
			{
				screen[wid]='u';
			}
 			else if(he==8&&wid==31)
			{
				screen[wid]='s';
			} 
 			else if(he==8&&wid==32)
			{
				screen[wid]='i';
			} 
 			else if(he==8&&wid==33)
			{
				screen[wid]='n';
			} 
 			else if(he==8&&wid==34)
			{
				screen[wid]='g';
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
				screen[wid]='t';
			} 
 			else if(he==10&&wid==15)
			{
				screen[wid]='e';
			} 
 			else if(he==10&&wid==16)
			{
				screen[wid]='r';
			} 
 			else if(he==10&&wid==18)
			{
				screen[wid]='a';
			} 
 			else if(he==10&&wid==19)
			{
				screen[wid]='n';
			} 
 			else if(he==10&&wid==20)
			{
				screen[wid]='d';
			} 
   			else if(he==10&&wid==22)
			{
				screen[wid]='s';
			}           
 			else if(he==10&&wid==23)
			{
				screen[wid]='u';
			} 
 			else if(he==10&&wid==24)
			{
				screen[wid]='n';
			} 
 			else if(he==10&&wid==26)
			{
				screen[wid]='l';
			} 
 			else if(he==10&&wid==27)
			{
				screen[wid]='i';
			} 
 			else if(he==10&&wid==28)
			{
				screen[wid]='g';
			} 
 			else if(he==10&&wid==29)
			{
				screen[wid]='h';
			}  
 			else if(he==10&&wid==30)
			{
				screen[wid]='t';
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
 			else if(he==17&&wid==19)
			{
				screen[wid]='2';
			}
 			else if(he==17&&wid==20)
			{
				screen[wid]='.';
			}
 			else if(he==17&&wid==21)
			{
				screen[wid]='N';
			}
 			else if(he==17&&wid==22)
			{
				screen[wid]='o';
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