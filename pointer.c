#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changearray(int *ptr);
int main_pointer(void)
{
	//[철수] : 101호 => 메모리 공간의 주소
	//[영희] : 201호
	//[민수] : 301호
	// 각 문 앞에 '암호'가 걸려있음

	//int 철수 = 1; //암호
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소: %d, 암호 %d\n", &철수, 철수);
	////철수네 주소 = 철수라는 변수가 컴퓨터상의 메모리공간에 저장된 주소 , 암호 = 철수라는 변수가 가지고 있는 값
	//printf("영희네 주소: %d, 암호 %d\n", &영희, 영희);
	//printf("민수네 주소: %d, 암호 %d\n", &민수, 민수);

	////미션맨 

	////첫 번째 미션: 아파트의 각 집에 방문하여 문에 적인 암호 확인
	//int* 미션맨; //포인터 변수
	//미션맨 = &철수; //철수의 주소
	//printf("미션맨이 방문하는 철수 주소: %d. 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &영희;
	//printf("미션맨이 방문하는 영희 주소: %d. 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &민수;
	//printf("미션맨이 방문하는 민수 주소: %d. 암호 : %d\n", 미션맨, *미션맨);

	////두 번째 미션 : 암호에 3씩 곱하기
	//미션맨 = &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 철수 주소: %d. 암호 : %d\n", 미션맨, *미션맨);
	//
	//// 스파이
	//// 다수의 포인터 변수가 하나의 메모리 공간을 가르킬 수 있다.
	//// 미션맨이 바꾼 암호에서 2를 빼기
	//int* 스파이 = 미션맨;
	//printf("\n 스파이가 미션수행하는 중\n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2; //철수 = 철수 -2
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);


	////미션맨이 사는 곳의 주소 => &미션맨 으로 확인
	////포인터도 하나의 변수이므로 메모리 공간에 존재
	//printf("미션맨의 주소: %d\n", &미션맨);
	//printf("스파이의 주소: %d\n", &스파이);

	//배열과 포인터의 관계
	//int arr[3] = { 5, 10, 15 };
	//int* ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
	//}

	////포인터의 값을 변경하면? => 배열의 값이 변경한 값으로 바뀜
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;

	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	//	//동일한 출력
	//	printf("배열 arr[%d]의 값: %d\n", i, *(arr + i));
	//	
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
	//	printf("포인터 ptr[%d]의 값: %d\n", i, *(ptr + i));
	//}

	//// *(arr + i) == arr[i] 똑같은 표현
	//// arr == arr 배열의 첫 번째 값의 주소와 동일 == &arr[0]
	//printf("arr 자체의 값: %d\n", arr);
	//printf("arr[0]의 주소: %d\n", &arr[0]);

	//printf("arr 자체의 값이 가지는 주소의 실제 값: %d\n", *arr);
	//printf("arr[0] 의 실제 값: %d\n", *&arr[0]);

	//// *&은 아무것도 없는 값과 같다 => &는 주소이며, *는 그 주소의 값이기 때문에
	//// *&는 서로 상쇄된다.

	//printf("arr[0]의 실제값 : %d\n", arr[0]); //동일하게 나옴
	//printf("arr[0]의 실제값 : %d\n", *&*&*&*&*&arr[0]); //동일하게 나옴


	//swap

	int a = 10;
	int b = 20;
	printf("a의 주소: %d\n", &a);
	printf("b의 주소: %d\n", &b);
	//a 와 b의 값을 바꾸기
	printf("Swap 함수 전 => a : %d, b: %d\n", a, b);
	swap(a, b);
	printf("Swap 함수 후 => a : %d, b: %d\n", a, b); //함수전과 동일한결과
	// a와 b 자체를 바꾼것이 아니기 때문
	// 값에 의한 복사(Call by Value) -> 값만 복사한다는 의미 

	// 메모리공간에 있는 주소값 자체를 넘기기

	printf("(주소값 전달)Swap 함수 전 => a : %d, b: %d\n", a, b);
	swap_addr(&a, &b);
	printf("(주소값 전달)Swap 함수 후 => a : %d, b: %d\n", a, b);

	//배열 값을 바꾸기, 배열일 때는 arr2 자체가 주소를 가진다.
	int arr2[3] = { 10, 20, 30 };
	changearray(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}

	return 0;
}
//a의 값와 b의 값을 스왑해주는 함수
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => .a : %d, b: %d\n", a, b); //함수내에선 바뀜
	printf("함수 내의 a의 주소: %d\n", &a);
	printf("함수 내의 b의 주소: %d\n", &b); // main함수의 a와 b의 주소가 다른것을 볼 수 있다.
}

//a와 b의 주소를 스왑해주는 함수
void swap_addr(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 내 => .a : %d, b: %d\n", *a, *b); 
	printf("함수 내의 a의 주소: %d\n", &a);
	printf("함수 내의 b의 주소: %d\n", &b);
}

void changearray(int *ptr)
{
	ptr[2] = 50;
}