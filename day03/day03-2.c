#include <stdio.h>

int main() {
	int number;
	int res;

	printf("계산할 팩토리얼 값 입력 : ");
	scanf_s("%d", &number);

	res = acc(number);

	printf("%d! = %d", number, res);

	return 0;
}
int acc(int num) {
	int result;
	if (num == 0 || num == 1) {
		result = 1;
		return 1;
	}
	result = num * acc(num - 1);
	return result;
}