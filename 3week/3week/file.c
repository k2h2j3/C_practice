#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MAX 10000 //MAX�� 10000���� ġȯ

int main_file(void)
{

	//���� �����
	//���Ͽ� � �����͸� ����
	//���Ͽ� ����� �����͸� �ҷ�����

	char line[MAX]; //char line [10000]

	//���� ����
	//FILE* file = fopen("C:\\Users\\k2h2j3\\Documents\\test.txt", "wb"); // r : �б�, w : ����, a: append, t: text, b: binary
	//if (file == NULL)
	//{
	//	printf("���� ���� ����\n");
	//	return -1;
	//}

	//fputs("fputs�� �̿��ؼ� ���� �����\n", file); //���Ͽ� ����
	//fputs("�� �������� Ȯ�����ּ���\n", file);

	//fclose(file); //���� ����


	//���� �б�
	//FILE* file = fopen("C:\\Users\\k2h2j3\\Documents\\test.txt", "rb");
	//if (file == NULL)
	//{
	//	printf("���� ���� ����\n");
	//	return -1;
	//}

	////���� �ҷ�����

	//while (fgets(line, MAX, file) != NULL)
	//{
	//	printf("%s", line);
	//}

	//�� �ٸ� ���� ���� fprintf, fscanf
	int num[6] = { 0,0,0,0,0,0 }; //��÷��ȣ
	int bonus = 0; //���ʽ� ��ȣ
	char str[MAX];
	char str2[MAX];

	//���Ͽ� ����
	//FILE* file = fopen("C:\\Users\\k2h2j3\\Documents\\test2.txt", "wb");

	//if (file == NULL)
	//	{
	//		printf("���� ���� ����\n");
	//		return -1;
	//	}

	//// �ζ� ��÷ ��ȣ ����
	//fprintf(file, "%s %d %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "���ʽ� ��ȣ", 7);

	//fclose(file);

	//�����б�
		FILE * file = fopen("C:\\Users\\k2h2j3\\Documents\\test2.txt", "rb");

	if (file == NULL)
		{
			printf("���� ���� ����\n");
			return -1;
		}
	//ù ��° ��
	fscanf(file, "%s %d %d %d %d %d %d \n", str,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);

	printf("%s %d %d %d %d %d %d %d\n", str,
		num[0], num[1], num[2], num[3], num[4], num[5]);

	//�� ��° ��
	fscanf(file, "%s %d\n", str2, &bonus);

	printf("%s %d \n", str2, bonus);
	

	return 0;
}