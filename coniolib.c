#include <stdio.h>
#include <conio.h>


int main(void)
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
	printf("%c", _getch()); //����Ű�� �Է������ʾƵ� �ٷ� ���α׷����� �Էµ�




	return 0;
}