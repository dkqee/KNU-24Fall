#include <stdio.h>
#include <math.h>

double fx(double x) {
	return sin(x) - log10(1 / x);
}

double calculate(double a, double b, int n)
{
	double range;
	double x, result;

	for (int i = 0; i <= n; i++)
	{
		x = a;
		result = 0;
		range = (b - a) / pow(2, i);

		for (int j = 1; j <= pow(2, i); j++)
		{
			x += range;
			result += fx(x) * range;
		}
		printf("���� %10d ���� ���: %lf\n", (int)pow(2, i), result);
	}
}

int main()
{
	double a, b;
	int n;

	printf("������ ���� ���� �Է��ϼ���: ");
	scanf_s("%lf", &a);
	printf("������ �� ���� �Է��ϼ���: ");
	scanf_s("%lf", &b);
	printf("������ �ִ� ������ �Է��ϼ���(2^n): ");
	scanf_s("%d", &n);

	calculate(a, b, n);

	return 0;
}