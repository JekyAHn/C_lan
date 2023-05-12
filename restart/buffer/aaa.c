#include <stdio.h>

int main() {
    char screen[466]; /* 가로길이: 30 세로길이: 15 */

    int i = 0;
    while (i < 465) { /* 화면 버퍼의 크기는 30x15 = 450이므로, 마지막 문자를 출력하지 않습니다. */
        if (i / 31 == 1 && (i+1) % 31 == 2 || (i+1) % 31 == 30) { /* 2번째 행의 첫 번째와 마지막 열에는 공백 문자를 넣습니다. */
            screen[i] = ' ';
        } else {
            screen[i] = '--';
        }
        i++;
        if ((i+1) % 31 == 0) { /* 30번째 문자마다 개행 문자를 추가합니다. */
            screen[i] = '\n';
            i++;
        }
    }
    screen[465] = '\0'; /* 문자열의 끝을 나타내는 NULL 문자를 추가합니다. */

    printf("%s\ndone", screen);
    return 0;
}
