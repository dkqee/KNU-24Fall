#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void)
{
	double x = 0;
	double y = 0;
	double pi = 0;

	int a = 0;

	int count = 0, circle = 0;

	srand(time(NULL));

	while (count < 1000000000)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;

		pi = (double)4 * circle / count;

		count++;

		if (sqrt(x * x + y * y <= 1))
		{
			circle++;
		}
		if (count % 10000000 == 0)
		{
			a++;
			printf("%d%% 진행중... pi = %lf", count / 10000000, pi);
			for (int k = 0; k < a / 5; k++)
			{
				printf("■");
			}
			for (int k = 0; k < 20- (a / 5); k++)
			{
				printf("□");
			}
			printf("\n");
		}
	}
	printf("최종 결과 pi = %lf", pi);

	return 0;
}
