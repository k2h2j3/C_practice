#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224
#define SPACEBAR 32


int x = 30;
int y = 7;

void Gotoxy(int x, int y);
void CursorView(char show); //커서가 안보이게 하는 함수

int main(void)
{

	CursorView(0);
	Gotoxy(x, y);
	printf("☆");
	
	while (1)
	{
		if (_kbhit())
		{
			int nkey = _getch();
			if (nkey == ARROW)
			{
				nkey = _getch();
				switch (nkey)
				{
				case UP:
					system("cls");
					gotoxy(x, --y);
					printf("☆");
					break;

				case LEFT:
					system("cls");
					gotoxy(x= x-2, y);
					printf("☆");
					break;

				case RIGHT:
					system("cls");
					gotoxy(x= x+2, y);
					printf("☆");
					break;

				case DOWN:
					system("cls");
					gotoxy(x, ++y);
					printf("☆");
					break;
				}
			}
		}

	}

	return 0;
}


void Gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);


}


