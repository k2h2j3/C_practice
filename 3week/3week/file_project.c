#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//비밀번호를 입력받아서
//맞는경우? 비밀 일기를 읽어와서 보여주고, 편집할 수 있게 하는 기능
//틀린경우? 경고메시지 표시하고 종료

#define MAX 10000

int main(void) 
{
	char line[MAX]; //파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; //일기장에 입력할 내용
	char password[20]; //비밀번호 입력
	char c; // 비밀번호 입력 할 때 키값 확인용

	printf("비밀일기에 오신걸 환영합니다\n");
	printf("비밀번호를 입력하세요 : ");

	int i = 0; 
	while (1)
	{
		c = getch(); //키입력시 바로바로 동작을 하는 기능
		if (c == 13) //Enter -> 비밀번호 입력 종료
		{
			password[i] = '\0'; //
			break;
		}
		else //비밀번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}
	
	printf("\n\n === 비밀번호 확인 중... ===\n\n");
	if (strcmp(password , "1234") == 0) //비밀번호 일치
	{
		printf("비밀번호 확인 완료\n\n");
		char* fileName = "C:\\Users\\k2h2j3\\Documents\\diary.txt";
		FILE* file = fopen(fileName, "a+b"); //파일이 없으면 생성, 파일이 있으면 append를 한다(뒤에 내용을 추가)
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		
		printf("\n\n 내용을 계속 작성하세요! 종료하시려면 EXIT입력\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // 새 줄(\n)이 나오기전까지 읽어들임
			getchar(); //Enter 입력 (\n) => Flush 처리

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀일기 입력을 종료합니다\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); //Enter를 위에서 무시처리하였기에 임의로추가

		}
		fclose(file);
	}
	else // 비밀번호가 틀린 경우
	{
		printf("비밀번호가 틀렸습니다 \n\n");
		printf("프로그램을 종료합니다\n");
	}
	return 0;
}