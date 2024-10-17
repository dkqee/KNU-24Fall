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
	
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str, (unsigned)sizeof(str));

	reverse(str);

	printf("뒤집어진 문자열 : %s", str);

	return 0;
}