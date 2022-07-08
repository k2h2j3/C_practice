#include <stdio.h>
int main_printfscanf(void) 
{
	// 정수형 변수에 대한 예제
	//int age = 12;
	//printf("%d\n", age);
	//age = 13;
	//printf("%d\n", age);
	//printf("%d\n", age);

	// 실수형 변수에 대한 예제
	//float f = 45.5343f; //45.53
	//printf("%.2f\n", f);
	//double d = 4.428;
	//printf("%.2lf\n", d); //4.43

	//상수형 변수에 대한 예제
	//const int YEAR = 2000;
	//printf("태어난 연도 : %d", YEAR);
	//YEAR = 2001; //상수형은 변수 값을 바꿀수가 없다.

	// printf
	// 연산
	//int add = 3 + 7;
	// printf("%d\n", add);
	// printf("%d + %d = %d\n", 33, 77, 33 + 77);

	// scnaf
	// 키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력: ");
	//scanf_s("%d", &input);
	//printf("입력값: %d\n", input);

	/*int one, two, three;
	printf("값을 3개 입력");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값: %d\n", one);
	printf("두 번째 값: %d\n", two);
	printf("세 번째 값: %d\n", three);*/

	// 문자, 문자열
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//문자열 크기 사이즈 조정
	//scanf_s("%s", str, sizeof(str)); 
	//printf("%s\n", str);

	//경찰 조서 프로그램

	char name[256];
	printf("이름 :");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이 :");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게 :");
	scanf_s("%f", &weight);

	double height;
	printf("키 :");
	scanf_s("%lf", &height);

	char what[256];
	printf("범죄명: ");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n -- 범죄자 정보 -- \n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.2f\n", weight);
	printf("키 : %.2lf\n", height);
	printf("범죄명 : %s\n", what);



	return 0;
}