#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��й�ȣ�� �Է¹޾Ƽ�
//�´°��? ��� �ϱ⸦ �о�ͼ� �����ְ�, ������ �� �ְ� �ϴ� ���
//Ʋ�����? ���޽��� ǥ���ϰ� ����

#define MAX 10000

int main(void) 
{
	char line[MAX]; //���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; //�ϱ��忡 �Է��� ����
	char password[20]; //��й�ȣ �Է�
	char c; // ��й�ȣ �Է� �� �� Ű�� Ȯ�ο�

	printf("����ϱ⿡ ���Ű� ȯ���մϴ�\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	int i = 0; 
	while (1)
	{
		c = getch(); //Ű�Է½� �ٷιٷ� ������ �ϴ� ���
		if (c == 13) //Enter -> ��й�ȣ �Է� ����
		{
			password[i] = '\0'; //
			break;
		}
		else //��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}
	
	printf("\n\n === ��й�ȣ Ȯ�� ��... ===\n\n");
	if (strcmp(password , "1234") == 0) //��й�ȣ ��ġ
	{
		printf("��й�ȣ Ȯ�� �Ϸ�\n\n");
		char* fileName = "C:\\Users\\k2h2j3\\Documents\\diary.txt";
		FILE* file = fopen(fileName, "a+b"); //������ ������ ����, ������ ������ append�� �Ѵ�(�ڿ� ������ �߰�)
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		
		printf("\n\n ������ ��� �ۼ��ϼ���! �����Ͻ÷��� EXIT�Է�\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // �� ��(\n)�� ������������ �о����
			getchar(); //Enter �Է� (\n) => Flush ó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); //Enter�� ������ ����ó���Ͽ��⿡ ���Ƿ��߰�

		}
		fclose(file);
	}
	else // ��й�ȣ�� Ʋ�� ���
	{
		printf("��й�ȣ�� Ʋ�Ƚ��ϴ� \n\n");
		printf("���α׷��� �����մϴ�\n");
	}
	return 0;
}