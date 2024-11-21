#include <stdio.h>
#include <math.h>

double fx(double x) {
	double value = 0;

	value = sin(x) - log10(1 / x); 

	return value;
}

double integral(double a, double b, int n) {
	double result = 0;
	double range = b -a, interv = 0;
	double x = a;


	for (int j = 0; j <= n; j++) {
		x = a;
		result = 0;
		interv = range / pow(2, j);

		for (int i = 1; i <= pow(2, j); i++) {
			result += (fx(x) * interv);

			x += interv;

		}

		printf("���� : %10d | ���� ��� : %10.6lf\n", (int)pow(2, j), result);
	}


	return result;
}


int main() {
	double a, b;
	int n;

	printf("���۰� �Է� : ");
	scanf_s("%lf", &a);

	printf("���� �Է� : ");
	scanf_s("%lf", &b);


	printf("�ִ� ���� �Է� (2^n) : ");
	scanf_s("%d", &n);

	integral(a, b, n);

	return 0;
}