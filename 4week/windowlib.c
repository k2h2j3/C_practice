#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);

int main(void)
{
	/*int x, y;
	printf("문자열을 띄울 위치를 정해주세요(x,y) :" );
	scanf_s("%d %d", &x, &y);
	gotoxy(x, y);
	printf("Hello World!");*/

	//Sleep 함수 => 지연시간을 두는 함수
	int i;
	int time = 1000;
	for (i = 0; i < 10; i++) 
	{
		printf("%d초 마다 출력\n", time / 1000);
		Sleep(time);
	}


	return 0;
}

//gotoxy함수 => 어디서부터 출력할지 결정해주는 함수
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


