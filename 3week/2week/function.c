#include <stdio.h>

// 선언
void p(num);

//반환값이 있는 함수
int function_with_return();

//반환 값이 없는 함수
void function_without_return();

//파라미터(전달값)이 없는 함수
void function_without_params();

//파라미터(전달값)이 있는 함수, 반환값은 없음
void function_with_params(int num1, int num2, int num3 );

//파라미터와 반환값이 있는 함수
//전체 total개에서 ate개 먹고 남은 수를 반환
int apple(int total, int ate);



int main_function(void) 
{
	//메인에서 호출

	function_without_return(); //반환 값이 없는 함수

	int ret = function_with_return(); //반환 값이 있는 함수
	p(ret);

	function_without_params(); //전달 값이 없는 함수

	function_with_params(1,2,3); //전달 값이 있는 함수

	int apples = apple(5, 2);
	printf("사과 %d개 중에 %d를 먹으면 %d개가 남는다\n", 5,2, apple(5,2));

	return 0;
}

//정의
//반환하지 않는 함수를 작성할때는 앞에 void를 붙임
//반환형 함수를 만들때에는 앞에 반환할 타입을 지정(int, double...)
void p(int num)
{
	printf("num 은  %d 입니다\n", num);


}

void function_without_return() 
{

	printf("반환 값이 없는 함수\n");

}

int function_with_return() 
{

	printf("반환값이 있는 함수\n");
	//반환 값이 있는 함수는 return을 써줘야함
	return 10;

}

void function_without_params()
{
	printf("전달 값이 없는 함수\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수 이며 전달값은 %d, %d, %d\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 모두 있는 함수\n");
	return total - ate;
}


