#include <stdio.h>

int main_array(void)
{
	
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다.", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다.", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다.", subway_3);*/
	
	//배열 선언
	int subway_array[3];

	//인덱스 값 넣기
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d 명이 타고 있습니다\n", i + 1, subway_array[i]);

	}

	//값 설정 방법
	//값은 초기화를 반드시 해야함(더미 값이 나오기 때문)
	int arr[10] = {1, 2};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",  arr[i]);
	}

	int arr_i[] = { 1,2 }; //배열 크기는 2가 됨.
	float arr_f[5] = { 1.0f, 2.0f, 3.0f }; //float도 가능

	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

	//문자 vs 문자열

	char c = 'A';
	//문자열 끝에는 끝을 의미하는 NULL 문자 '\0'이 포함되어야함
	char str[6] = "coding"; // [c][o][d][i][n][g]
	char str_2[7] = "coding";
	printf("% s\n", str);
	printf("% s\n", str_2);

	//배열 사이즈 
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof(str_2));

	//문자열을 배열로 입력받기

	char name[30];
	printf("이름을 입력하세요: \n");
	scanf_s("%s", name, sizeof(name));

	printf("%s", name);

	return 0;

}