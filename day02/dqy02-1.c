#include <stdio.h>
int main()
{
	int number1;
	double number2, number3, result = 0;
	printf("���ϴ� ����� �Է��Ͻÿ�.\n");
	printf("1. ���ϱ� 2. ���� 3. ���ϱ� 4. ������\n");
	printf("��� : ");
	scanf_s("%d", &number1);

	printf("���� 1�� �Է��ϼ���:");
	scanf_s("%lf", &number2);

	printf("���� 2�� �Է��ϼ���:");
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
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}

	return 0;
}