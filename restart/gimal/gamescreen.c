#include <stdio.h>
#include "gamescreen1.h"

void gameclear()
{
    int w;
    int x = 0;
    int y = 0;

    gotoxy(x,y);
    printf("┏");
    for(w = 0 ; w <61; w++)
        printf("━");
    printf("┓");

    for(w=1;w<30;w++)
    {
        y++;
        gotoxy(x,y);
        printf("┃");
        gotoxy(62,y);
        printf("┃");        
    }
    gotoxy(1,23);
    for(w = 0 ; w <61; w++)
    printf("━");

    gotoxy(x,30);
    printf("┗");
    for(w = 0 ; w <61; w++)
        printf("━");
    printf("┛");
    gotoxy(0,31);
}

void water()
{   
    gotoxy(5,24);
    printf("1.물주기");
    gotoxy(7,25);
    printf(" )-(");
    gotoxy(7,26);
    printf("(   )");
    gotoxy(7,27);
    printf("|   |");
    gotoxy(7,28);
    printf("|   |");
    gotoxy(7,29);
    printf("|___|");
}

void sun()
{
    gotoxy(27,24);
    printf("2.햇살주기");
    gotoxy(24,25);
    printf("      \\ | /");
    gotoxy(24,26);
    printf("    '-.;;;.-'");
    gotoxy(24,27);
    printf("   -==;;;;;==-");
    gotoxy(24,28);
    printf("    .-';;;'-.");
    gotoxy(24,29);
    printf("      / | \\");
}

void bug()
{
    gotoxy(48,24);
    printf("3.벌레잡기");
    gotoxy(50,25);
    printf("  ,,");
    gotoxy(50,26);
    printf(" ,xx,");
    gotoxy(50,27);
    printf(" /==\\");
    gotoxy(50,28);
    printf("(/==\\)");
    gotoxy(50,29);
    printf("  \\/");
}
void lv1()
{
    gotoxy(29,19);
    printf("____O____");
    gotoxy(29,20);
    printf("\\       /");
    gotoxy(29,21);
    printf(" \\     /");
    gotoxy(29,22);
    printf("  \\___/");
}
void lv2()
{
    textcolor(10);
    gotoxy(29,16);
    printf(" |\\  /|");
    gotoxy(29,17);
    printf(" \\ \\|//");
    gotoxy(29,18);
    printf("  \\\\|/");
    textcolor(15);
    gotoxy(29,19);
    printf("____|____"); 
    gotoxy(29,20);
    printf("\\       /");
    gotoxy(29,21);
    printf(" \\     /");
    gotoxy(29,22);
    printf("  \\___/");
 
}
void lv3()
{   
    gotoxy(29,8);
    textcolor(14);
    printf("  /\\^/`\\");
    gotoxy(29,9);
    printf(" |     \\/|");
    gotoxy(29,10);
    printf(" |     | |");
    gotoxy(29,11);
    printf(" \\ \\    /");
    gotoxy(29,12);
    printf("  '\\\\//'");
    gotoxy(29,13);
    textcolor(10);
    printf("    ||");
    gotoxy(29,14);
    printf("    ||  ,");
    gotoxy(29,15);
    printf(" |\\ ||  |\\");
    gotoxy(29,16);
    printf("| | ||  | |");
    gotoxy(29,17);
    printf("| | || / /");
    gotoxy(29,18);
    printf(" \\ \\||/ /");
    textcolor(15);
    gotoxy(29,19);
    printf("_ `\\\\//`_");
    gotoxy(29,20);
    printf("\\       /");
    gotoxy(29,21);
    printf(" \\     /");
    gotoxy(29,22);
    printf("  \\___/");
}

void lv4()
{
    textcolor(10);
    gotoxy(18,10);
    printf("           &&& &&  & &&");
    gotoxy(18,11);
    printf("      &★ &\\/&\\|& ()|/ ★, &&");
    gotoxy(18,12);
    printf("     &\\/(/&/★||/& /_/)_&/_&");
    gotoxy(18,13);
    printf("   &_\\_★★_\\ |& |★&/&__%%_/_★ ★&");
    gotoxy(18,14);
    printf("&&   ★★ & &| ★| /& & %% ()★ /★&");
    gotoxy(18,15);
    printf("  ()&_---()&\\&\\|&&-&★--%%---()~");
    textcolor(15);
    gotoxy(24,16);
    printf("&&     \\|||");
    gotoxy(29,17);
    printf("   |||");
    gotoxy(29,18);
    printf("   |||");
    gotoxy(29,19);
    printf("___|||___"); 
    gotoxy(29,20);
    printf("\\       /");
    gotoxy(29,21);
    printf(" \\     /");
    gotoxy(29,22);
    printf("  \\___/");
}


void hate()
{
    gotoxy(15,15);
    printf(" _/__)");
    gotoxy(15,16);
    printf("(8|)_}}- .");
    gotoxy(15,17);
    printf("`\\__)");

}

void hate2()
{
    
    gotoxy(47,8);
    printf("     \\ /");     
    gotoxy(47,9);
    printf("     oVo");     
    gotoxy(47,10);
    printf(" \\___XXX___/");     
    gotoxy(47,11);
    printf("  __XXXXX__"); 
    gotoxy(47,12);
    printf(" /__XXXXX__\\"); 
    gotoxy(47,13);
    printf(" /   XXX   \\"); 
    gotoxy(47,14);
    printf("      V"); 
}

void hate3()
{
    gotoxy(24,6);
    printf(" _/__)");
    gotoxy(24,7);
    printf("(8|)_}}- .");
    gotoxy(24,8);
    printf("`\\__)");

}

void gs1()
{
    water();
    sun();
    bug();
    lv1();
    gameclear();
}

void gs2()
{
    water();
    sun();
    bug();
    lv2();
    gameclear();  
}

void gs3()
{
    water();
    sun();
    bug();
    lv3();
    gameclear();  
}

void gs4()
{
    water();
    sun();
    bug();
    lv4();
    gameclear();  
}

void gs1warring()
{
    gs1();
    hate();
    gameclear();
}

void gs2warring()
{
    gs2();
    hate();
    gameclear();
}

void gs3warring()
{
    gs3();
    hate();
    gameclear();
}

void gs4warring()
{
    gs4();
    hate3();
    gameclear();
}