#include <stdio.h>
#include <time.h>
int arrayAnimal[4][5]; //카드 지도(4x5 =20장)
int checkAnimal[4][5]; // 뒤집힌 카드 여부
char * strAnimal[10]; //동물 이름(종류) 배열을 포인터로 
char* cPtr = "테스트";
void initAnimalArray(); //동물 배열생성 
void initAnimalName(); //동물 이름 생성
void shuffleAnimal(); //동물카드 셔플
int getEmptyPosition(); //좌표에서 빈공간 찾기
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();


// 10마리의 서로 다른 동물(각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 동물 쌍을 찾으면 게임 종료
// 실패횟수 알려주기

int main(void)
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0; //실패 횟수


	while (1)
	{
		int select1 = 0; // 사용자가 선택한 처음 수
		int select2 = 0; // 사용자가 선택한 두번째 수

		printAnimals(); //동물 위치 출력
		printQuestion(); //문제 출력(카드 지도)
		printf("뒤집을 카드를 2개 고르세요");
		scanf_s("%d, %d", &select1, &select2);

		if (select1 == select2)
			continue;

		// 좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인

		//정수 좌표를 (x,y)로 변환
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);
		
		// 같은 동물인 경우 
		if (checkAnimal[firstSelect_x][firstSelect_y] == 0 
			&&
			checkAnimal[secondSelect_x][secondSelect_y] == 0
			&&
			arrayAnimal[firstSelect_x][firstSelect_y]
			== arrayAnimal[secondSelect_x][secondSelect_y]
			)
		{
			printf("\n\n 빙고! %s 발견", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}//카드가 뒤집히지 않았는지 && 두 동물이 같은지
		//다른 동물인 경우
		else
		{
			printf("땡! 틀렸거나 이미 뒤집힌 카드입니다");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]); //첫번째 동물 알려주기
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]); //두번째 동물 알려주기
			printf("\n\n");

			failCount++;
		}
		// 모든 동물을 찾았는지 여부 1: 참, 0: 거짓
		if (foundAllAnimals() == 1)
		{
			printf("\n\n 모든 동물을 다 찾았습니다!\n");
			printf("지금까지 총 %d 번 실수하였습니다\n", failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "원숭이";
	strAnimal[0] = "하마";
	strAnimal[0] = "강아지";
	strAnimal[0] = "고양이";
	strAnimal[0] = "돼지";

	strAnimal[0] = "코끼리";
	strAnimal[0] = "기린";
	strAnimal[0] = "낙타";
	strAnimal[0] = "타조";
	strAnimal[0] = "호랑이";
	
}

void shuffleAnimal()
{
	// ㅁㅁㅁㅁㅁ
	// ㅁㅁㅁㅁㅁ
	// ㅁㅁㅁㅁㅁ
	// ㅁㅁㅁㅁㅁ

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20; // 0~19사이의 숫자 반환


		//좌표 위치로 변환하기 
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1) //빈공간이면 지금위치를 반환
		{
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x)
{
	// ex) 19 -> (3,4)
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5; //y를 5로 나눈 남은 나머지값
}

void printAnimals()
{
                                        
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------------\n\n");
}

void printQuestion()
{
	printf("\n\n(문제)\m");
	int seq = 0;
							// seq				// checkAnimal
	// ㅁㅁㅁㅁㅁ     // 0  1  2  3  4			0 0 0 0 0 (0은 아직 안찾은것, 1은 찾은것)
	// ㅁㅁㅁㅁㅁ =>  // 5  6  7  8  9			1 0 0 0 0
	// ㅁㅁㅁㅁㅁ	  // 10 11 12 13 14			0 0 0 1 0
	// ㅁㅁㅁㅁㅁ     // 15 16 17 18 19			0 0 0 0 0

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//카드를 뒤집어서 정답을 맞췄으면 동물이름 출력
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else
			{
				printf("%8d", seq++);
			}
			//정답을 못맞췄으면 뒷면 -> 위치를 나타내는 숫자
		}
		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
				return 0;
		}
	}
	return 1; //모두 다 찾음
}