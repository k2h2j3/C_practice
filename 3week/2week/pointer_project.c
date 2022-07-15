#include <stdio.h>
#include <time.h>

int level; //���� ����
int arrayFish[6]; // 6���� ����
int* cursor; //� ���׿��� �� Ŀ��
void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main_pointer_project(void)
{
	long startTime = 0; //���� ���� �ð�
	long totalElapsedTime = 0; //�� ��� �ð�
	long preElapsedTime = 0; //���� ��� �ð�(�ֱٿ� ���� �� �ð� ����)
	
	int num; // ��� ���׿� ���� �� ������, ����� �Է�
	initData();
	printFishes();

	cursor = arrayFish; //cursor[0], cursor[1]...

	//���� ���� �κ�
	startTime = clock(); //���� �ð��� millisecond(1000���� 1��) ������ ��ȯ
	while (1)
	{
		printFishes();
		printf("�� �� ���׿� ���� �ֽðھ��?\n");
		scanf_s("%d", &num);

		//�Է� �� üũ
		if (num < 1 || num > 6)
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		//�� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; //õ������ ������(���� millisec)
		printf("�� ��� �ð�: %ld �� \n", totalElapsedTime);

		//���� �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
		preElapsedTime = totalElapsedTime - preElapsedTime;
		printf("�ֱ� ����ð�: %ld�� \n", preElapsedTime);

		//������ ���� ����
		decreaseWater(preElapsedTime);

		//����ڰ� �Է��� ���׿� ���� �ֱ�
		//������ ���� 0�̸�? ���� ���� �ʴ´�.
		if (cursor[num - 1] <= 0)
		{
			printf("%d�� ������ �̹� �׾����ϴ�. ���� �� �� �����ϴ�.\n", &num);

		}
		//������ ���� 0�� �ƴϸ�? ���� �� �� �ִ�. => 100�� ���� �ʴ��� üũ
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d �� ���׿� ���� �ݴϴ�\n\n", num);
			cursor[num - 1] += 1;
		}

		//������ �� ���� Ȯ��(������ 20�ʸ��� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++; //level ����
			printf("������!");

			//���� ����
			if (level == 5)
			{
				printf("\n\n�ְ� ���� �޼�!, ������ �����մϴ�\n\n");
				exit(0);
			}
		}

		//��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			//����� ��� ���
			printf("��� ����Ⱑ �׾����ϴ� �Ф�\n");
			exit(0);

		}
		else  //�ּ� �� ���� �̻� ����
		{
			printf("����Ⱑ ���� ����־��!\n");
		}
		preElapsedTime = totalElapsedTime;  //
	

	}

	return 0;
}

void initData()
{
	level = 1; //���� ����(1-5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; //������ �� ����(0-100)
	}

}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]); //��ĭ+4ĭ+��ĭ = 6ĭ
	}
	printf("\n\n"); //���� ����
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); //3 => ���̵� ������
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; //��, true
	}
	return 0; //false
}