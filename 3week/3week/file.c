#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MAX 10000 //MAX를 10000으로 치환

int main_file(void)
{

	//파일 입출력
	//파일에 어떤 데이터를 저장
	//파일에 저장된 데이터를 불러오기

	char line[MAX]; //char line [10000]

	//파일 쓰기
	//FILE* file = fopen("C:\\Users\\k2h2j3\\Documents\\test.txt", "wb"); // r : 읽기, w : 쓰기, a: append, t: text, b: binary
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return -1;
	//}

	//fputs("fputs를 이용해서 글을 적어보기\n", file); //파일에 쓰기
	//fputs("잘 적히는지 확인해주세요\n", file);

	//fclose(file); //파일 저장


	//파일 읽기
	//FILE* file = fopen("C:\\Users\\k2h2j3\\Documents\\test.txt", "rb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return -1;
	//}

	////파일 불러오기

	//while (fgets(line, MAX, file) != NULL)
	//{
	//	printf("%s", line);
	//}

	//또 다른 파일 쓰기 fprintf, fscanf
	int num[6] = { 0,0,0,0,0,0 }; //추첨번호
	int bonus = 0; //보너스 번호
	char str[MAX];
	char str2[MAX];

	//파일에 쓰기
	//FILE* file = fopen("C:\\Users\\k2h2j3\\Documents\\test2.txt", "wb");

	//if (file == NULL)
	//	{
	//		printf("파일 열기 실패\n");
	//		return -1;
	//	}

	//// 로또 추첨 번호 저장
	//fprintf(file, "%s %d %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "보너스 번호", 7);

	//fclose(file);

	//파일읽기
		FILE * file = fopen("C:\\Users\\k2h2j3\\Documents\\test2.txt", "rb");

	if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return -1;
		}
	//첫 번째 줄
	fscanf(file, "%s %d %d %d %d %d %d \n", str,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);

	printf("%s %d %d %d %d %d %d %d\n", str,
		num[0], num[1], num[2], num[3], num[4], num[5]);

	//두 번째 줄
	fscanf(file, "%s %d\n", str2, &bonus);

	printf("%s %d \n", str2, bonus);
	

	return 0;
}