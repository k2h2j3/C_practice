#include <stdio.h>

// ����
void p(num);

//��ȯ���� �ִ� �Լ�
int function_with_return();

//��ȯ ���� ���� �Լ�
void function_without_return();

//�Ķ����(���ް�)�� ���� �Լ�
void function_without_params();

//�Ķ����(���ް�)�� �ִ� �Լ�, ��ȯ���� ����
void function_with_params(int num1, int num2, int num3 );

//�Ķ���Ϳ� ��ȯ���� �ִ� �Լ�
//��ü total������ ate�� �԰� ���� ���� ��ȯ
int apple(int total, int ate);



int main_function(void) 
{
	//���ο��� ȣ��

	function_without_return(); //��ȯ ���� ���� �Լ�

	int ret = function_with_return(); //��ȯ ���� �ִ� �Լ�
	p(ret);

	function_without_params(); //���� ���� ���� �Լ�

	function_with_params(1,2,3); //���� ���� �ִ� �Լ�

	int apples = apple(5, 2);
	printf("��� %d�� �߿� %d�� ������ %d���� ���´�\n", 5,2, apple(5,2));

	return 0;
}

//����
//��ȯ���� �ʴ� �Լ��� �ۼ��Ҷ��� �տ� void�� ����
//��ȯ�� �Լ��� ���鶧���� �տ� ��ȯ�� Ÿ���� ����(int, double...)
void p(int num)
{
	printf("num ��  %d �Դϴ�\n", num);


}

void function_without_return() 
{

	printf("��ȯ ���� ���� �Լ�\n");

}

int function_with_return() 
{

	printf("��ȯ���� �ִ� �Լ�\n");
	//��ȯ ���� �ִ� �Լ��� return�� �������
	return 10;

}

void function_without_params()
{
	printf("���� ���� ���� �Լ�\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ� �̸� ���ް��� %d, %d, %d\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� ��� �ִ� �Լ�\n");
	return total - ate;
}


