#include <stdio.h>

int main_loop(void)
{
	
	//int b = 20;
	//printf("%d", b);  // => 20
	//printf(" %d", ++b); // b�� 1�� ������ ��� => 21
	//printf("%d", b++);  // b�� ����� �� 1�� ���� => 21
	//printf("%d\n", b); // => 22
	
	// for(����, ����, ����)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	//while(����) { }
	/*int i = 1;

	while (i <= 10)
	{
		printf("Hello World %d\n", i);
		i++;
	}*/

	//do { } while (����);
	/*int  i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//2�� �ݺ���
	/*for (int i = 1; i <= 3; i++) {

		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++) {

			printf("�� ��° �ݺ���: %d\n", j);
		}
	}*/

	//2�� �ݺ����� ���� ������ ���α׷�(���� 1)
	
	/*for (int i = 2; i <= 9; i++) {

		for (int j = 1; j <= 9; j++) {

			printf("%d x %d = %d\n", i, j, i * j);
		}
	}*/

	//2�� �ݺ��� ����2

	/*for (int i = 0; i <= 5; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}*/

	//2�� �ݺ��� ����3

	/*for (int i = 0; i <= 5; i++)
	{
		for (int j = 5; j >=  i; j--)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//2�� �ݺ��� ���� 4
	
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//�Ƕ�̵� �ױ�

	/*int floor;
	printf("�� ������ ���� �ǰ���? : ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) 
	{

		for(int j= i; j < floor - 1; j++)
		{
			printf(" ");
		}S
		for (int k = 0; k < i * 2 + 1 ; k++) 
		{
			printf("*");
		}
		printf("\n");S
	}*/


	return 0;
}
