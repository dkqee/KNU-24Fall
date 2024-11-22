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
		printf("구간 %10d 적분 결과: %lf\n", (int)pow(2, i), result);
	}
}

int main()
{
	double a, b;
	int n;

	printf("적분할 시작 값을 입력하세요: ");
	scanf_s("%lf", &a);
	printf("적분할 끝 값을 입력하세요: ");
	scanf_s("%lf", &b);
	printf("시행할 최대 구간을 입력하세요(2^n): ");
	scanf_s("%d", &n);

	calculate(a, b, n);

	return 0;
}