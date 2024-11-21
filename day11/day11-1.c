#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, result1, result2;

	printf("2차항 입력 : ");
	scanf_s("%lf", &a);
	printf("1차항 입력 : ");
	scanf_s("%lf", &b);
	printf("상수 입력 : ");
	scanf_s("%lf", &c);

	result1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	result2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	double D = b * b - 4 * a * c;

	if (D > 0)
	{
		printf("%.2lf, %.2lf", result1, result2);
	}
	else if (D == 0)
	{
		printf("%.2lf", result1);
	}
	else if (D < 0)
	{
		printf("허근을 가집니다.");
	}

	return 0;
}