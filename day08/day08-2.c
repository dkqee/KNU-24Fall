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
    printf("�迭 ��� : \n");
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
        printf("���� ��ġ : (%d, %d), �迭�� �� : %d\n", x, y, number);

        if (y + number >= SIZE) {
            if (x >= SIZE - 1) {
                printf("�� �̻� �̵��� �� �����ϴ�.\n");
                printf("������ġ : (%d, %d), �迭�� �� : %d\n", x, y, number);
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

    fillRandom(array); // �迭 ���� �ʱ�ȭ
    printArray(array); // �迭 ���
    movePointer(array); // �����͸� �̿��� �̵�

    return 0;
}