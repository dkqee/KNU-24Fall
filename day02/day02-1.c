#include <stdio.h>
int main()
{
	int number1;
	double number2, number3, result = 0;
	printf("원하는 기능을 입력하시오.\n");
	printf("1. 더하기 2. 빼기 3. 곱하기 4. 나누기\n");
	printf("기능 : ");
	scanf_s("%d", &number1);

	printf("숫자 1을 입력하세요:");
	scanf_s("%lf", &number2);

	printf("숫자 2를 입력하세요:");
	scanf_s("%lf", &number3);

	if (number1 == 1)
	{
		result = number2 + number3;
		printf("%lf + %lf = %lf", number2, number3, result);
	}
	else if (number1 == 2)
	{
		result = number2 - number3;
		printf("%lf - %lf = %lf", number2, number3, result);
	}
	else if (number1 == 3)
	{
		result = number2 * number3;
		printf("%lf * %lf = %lf", number2, number3, result);
	}
	else if (number1 == 4)
	{
		result = number2 / number3;
		printf("%lf / %lf = %lf", number2, number3, result);
	}
	else
	{
		printf("잘못 입력하셨습니다.\n");
	}

	return 0;
}