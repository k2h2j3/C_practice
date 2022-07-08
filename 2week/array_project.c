#include <stdio.h>
#include <time.h>

int array_project(void)
{
	srand(time(NULL));
	printf("\n\n ==== 아빠는 대머리 게임 ==== \n\n");
	int answer; //사용자 입력값
	int treatment = rand() % 4; //발모제 선택(0-3)

	int cntShowBottle = 0; //이번 게임에 보여줄 병 개수
	int prevCntShowBottle = 0; //앞 게임에 보여준 병 개수

	//서로 보여주는 병 개수를 다르게 하여 정답률 향상(2개 => 3개)

	//3번의 기회( 3번의 발모제 투여 시도)
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] =  { 0, 0, 0, 0 }; //4개의 병
		do {
			cntShowBottle = rand() % 2 + 2; //보여줄 병 개수(%2로 0에서 1사이의 값이 나온후 +2로 2와 3으로 나타냄)

		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isincluded = 0; //보여줄 병 중에 발모제가 포함되었는지 여부 1이면 포함
		printf(" > %d 번째 시도 :", i);

		//보여줄 병 종류를 선택
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; // 0-3

			//아직 선택되지 않은 병이면, 선택 처리
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isincluded = 1;
				}
			}
			
			//이미 선택된 병이면, 중복이므로 다시 선택
			else
			{
				j--;
			}
		}
		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d", k + 1);
		
		}
		printf("물약을 머리에 바릅니다\n\n");

		if (isincluded == 1)
		{
			printf("성공!\n");

		}
		else
		{
			printf("실패 ㅠㅠ\n");
		}

		printf("\n 계속하려면 아무거나 누르세요...");
		getchar(); // 사용자가 다음키를 누를때까지 대기
	}

	printf("\n\n 발모제는 몇 번 일까요?");
	scanf_s("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("정답입니다!\n");
	}
	else 
	{
		printf("오답입니다 ㅠㅠ 정답은 %d 입니다\n", treatment +1);
	}
	

	return 0;
}