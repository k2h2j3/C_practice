#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);

int main_window(void)
{
	int x, y;
	printf("���ڿ��� ��� ��ġ�� �����ּ���(x,y) :" );
	scanf_s("%d %d", &x, &y);
	gotoxy(x, y);
	printf("Hello World!");

	return 0;
}

//gotoxy�Լ� => ��𼭺��� ������� �������ִ� �Լ�
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
