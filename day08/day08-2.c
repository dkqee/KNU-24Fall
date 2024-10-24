#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void fillRandom(int array[SIZE][SIZE]) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = rand() % 20 + 1;
        }
    }
}

void printArray(int array[SIZE][SIZE]) {
    printf("배열 출력 : \n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}

void movePointer(void* array) {
    int x = 0, y = 0;
    int number;

    while (1) {
        number = *((int*)array + x * SIZE + y);
        printf("현재 위치 : (%d, %d), 배열의 값 : %d\n", x, y, number);

        if (y + number >= SIZE) {
            if (x >= SIZE - 1) {
                printf("더 이상 이동할 수 없습니다.\n");
                printf("종료위치 : (%d, %d), 배열의 값 : %d\n", x, y, number);
                break;
            }
            x += 1;
            y = (y + number) % SIZE;
        }
        else {
            y += number;
        }
    }
}

int main() {
    int array[SIZE][SIZE];

    fillRandom(array); // 배열 랜덤 초기화
    printArray(array); // 배열 출력
    movePointer(array); // 포인터를 이용한 이동

    return 0;
}