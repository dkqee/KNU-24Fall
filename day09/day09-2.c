#include <stdio.h>

struct Product {
	int ID;
	char name[10];
	int price;
};

void printProduct(struct Product p) {
	printf("��ǰ ID : %d\n", p.ID);
	printf("��ǰ�� : %s\n", p.name);
	printf("���� : %d\n\n", p.price);
}

int main() {
	int count = 0;
	struct Product p[5];

	for (int i = 0; i < 5; i++) {
		printf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ���  id�� 0 �Է�)\n");
		printf("��ǰ ID : ");
		scanf_s("%d", &p[i].ID);
		if (p[i].ID == 0) {
			break;
		}
		printf("��ǰ�� : ");
		scanf_s("%s", &p[i].name, 10);
		printf("���� : ");
		scanf_s("%d", &p[i].price);
		printf("\n");

		count++;
	}
	printf("\n<<�Էµ� ��ǰ>>\n");
	for (int i = 0; i < count; i++) {
		printProduct(p[i]);
	}

	return 0;
}