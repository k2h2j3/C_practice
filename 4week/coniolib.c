#include <stdio.h>
#include <conio.h>

//�ƽ�Ű�ڵ� define
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224
#define SPACEBAR 32


int main_coniolib(void)
{

	// kbhit()�Լ� ���
	// ����ڰ� Ű������ ������ ������ 1�� ��ȯ, �׷��������� 0�� ��ȯ
	// _kbhit()�� ����������
	/*printf("press any key to start the game\n");
	while(_kbhit()==0)
	{

	}
	printf("game start!!");*/

	//getch() �Լ� ���
	// ���� �ϳ��� �Է¹޴� �Լ��̸� ����ڰ� �Է��� ���ڰ� ���������� <=> getc �� ����ڰ� �Է��� ���ڰ� ����
	// _getch()�� ����������
	
	//getc���� ������
	//printf("%c", getc(stdin));
	//printf("%c", _getch()); //����Ű�� �Է������ʾƵ� �ٷ� ���α׷����� �Էµ�

	//����
	while (1)
	{
		if (_kbhit())
		{
			int nkey = _getch();
			if (nkey == SPACEBAR)
			{
				printf("space bar");
			}
			if (nkey == ARROW)
			{
				nkey = _getch();
				switch (nkey)
				{
				case UP:
					printf("up");
					break;

				case LEFT:
					printf("left");
					break;

				case RIGHT:
					printf("right");
					break;

				case DOWN:
					printf("down");
					break;
				}
			}
		}
		
	}


	return 0;
}