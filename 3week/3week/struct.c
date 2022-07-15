#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
	//구조체 안의 구조체
	struct GameInfo* friendGame;
};

int main_struct(void)
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

	//구조체 안의 구조체
	gameInfo1.friendGame = &gameInfo2;
	printf("\n\n구조체 안의 구조체 출력\n");
	printf("게임명: %s\n", gameInfo1.friendGame->name);
	printf("발매년도: %d\n", gameInfo1.friendGame->year);
	printf("가격: %d\n", gameInfo1.friendGame->price); //이런 방법도 있음
	printf("제작사: %s\n", gameInfo1.friendGame->company);
	return 0;

	//typedef
	//자료형에 별명 지정
	int i = 1;
	typedef int 정수; 
	typedef float 실수;
	정수 정수변수 = 3; // int i = 3;
	실수 실수변수 = 3.23f; // float j = 3.23f;
	printf("정수변수: %d, 실수변수: %.2f\n", 정수변수, 실수변수);
}