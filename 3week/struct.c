#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main(void)
{
	char * name = "나도게임";
	int year = 2017;
	int price = 50;
	char * company = "나도회사";

	//구조체 사용

	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";
	
	// 구조체 출력
	printf("구조체 출력\n");
	printf("게임명: %s\n", gameInfo1.name);
	printf("발매년도: %d\n", gameInfo1.year);
	printf("가격: %d\n", gameInfo1.price);
	printf("제작사: %s\n\n\n", gameInfo1.company);

	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = {"너도 게임", 2018, 100, "너도회사" };

	//배열 구조체 출력
	printf("배열 구조체 출력\n");
	printf("게임명: %s\n", gameInfo2.name);
	printf("발매년도: %d\n", gameInfo2.year);
	printf("가격: %d\n", gameInfo2.price);
	printf("제작사: %s\n", gameInfo2.company);


	//구조체 배열
	struct GameInfo gameArray[2] = {
		{"나도 게임", 2020, 120, "너도회사" },
		{"너도 게임", 2021, 130, "너도회사" }
	};

	//구조체 포인터

	struct GameInfo * gamePtr; 
	gamePtr = &gameInfo1;
	printf("\n\n구조체 포인터 출력\n");
	printf("게임명: %s\n",  (*gamePtr).name); 
	printf("발매년도: %d\n", (*gamePtr).year);
	printf("가격: %d\n", gamePtr->price); //이런 방법도 있음
	printf("제작사: %s\n", gamePtr->company);


	return 0;
}