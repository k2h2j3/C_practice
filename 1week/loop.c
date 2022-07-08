#include <stdio.h>

int main_loop(void)
{
	
	//int b = 20;
	//printf("%d", b);  // => 20
	//printf(" %d", ++b); // b에 1을 더한후 출력 => 21
	//printf("%d", b++);  // b를 출력한 후 1을 더함 => 21
	//printf("%d\n", b); // => 22
	
	// for(선언, 조건, 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	//while(조건) { }
	/*int i = 1;

	while (i <= 10)
	{
		printf("Hello World %d\n", i);
		i++;
	}*/

	//do { } while (조건);
	/*int  i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//2중 반복문
	/*for (int i = 1; i <= 3; i++) {

		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {

			printf("두 번째 반복문: %d\n", j);
		}
	}*/

	//2중 반복문을 통한 구구단 프로그램(응용 1)
	
	/*for (int i = 2; i <= 9; i++) {

		for (int j = 1; j <= 9; j++) {

			printf("%d x %d = %d\n", i, j, i * j);
		}
	}*/

	//2중 반복문 응용2

	/*for (int i = 0; i <= 5; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}*/

	//2중 반복문 응용3

	/*for (int i = 0; i <= 5; i++)
	{
		for (int j = 5; j >=  i; j--)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//2중 반복문 응용 4
	
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

	//피라미드 쌓기

	/*int floor;
	printf("몇 층으로 쌓을 건가요? : ");
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
