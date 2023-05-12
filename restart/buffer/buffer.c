#include <stdio.h>

int main() {
    int x, y;

    for (y = 0; y < 15; y++) {
        for (x = 0; x < 30; x++) {
            if (y == 0 || y == 14) {
                printf("-");
            } else if (x == 0 || x == 29) {
                printf("|");
            } else if (y == 1 && x == 1) {
                printf("O");
            } else if (y == 1 && x == 28) {
                printf("O");
            } else if (y == 2 && x == 1) {
                printf("|");
            } else if (y == 3 && x == 1) {
                printf("|");
            } else if (y == 4 && x == 1) {
                printf("|");
            } else if (y == 5 && x == 1) {
                printf("|");
            } else if (y == 6 && x == 1) {
                printf("|");
            } else if (y == 7 && x == 1) {
                printf("|");
            } else if (y == 8 && x == 1) {
                printf("|");
            } else if (y == 9 && x == 1) {
                printf("|");
            } else if (y == 10 && x == 1) {
                printf("|");
            } else if (y == 11 && x == 1) {
                printf("|");
            } else if (y == 12 && x == 1) {
                printf("|");
            } else if (y == 13 && x == 1) {
                printf("|");
            } else if (y == 2 && x == 28) {
                printf("|");
            } else if (y == 3 && x == 28) {
                printf("|");
            } else if (y == 4 && x == 28) {
                printf("|");
            } else if (y == 5 && x == 28) {
                printf("|");
            } else if (y == 6 && x == 28) {
                printf("|");
            } else if (y == 7 && x == 28) {
                printf("|");
            } else if (y == 8 && x == 28) {
                printf("|");
            } else if (y == 9 && x == 28) {
                printf("|");
            } else if (y == 10 && x == 28) {
                printf("|");
            } else if (y == 11 && x == 28) {
                printf("|");
            } else if (y == 12 && x == 28) {
                printf("|");
            } else if (y == 13 && x == 28) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("done");
    return 0;
}
