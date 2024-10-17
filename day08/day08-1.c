#include <stdio.h>

void reverse(char* str) {
	char* end = str;
	char* start = str;

	while (* end != '\0') {
		end++;
	}
	end--;

	while (end > start) {
		char temt = * end;
		* end = * start;
		* start = temt;

		end--;
		start++;
	}
}

int main() {
	char str[100];
	
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, (unsigned)sizeof(str));

	reverse(str);

	printf("�������� ���ڿ� : %s", str);

	return 0;
}