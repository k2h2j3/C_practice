#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main(void)
{
	char * name = "��������";
	int year = 2017;
	int price = 50;
	char * company = "����ȸ��";

	//����ü ���

	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";
	
	// ����ü ���
	printf("����ü ���\n");
	printf("���Ӹ�: %s\n", gameInfo1.name);
	printf("�߸ų⵵: %d\n", gameInfo1.year);
	printf("����: %d\n", gameInfo1.price);
	printf("���ۻ�: %s\n\n\n", gameInfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = {"�ʵ� ����", 2018, 100, "�ʵ�ȸ��" };

	//�迭 ����ü ���
	printf("�迭 ����ü ���\n");
	printf("���Ӹ�: %s\n", gameInfo2.name);
	printf("�߸ų⵵: %d\n", gameInfo2.year);
	printf("����: %d\n", gameInfo2.price);
	printf("���ۻ�: %s\n", gameInfo2.company);


	//����ü �迭
	struct GameInfo gameArray[2] = {
		{"���� ����", 2020, 120, "�ʵ�ȸ��" },
		{"�ʵ� ����", 2021, 130, "�ʵ�ȸ��" }
	};

	//����ü ������

	struct GameInfo * gamePtr; 
	gamePtr = &gameInfo1;
	printf("\n\n����ü ������ ���\n");
	printf("���Ӹ�: %s\n",  (*gamePtr).name); 
	printf("�߸ų⵵: %d\n", (*gamePtr).year);
	printf("����: %d\n", gamePtr->price); //�̷� ����� ����
	printf("���ۻ�: %s\n", gamePtr->company);


	return 0;
}