#include <stdio.h>
#include <time.h> //�ð� ��¥�� ���� �Լ� ���̺귯��
int main(void) 
{

	/*int age;
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);
	
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�.");
	}
	else if(age >= 20)
	{
		printf("���л� �Ǵ� �Ϲ����Դϴ�.");
	}
	else
	{
		printf("�Ʊ��Դϴ�.");
	}*/

	//break���� ���ǿ� �������� ��, ���������� ����
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6) {
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d �� �л��� ������ǥ �غ� �ϼ��� \n", i);
	}*/


	//continue���� ���ǿ� �������� ��, �� ���Ŀ� ������ ���������ʰ� ���� �ݺ������� �Ѿ
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
		}
	}*/

	// switch�� Ȱ���� ���� ���� �� ���α׷�
	
	//srand(time(NULL)); 
	//int i = rand() % 3; // 0 ~ 2 ��ȯ

	//switch (i)
	//{
	//case 0:
	//	printf("����\n"); 
	//	break;

	//case 1:
	//	printf("����\n");
	//	break;

	//case 2:
	//	printf("��\n");
	//	break;

	//dafault:
	//	printf("����!\n");
	//	break;
	//}
	
	
	//���� ���߱� ������Ʈ

	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ���� ����
	printf("����: %d\n", num);
	int answer = 0; //����
	int chance = 5; //��ȸ
	while (chance > 0)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� 1 ~ 100\n");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");

		}
		else if(answer < num)
		{
			printf("UP\n\n");
		}
		else if (answer = num)
		{
			printf("����!\n\n");
			break;
		}
		else
		{
			printf("1 ~ 100������ ���ڸ� �Է����ּ���\n");
			break;
		}

		if (chance == 0)
		{
			printf("���� ��ȸ�� ��� �����߽��ϴ�.\n");
			break;
		}
	}








	return 0;
}