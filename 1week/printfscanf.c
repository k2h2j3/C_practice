#include <stdio.h>
int main_printfscanf(void) 
{
	// ������ ������ ���� ����
	//int age = 12;
	//printf("%d\n", age);
	//age = 13;
	//printf("%d\n", age);
	//printf("%d\n", age);

	// �Ǽ��� ������ ���� ����
	//float f = 45.5343f; //45.53
	//printf("%.2f\n", f);
	//double d = 4.428;
	//printf("%.2lf\n", d); //4.43

	//����� ������ ���� ����
	//const int YEAR = 2000;
	//printf("�¾ ���� : %d", YEAR);
	//YEAR = 2001; //������� ���� ���� �ٲܼ��� ����.

	// printf
	// ����
	//int add = 3 + 7;
	// printf("%d\n", add);
	// printf("%d + %d = %d\n", 33, 77, 33 + 77);

	// scnaf
	// Ű���� �Է��� �޾Ƽ� ����
	//int input;
	//printf("���� �Է�: ");
	//scanf_s("%d", &input);
	//printf("�Է°�: %d\n", input);

	/*int one, two, three;
	printf("���� 3�� �Է�");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° ��: %d\n", one);
	printf("�� ��° ��: %d\n", two);
	printf("�� ��° ��: %d\n", three);*/

	// ����, ���ڿ�
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//���ڿ� ũ�� ������ ����
	//scanf_s("%s", str, sizeof(str)); 
	//printf("%s\n", str);

	//���� ���� ���α׷�

	char name[256];
	printf("�̸� :");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���� :");
	scanf_s("%d", &age);

	float weight;
	printf("������ :");
	scanf_s("%f", &weight);

	double height;
	printf("Ű :");
	scanf_s("%lf", &height);

	char what[256];
	printf("���˸�: ");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n -- ������ ���� -- \n\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %.2f\n", weight);
	printf("Ű : %.2lf\n", height);
	printf("���˸� : %s\n", what);



	return 0;
}