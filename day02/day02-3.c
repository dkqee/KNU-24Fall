#include <stdio.h>
int main(void)
{
	for (int i = 0; i < 100; i++)
		if (i % 7 == 0)
		{
			printf("%d ", i);
		}
		else if (i % 3 == 0) {
			if (i % 4 == 0) {
				printf("%d ", i);
			}
		}
	return 0;
}