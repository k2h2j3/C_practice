#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changearray(int *ptr);
int main_pointer(void)
{
	//[ö��] : 101ȣ => �޸� ������ �ּ�
	//[����] : 201ȣ
	//[�μ�] : 301ȣ
	// �� �� �տ� '��ȣ'�� �ɷ�����

	//int ö�� = 1; //��ȣ
	//int ���� = 2;
	//int �μ� = 3;

	//printf("ö���� �ּ�: %d, ��ȣ %d\n", &ö��, ö��);
	////ö���� �ּ� = ö����� ������ ��ǻ�ͻ��� �޸𸮰����� ����� �ּ� , ��ȣ = ö����� ������ ������ �ִ� ��
	//printf("����� �ּ�: %d, ��ȣ %d\n", &����, ����);
	//printf("�μ��� �ּ�: %d, ��ȣ %d\n", &�μ�, �μ�);

	////�̼Ǹ� 

	////ù ��° �̼�: ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
	//int* �̼Ǹ�; //������ ����
	//�̼Ǹ� = &ö��; //ö���� �ּ�
	//printf("�̼Ǹ��� �湮�ϴ� ö�� �ּ�: %d. ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &����;
	//printf("�̼Ǹ��� �湮�ϴ� ���� �ּ�: %d. ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &�μ�;
	//printf("�̼Ǹ��� �湮�ϴ� �μ� �ּ�: %d. ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	////�� ��° �̼� : ��ȣ�� 3�� ���ϱ�
	//�̼Ǹ� = &ö��;
	//*�̼Ǹ� = *�̼Ǹ� * 3;
	//printf("�̼Ǹ��� ��ȣ�� �ٲ� ö�� �ּ�: %d. ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//
	//// ������
	//// �ټ��� ������ ������ �ϳ��� �޸� ������ ����ų �� �ִ�.
	//// �̼Ǹ��� �ٲ� ��ȣ���� 2�� ����
	//int* ������ = �̼Ǹ�;
	//printf("\n �����̰� �̼Ǽ����ϴ� ��\n\n");
	//������ = &ö��;
	//*������ = *������ - 2; //ö�� = ö�� -2
	//printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);


	////�̼Ǹ��� ��� ���� �ּ� => &�̼Ǹ� ���� Ȯ��
	////�����͵� �ϳ��� �����̹Ƿ� �޸� ������ ����
	//printf("�̼Ǹ��� �ּ�: %d\n", &�̼Ǹ�);
	//printf("�������� �ּ�: %d\n", &������);

	//�迭�� �������� ����
	//int arr[3] = { 5, 10, 15 };
	//int* ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("�迭 arr[%d]�� ��: %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("������ ptr[%d]�� ��: %d\n", i, ptr[i]);
	//}

	////�������� ���� �����ϸ�? => �迭�� ���� ������ ������ �ٲ�
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;

	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("�迭 arr[%d]�� ��: %d\n", i, arr[i]);
	//	//������ ���
	//	printf("�迭 arr[%d]�� ��: %d\n", i, *(arr + i));
	//	
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("������ ptr[%d]�� ��: %d\n", i, ptr[i]);
	//	printf("������ ptr[%d]�� ��: %d\n", i, *(ptr + i));
	//}

	//// *(arr + i) == arr[i] �Ȱ��� ǥ��
	//// arr == arr �迭�� ù ��° ���� �ּҿ� ���� == &arr[0]
	//printf("arr ��ü�� ��: %d\n", arr);
	//printf("arr[0]�� �ּ�: %d\n", &arr[0]);

	//printf("arr ��ü�� ���� ������ �ּ��� ���� ��: %d\n", *arr);
	//printf("arr[0] �� ���� ��: %d\n", *&arr[0]);

	//// *&�� �ƹ��͵� ���� ���� ���� => &�� �ּ��̸�, *�� �� �ּ��� ���̱� ������
	//// *&�� ���� ���ȴ�.

	//printf("arr[0]�� ������ : %d\n", arr[0]); //�����ϰ� ����
	//printf("arr[0]�� ������ : %d\n", *&*&*&*&*&arr[0]); //�����ϰ� ����


	//swap

	int a = 10;
	int b = 20;
	printf("a�� �ּ�: %d\n", &a);
	printf("b�� �ּ�: %d\n", &b);
	//a �� b�� ���� �ٲٱ�
	printf("Swap �Լ� �� => a : %d, b: %d\n", a, b);
	swap(a, b);
	printf("Swap �Լ� �� => a : %d, b: %d\n", a, b); //�Լ����� �����Ѱ��
	// a�� b ��ü�� �ٲ۰��� �ƴϱ� ����
	// ���� ���� ����(Call by Value) -> ���� �����Ѵٴ� �ǹ� 

	// �޸𸮰����� �ִ� �ּҰ� ��ü�� �ѱ��

	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d, b: %d\n", a, b);
	swap_addr(&a, &b);
	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d, b: %d\n", a, b);

	//�迭 ���� �ٲٱ�, �迭�� ���� arr2 ��ü�� �ּҸ� ������.
	int arr2[3] = { 10, 20, 30 };
	changearray(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}

	return 0;
}
//a�� ���� b�� ���� �������ִ� �Լ�
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("Swap �Լ� �� => .a : %d, b: %d\n", a, b); //�Լ������� �ٲ�
	printf("�Լ� ���� a�� �ּ�: %d\n", &a);
	printf("�Լ� ���� b�� �ּ�: %d\n", &b); // main�Լ��� a�� b�� �ּҰ� �ٸ����� �� �� �ִ�.
}

//a�� b�� �ּҸ� �������ִ� �Լ�
void swap_addr(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(�ּҰ� ����)Swap �Լ� �� => .a : %d, b: %d\n", *a, *b); 
	printf("�Լ� ���� a�� �ּ�: %d\n", &a);
	printf("�Լ� ���� b�� �ּ�: %d\n", &b);
}

void changearray(int *ptr)
{
	ptr[2] = 50;
}