#include"textscreen.h"
#include "gamesorce.h"
#include <windows.h>
#include <stdio.h>

void titleclear()
{
    int w;
    int x = 10;
    int y = 0;
    int a = 0;

    gotoxy(x,y);
    printf("┏");
    for(w = 0 ; w <61; w++)
        printf("━");
    printf("┓");

    for(w=1;w<24;w++)
    {
        y++;
        gotoxy(x,y);
        printf("┃");
        gotoxy(72,y);
        printf("┃");
       
    }   

    gotoxy(x,24);
    printf("┗");
    for(w = 0 ; w <61; w++)
        printf("━");
    printf("┛");
}

void title()
{
    textcolor(10);
    gotoxy(16,3);
    printf("######     ###    ##   ##  #####     #####   ##   ##\n\t\t"
           "##   ##   ## ##   ###  ##   ## ##   ##   ##  ### ###\n\t\t"
           "##   ##  ##   ##  #### ##   ##  ##  ##   ##  #######\n\t\t"
           "######   #######  ## ####   ##  ##  ##   ##  ## # ##\n\t\t"
           "#####    ##   ##  ##  ###   ##  ##  ##   ##  ##   ##\n\t\t"
           "##  ##   ##   ##  ##   ##   ## ##   ##   ##  ##   ##\n\t\t"
           "##   ##  ##   ##  ##   ##  #####     #####   ##   ##"
            );
    textcolor(4);
    gotoxy(14,10);
    printf(" .______    __           ___      .__   __. .__________.\n\t\t"
           "|   _  \\  |  |         /   \\     |  \\ |  | |          |\n\t\t"
           "|  |_)  | |  |        /  ^  \\    |   \\|  | `---|  |---`\n\t\t"
           "|   ___/  |  |       /  /_\\  \\   |  . `  |     |  |\n\t\t"
           "|  |      |  `----. /  _____  \\  |  |\\   |     |  |\n\t\t"
           "|  |      |  `----. /  _____  \\  |  |\\   |     |  |\n\t\t"
           "| _|      |_______|/__/     \\__\\ |__| \\__|     |__|"
           );
    gotoxy(35,18);
    printf("1 . 게임 시작");
    gotoxy(35,20);
    printf("2 . 게임 설명");
    gotoxy(35,22);
    printf("3 . 게임 종료");
    textcolor(15);
    gotoxy(0,25);
}
void end()
{
    gotoxy(21,3);
    printf("d888888P dP                         dP");
    gotoxy(21,4);
    printf("   88    88                         88");
    gotoxy(21,5);
    printf("   88    88d888b. .d8888b. 88d888b. 88  .dP");
    gotoxy(21,6);
    printf("   88    88'  `88 88'  `88 88'  `88 88888");
    gotoxy(21,7);
    printf("   88    88    88 88.  .88 88    88 88  `8b.");
    gotoxy(21,8);
    printf("   dP    dP    dP `88888P8 dP    dP dP   `YP");
    gotoxy(21,9);
    printf("oooooooooooooooooooooooooooooooooooooooooooo");
    gotoxy(27,11);
    printf("dP    dP                  dP dP");
    gotoxy(27,12);
    printf("Y8.  .8P                  88 88 ");
    gotoxy(27,13);
    printf("Y8aa8P  .d8888b. dP    dP 88 88");
    gotoxy(27,14);
    printf("  88    88'  `88 88    88 dP dP ");
    gotoxy(27,15);
    printf("  88    88.  .88 88.  .88       ");
    gotoxy(27,16);
    printf("  dP    `88888P' `88888P' oo oo ");
    gotoxy(27,17);
    printf("oooooooooooooooooooooooooooooooo");

    gotoxy(11,11);
    textcolor(12);
    printf("    /\\^/`\\");
    gotoxy(11,12);
    printf("   | \\/   |");
    gotoxy(11,13);
    printf("   | |     |");
    gotoxy(11,14);
    printf("   \\ \\    /");
    gotoxy(11,15);
    printf("    '\\\\//'");
    gotoxy(11,16);
    textcolor(10);
    printf("       ||");
    gotoxy(11,17);
    printf("       ||  ,");
    gotoxy(11,18);
    printf("   |\\  ||  |\\");
    gotoxy(11,19);
    printf("   | | ||  | |");
    gotoxy(11,20);
    printf("   | | || / /");
    gotoxy(11,21);
    printf("    \\ \\||/ /");
    gotoxy(11,22);
    printf("    `\\\\//`");
    gotoxy(11,23);
    printf("    ^^^^^^^^");

    gotoxy(58,11);
    textcolor(14);
    printf("    /\\^/`\\");
    gotoxy(58,12);
    printf("   | \\/   |");
    gotoxy(58,13);
    printf("   | |     |");
    gotoxy(58,14);
    printf("   \\ \\    /");
    gotoxy(58,15);
    printf("    '\\\\//'");
    gotoxy(58,16);
    textcolor(10);
    printf("       ||");
    gotoxy(58,17);
    printf("       ||  ,");
    gotoxy(58,18);
    printf("   |\\  ||  |\\");
    gotoxy(58,19);
    printf("   | | ||  | |");
    gotoxy(58,20);
    printf("   | | || / /");
    gotoxy(58,21);
    printf("    \\ \\||/ /");
    gotoxy(58,22);
    printf("    `\\\\//`");
    gotoxy(58,23);
    printf("    ^^^^^^^^");
    gotoxy(0,25);
    textcolor(15);

}
void guide()
{   
    gotoxy(16,3);
    printf("물과 햇살을 주며 당신의 식물을 정성껏 키워보세요!");
    gotoxy(19,5);
    printf("당신의 정성에 따라 식물의 성장이 달라집니다.");
    gotoxy(21,7);
    printf("1 : 물주기 2 : 햇살비추기 3 : 벌레퇴치");
    Sleep(1000);
    textcolor(10);
    gotoxy(13,13);
    printf("           &&& &&  & &&");
    gotoxy(13,14);
    printf("      &★ &\\/&\\|& ()|/ ★, &&");
    gotoxy(13,15);
    printf("     &\\/(/&/★||/& /_/)_&/_&");
    gotoxy(13,16);
    printf("   &_\\_★★_\\ |& |★&/&__%%_/_★ ★&");
    gotoxy(13,17);
    printf("&&   ★★ & &| ★| /& & %% ()★ /★&");
    gotoxy(13,18);
    printf("  ()&_---()&\\&\\|&&-&★--%%---()~");
    textcolor(15);
    gotoxy(13,19);
    printf("        &&     \\|||");
    gotoxy(13,20);
    printf("                 |||");
    gotoxy(13,21);
    printf("                 |||");
    gotoxy(13,22);
    printf("                 |||");
    gotoxy(13,23);
    printf("            , -=-~  .-^- _");




    gotoxy(45,11);
    textcolor(14);
    printf("    /\\^/`\\");
    gotoxy(45,12);
    printf("   | \\/   |");
    gotoxy(45,13);
    printf("   | |     |");
    gotoxy(45,14);
    printf("   \\ \\    /");
    gotoxy(45,15);
    printf("    '\\\\//'");
    gotoxy(45,16);
    textcolor(10);
    printf("       ||");
    gotoxy(45,17);
    printf("       ||  ,");
    gotoxy(45,18);
    printf("   |\\  ||  |\\");
    gotoxy(45,19);
    printf("   | | ||  | |");
    gotoxy(45,20);
    printf("   | | || / /");
    gotoxy(45,21);
    printf("    \\ \\||/ /");
    gotoxy(45,22);
    printf("    `\\\\//`");
    gotoxy(45,23);
    printf("    ^^^^^^^^");
    gotoxy(0,25);
    textcolor(15);
}
