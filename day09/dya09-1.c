#include <stdio.h>

struct Vector {
	int x;
	int y;
	int z;
};

void plus(struct Vector v1, struct Vector v2) {
	struct Vector v3;

	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	v3.z = v1.z + v2.z;

	printf("������ ���� : (%d, %d, %d)\n", v3.x, v3.y, v3.z);
}

void minus(struct Vector v1, struct Vector v2) {
	struct Vector v3;

	v3.x = v1.x - v2.x;
	v3.y = v1.y - v2.y;
	v3.z = v1.z - v2.z;

	printf("������ ���� : (%d, %d, %d)\n", v3.x, v3.y, v3.z);
}

void inner(struct Vector v1, struct Vector v2) {
	int result;

	result = (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);

	printf("������ ������ : %d\n", result);
}

void cross(struct Vector v1, struct Vector v2) {
	struct Vector v3;

	v3.x = (v1.y * v2.z) - (v1.z * v2.y);
	v3.y = (v1.z * v2.x) - (v1.x * v2.z);
	v3.z = (v1.x * v2.y) - (v1.y * v2.x);

	printf("������ ������ : (%d, %d, %d)\n", v3.x, v3.y, v3.z);
}

int main() {
	struct Vector v1;
	struct Vector v2;

	int num = 0;
	
	printf("ù��° ����(x, y, z) : ");
	scanf_s("%d, %d, %d", &v1.x, &v1.y, &v1.z);
	printf("�ι�° ����(x, y, z) : ");
	scanf_s("%d, %d, %d", &v2.x, &v2.y, &v2.z);

	while (1) {
		printf("1. ������ ��\n2. ������ ��\n3. ������ ����\n4. ������ ����\n5. ����\n");
		printf("��� �Է� : ");
		scanf_s("%d", &num);

		switch (num) {
		case 1:
			plus(v1, v2);
			break;
		case 2:
			minus(v1, v2);
			break;
		case 3:
			inner(v1, v2);
			break;
		case 4:
			cross(v1, v2);
			break;
		case 5:
			return 0;
		}
	}


	return 0;
}