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
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &number);

	result = pnum(number);

	if (number == 2) {
		printf("�Ҽ��Դϴ�");
	}
	else {
		if (result == 1) {
			printf("�Ҽ��Դϴ�");
		}
		else if (result == 0) {
			printf("�Ҽ��� �ƴմϴ�");
		}
	}
	return 0;
}