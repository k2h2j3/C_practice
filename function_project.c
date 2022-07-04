#include <stdio.h>
#include <time.h>

//���̵� �Լ�
int getRandomNumber(int level);

//���� ���� �Լ�
int showQuestion(int level, int num1, int num2);

//���� �Լ�
void success();

//���� �Լ�
void fail();

int main(void)
{
	//���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ����(����)
	//������ ���, Ʋ���� ����

	srand(time(NULL)); //����
	int count = 0;
	for (int i = 1; i <= 5; i++)
	{
		// x * y = ?
		int num1 = getRandomNumber(i); 
		int num2 = getRandomNumber(i);

		//printf("%d X %d =?", num1, num2)
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�.");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			//����
			success();
			count++;

		}
		else
		{

			//����
			fail();
		}
	}

	printf("\n\n ����� ��й�ȣ 5�� �߿��� %d���� ������ϴ�", count);

	return 0;
}

int getRandomNumber(int level)
{
	//level �� �ܾ 7���� �����ϵ��� ���̵� ����
	return rand() % (level * 7) + 1;
}

int showQuestion(int level, int num1, int num2)
{

	printf("\n\n\n########## %d ��° ��й�ȣ #########\n", level);
	printf("\n\t%d X %d��?\n\n", num1, num2);
	printf("####################################\n");
	printf("\n��й�ȣ�� �Է��ϼ��� (���� : -1 >>");


}

void success()
{
	printf("����!");
	
}

void fail()
{
	printf("����!");

}