#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, result1, result2;

	printf("2���� �Է� : ");
	scanf_s("%lf", &a);
	printf("1���� �Է� : ");
	scanf_s("%lf", &b);
	printf("��� �Է� : ");
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
		printf("����� �����ϴ�.");
	}

	return 0;
}