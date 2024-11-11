#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX 50

enum rank 
{
    first = 1,
    second = 2,
    third = 3
};

struct Customer {
    char* customerName;  
    enum rank customerRank;  
    int order_amount; 
    int point;
    struct Customer* prev;  
    struct Customer* next;  
};

struct Customer* head = NULL;  

struct Customer* create_customer(char* name, enum rank rank, int order_amount, int point) {
    struct Customer* new_customer = (struct Customer*)malloc(sizeof(struct Customer));
    new_customer->customerName = (char*)malloc(strlen(name) + 1);  
    strcpy_s(new_customer->customerName, strlen(name) + 1, name);  
    new_customer->customerRank = rank;
    new_customer->order_amount = order_amount;
    new_customer->point = point;
    new_customer->prev = NULL;
    new_customer->next = NULL;

    return new_customer;
}

void insert_customer_priority(struct Customer* new_customer) {
    if (head == NULL) {
        head = new_customer;  
        return;
    }

    struct Customer* cur = head;

    while (cur != NULL) {
        if ((new_customer->customerRank < cur->customerRank) ||
            (new_customer->customerRank == cur->customerRank && new_customer->order_amount > cur->order_amount) ||
            (new_customer->customerRank == cur->customerRank && new_customer->order_amount == cur->order_amount && new_customer->point > cur->point)) {

            if (cur == head) {
                new_customer->next = head;
                head->prev = new_customer;
                head = new_customer;  
            }
            else {
                new_customer->next = cur;
                new_customer->prev = cur->prev;
                cur->prev->next = new_customer;
                cur->prev = new_customer;
            }
            return;
        }
        cur = cur->next;
    }

    struct Customer* last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_customer;
    new_customer->prev = last;
}

int delete_customer(char* name) {
    struct Customer* cur = head;

    while (cur != NULL) {
        if (strcmp(cur->customerName, name) == 0) {
            if (cur->prev != NULL) {
                cur->prev->next = cur->next;
            }
            else {
                head = cur->next;  
            }
            if (cur->next != NULL) {
                cur->next->prev = cur->prev;
            }
            free(cur->customerName);  
            free(cur);  
            return 1;  
        }
        cur = cur->next;
    }
    return 0;  
}

int update_customer(char* name, int new_order_amount, int new_point) {
    struct Customer* cur = head;

    while (cur != NULL) {
        if (strcmp(cur->customerName, name) == 0) {
            cur->order_amount = new_order_amount;
            cur->point = new_point;
            return 1;  
        }
        cur = cur->next;
    }
    return 0;  
}

void print_customers() {
    struct Customer* cur = head;
    printf("------------------- �� ����Ʈ -------------------\n");
    while (cur != NULL) {
        printf("�̸�: %s, ���: %d, �ֹ���: %d, ����Ʈ: %d\n",
            cur->customerName, cur->customerRank, cur->order_amount, cur->point);
        cur = cur->next;
    }
    printf("---------------------------------------------------\n");
}

int main() {
    int choice;
    char name[NAME_MAX];
    int order_amount, point;
    enum rank customerRank;

    while (1) {
        printf("1. �� �߰�\n");
        printf("2. �� ����\n");
        printf("3. �� ����\n");
        printf("4. ��ü ����Ʈ ���\n");
        printf("5. ����\n");
        printf("����: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            printf("�� �̸�: ");
            scanf_s("%s", name, NAME_MAX);  
            printf("�� ��� : ");
            scanf_s("%d", (int*)&customerRank);
            printf("�ֹ���: ");
            scanf_s("%d", &order_amount);
            printf("����Ʈ: ");
            scanf_s("%d", &point);
            insert_customer_priority(create_customer(name, customerRank, order_amount, point));
            break;

        case 2:
            printf("������ �� �̸�: ");
            scanf_s("%s", name, NAME_MAX);
            if (delete_customer(name)) {
                printf("���� �����Ǿ����ϴ�.\n");
            }
            else {
                printf("���� ã�� �� �����ϴ�.\n");
            }
            break;

        case 3:
            printf("������ �� �̸�: ");
            scanf_s("%s", name, NAME_MAX);
            printf("���ο� �ֹ���: ");
            scanf_s("%d", &order_amount);
            printf("���ο� ����Ʈ: ");
            scanf_s("%d", &point);
            if (update_customer(name, order_amount, point)) {
                printf("�� ������ �����Ǿ����ϴ�.\n");
            }
            else {
                printf("���� ã�� �� �����ϴ�.\n");
            }
            break;

        case 4:
            print_customers();
            break;

        case 5:
            printf("���α׷� ����\n");
            return 0;

        default:
            printf("�߸��� �����Դϴ�. �ٽ� �õ��ϼ���.\n");
        }
    }

    return 0;
}

