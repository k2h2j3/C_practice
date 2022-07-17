#include <stdio.h>
#include <conio.h>


int main(void)
{

	// kbhit()함수 사용
	// 사용자가 키보드의 자판을 누르면 1을 반환, 그렇지않으면 0을 반환
	// _kbhit()로 사용해줘야함
	/*printf("press any key to start the game\n");
	while(_kbhit()==0)
	{

	}
	printf("game start!!");*/

	//getch() 함수 사용
	// 문자 하나를 입력받는 함수이며 사용자가 입력한 문자가 보이지않음 <=> getc 는 사용자가 입력한 문자가 보임
	// _getch()로 사용해줘야함
	
	//getc와의 차이점
	//printf("%c", getc(stdin));
	printf("%c", _getch()); //엔터키를 입력하지않아도 바로 프로그램으로 입력됨




	return 0;
}