#include <stdio.h>
#include <time.h> //시간 날짜에 대한 함수 라이브러리
int main(void) 
{

	/*int age;
	printf("나이를 입력하세요:");
	scanf_s("%d", &age);
	
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.");
	}
	else if(age >= 20)
	{
		printf("대학생 또는 일반인입니다.");
	}
	else
	{
		printf("아기입니다.");
	}*/

	//break문은 조건에 부합했을 때, 빠져나가는 문법
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요\n");
			break;
		}
		printf("%d 번 학생은 조별발표 준비를 하세요 \n", i);
	}*/


	//continue문은 조건에 부합했을 때, 그 이후에 문장을 실행하지않고 다음 반복문으로 넘어감
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}*/

	// switch를 활요한 가위 바위 보 프로그램
	
	//srand(time(NULL)); 
	//int i = rand() % 3; // 0 ~ 2 반환

	//switch (i)
	//{
	//case 0:
	//	printf("가위\n"); 
	//	break;

	//case 1:
	//	printf("바위\n");
	//	break;

	//case 2:
	//	printf("보\n");
	//	break;

	//dafault:
	//	printf("오류!\n");
	//	break;
	//}
	
	
	//숫자 맞추기 프로젝트

	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자 랜덤
	printf("숫자: %d\n", num);
	int answer = 0; //정답
	int chance = 5; //기회
	while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 1 ~ 100\n");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");

		}
		else if(answer < num)
		{
			printf("UP\n\n");
		}
		else if (answer = num)
		{
			printf("정답!\n\n");
			break;
		}
		else
		{
			printf("1 ~ 100사이의 숫자만 입력해주세요\n");
			break;
		}

		if (chance == 0)
		{
			printf("남은 기회를 모두 소진했습니다.\n");
			break;
		}
	}








	return 0;
}