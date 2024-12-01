#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 10000

int solution(int topping[], size_t topping_len) {
    int answer = 0;
    int left_topping[MAX + 1] = { 0 };
    int right_topping[MAX + 1] = { 0 };
    int num_left = 0;
    int num_right = 0;

    for (int i = 0; i < topping_len; i++) {
        int top = topping[i];
        if (right_topping[top] == 0) {
            num_right++;
        }
        right_topping[top]++;
    }

    for (int i = 0; i < topping_len - 1; i++) {

        int top = topping[i];
        left_topping[top]++;
        if (left_topping[top] == 1) {
            num_left++;
        }

        right_topping[top]--;
        if (right_topping[top] == 0) {
            num_right--;
        }

        if (num_left == num_right) {
            answer++;
        }
    }

    return answer;
}