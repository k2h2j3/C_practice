#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);

int main(void)
{
	/*int x, y;
	printf("���ڿ��� ��� ��ġ�� �����ּ���(x,y) :" );
	scanf_s("%d %d", &x, &y);
	gotoxy(x, y);
	printf("Hello World!");*/

	//Sleep �Լ� => �����ð��� �δ� �Լ�
	int i;
	int time = 1000;
	for (i = 0; i < 10; i++) 
	{
		printf("%d�� ���� ���\n", time / 1000);
		Sleep(time);
	}


	return 0;
}

//gotoxy�Լ� => ��𼭺��� ������� �������ִ� �Լ�
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


