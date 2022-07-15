#include <stdio.h>
#include <time.h>

int level; //게임 레벨
int arrayFish[6]; // 6개의 어항
int* cursor; //어떤 어항에게 줄 커서
void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main_pointer_project(void)
{
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0; //총 경과 시간
	long preElapsedTime = 0; //직전 경과 시간(최근에 물을 준 시간 간격)
	
	int num; // 몇번 어항에 물을 줄 것인지, 사용자 입력
	initData();
	printFishes();

	cursor = arrayFish; //cursor[0], cursor[1]...

	//게임 시작 부분
	startTime = clock(); //현재 시간을 millisecond(1000분의 1초) 단위로 반환
	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 주시겠어요?\n");
		scanf_s("%d", &num);

		//입력 값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		//총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; //천단위로 나눠줌(단위 millisec)
		printf("총 경과 시간: %ld 초 \n", totalElapsedTime);

		//직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
		preElapsedTime = totalElapsedTime - preElapsedTime;
		printf("최근 경과시간: %ld초 \n", preElapsedTime);

		//어항의 물을 감소
		decreaseWater(preElapsedTime);

		//사용자가 입력한 어항에 물을 주기
		//어항의 물이 0이면? 물을 주지 않는다.
		if (cursor[num - 1] <= 0)
		{
			printf("%d번 물고기는 이미 죽었습니다. 물을 줄 수 없습니다.\n", &num);

		}
		//어항의 물이 0이 아니면? 물을 줄 수 있다. => 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d 번 어항에 물을 줍니다\n\n", num);
			cursor[num - 1] += 1;
		}

		//레벨업 할 건지 확인(레벨은 20초마다 증가)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++; //level 증가
			printf("레벨업!");

			//최종 레벨
			if (level == 5)
			{
				printf("\n\n최고 레벨 달성!, 게임을 종료합니다\n\n");
				exit(0);
			}
		}

		//모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			//물고기 모두 사망
			printf("모든 물고기가 죽었습니다 ㅠㅠ\n");
			exit(0);

		}
		else  //최소 한 마리 이상 생존
		{
			printf("물고기가 아직 살아있어요!\n");
		}
		preElapsedTime = totalElapsedTime;  //
	

	}

	return 0;
}

void initData()
{
	level = 1; //게임 레벨(1-5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; //어항의 물 높이(0-100)
	}

}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]); //빈칸+4칸+빈칸 = 6칸
	}
	printf("\n\n"); //어항 간격
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); //3 => 난이도 조절값
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; //참, true
	}
	return 0; //false
}