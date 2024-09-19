#include <stdio.h>
int pnum(int a) {
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
		else{
			return 1;
		}
	}
}

int main() {
	int number;
	int result;
	printf("소수인지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &number);

	result = pnum(number);

	if (number == 2) {
		printf("소수입니다");
	}
	else {
		if (result == 1) {
			printf("소수입니다");
		}
		else if (result == 0) {
			printf("소수가 아닙니다");
		}
	}
	return 0;
}