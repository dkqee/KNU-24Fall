#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int* arr;
	char** name;
	int* score;
	
	printf("학생 수 입력 : ");
	scanf_s("%d", &num);

	arr = (int*)malloc(num * sizeof(int));
	score = (int*)malloc(num * sizeof(int));
	name = (char**)malloc(num * sizeof(char*));

	for (int i = 0; i < num; i++) {
		name[i] = (char*)malloc(100 * sizeof(char));
	}

	for (int i = 0; i < num; i++) {
		printf("학번 : ");
		scanf_s("%d", &arr[i]);

		printf("이름 : ");
		scanf_s("%s", name[i], 100);

		printf("점수 : ");
		scanf_s("%d", &score[i]);
	}
	for (int i = 0; i < num; i++) {
		printf("%d %s %d\n", arr[i], name[i], score[i]);
	}
	free(arr);
	free(score);

	for (int i = 0; i < num; i++) {
		free(name[i]);
	}
	free(name);

	return 0;
}