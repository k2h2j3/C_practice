#include <stdio.h>

int main_array(void)
{
	
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.", subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.", subway_3);*/
	
	//�迭 ����
	int subway_array[3];

	//�ε��� �� �ֱ�
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", i + 1, subway_array[i]);

	}

	//�� ���� ���
	//���� �ʱ�ȭ�� �ݵ�� �ؾ���(���� ���� ������ ����)
	int arr[10] = {1, 2};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",  arr[i]);
	}

	int arr_i[] = { 1,2 }; //�迭 ũ��� 2�� ��.
	float arr_f[5] = { 1.0f, 2.0f, 3.0f }; //float�� ����

	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

	//���� vs ���ڿ�

	char c = 'A';
	//���ڿ� ������ ���� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ����
	char str[6] = "coding"; // [c][o][d][i][n][g]
	char str_2[7] = "coding";
	printf("% s\n", str);
	printf("% s\n", str_2);

	//�迭 ������ 
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof(str_2));

	//���ڿ��� �迭�� �Է¹ޱ�

	char name[30];
	printf("�̸��� �Է��ϼ���: \n");
	scanf_s("%s", name, sizeof(name));

	printf("%s", name);

	return 0;

}