#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);

int main_window(void)
{
	int x, y;
	printf("문자열을 띄울 위치를 정해주세요(x,y) :" );
	scanf_s("%d %d", &x, &y);
	gotoxy(x, y);
	printf("Hello World!");

	return 0;
}

//gotoxy함수 => 어디서부터 출력할지 결정해주는 함수
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
