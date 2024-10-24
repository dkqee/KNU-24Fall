#include <stdio.h>

struct Product {
	int ID;
	char name[10];
	int price;
};

void printProduct(struct Product p) {
	printf("상품 ID : %d\n", p.ID);
	printf("상품명 : %s\n", p.name);
	printf("가격 : %d\n\n", p.price);
}

int main() {
	int count = 0;
	struct Product p[5];

	for (int i = 0; i < 5; i++) {
		printf("상품 정보를 입력하세요 (입력 중단은  id에 0 입력)\n");
		printf("상품 ID : ");
		scanf_s("%d", &p[i].ID);
		if (p[i].ID == 0) {
			break;
		}
		printf("상품명 : ");
		scanf_s("%s", &p[i].name, 10);
		printf("가격 : ");
		scanf_s("%d", &p[i].price);
		printf("\n");

		count++;
	}
	printf("\n<<입력된 상품>>\n");
	for (int i = 0; i < count; i++) {
		printProduct(p[i]);
	}

	return 0;
}