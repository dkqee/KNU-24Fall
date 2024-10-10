#include<stdio.h>

int main()
{
	int  score;

	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &score);

	for (int i = 0; i < score; i++)
	{
		for (int a = 1; a < score - i; a++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i*2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}