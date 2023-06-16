#include <windows.h>
#include <stdlib.h>





void textcolor(int colorNum) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

void gotoxy(int x, int y)
{
    COORD pos = {x,y}; //x와 y의 좌표룰 지정해 대입시키기 위해 사용
     //position의 약자로 pos.x는 x축을 담당
     //position의 약자로 pos.y는 y축을 담당
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    //함수를 호출하여 커서의 위치를 설정한다. 위치설정은 GetStdHandle의 몫
    // 위치설정을 하는 핸들의 반환값은 STD_OUTPUT_HANDLE , pos는 이 함수에 직접적으로 사용될 변수 
}

void cls()
{
    system("cls");
}

int innum1() {
    return (rand() % 3)+1;  // 1부터 3까지의 난수 생성
}
int innum2() {
    return rand() % 6;  // 0부터 5까지의 난수 생성
}