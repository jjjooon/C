#include<stdio.h>

int main()
{
	//\ IiLl ��1 0�� Oo d2coing ����ü////
	/*
	int a, b; //������ ��������
	int result;

	a = 100; //a��� ������ 100�������� ����
	b = 50;

	result = a + b; //result������ a+b�� ���� ����
	printf("%d + %d = %d \n", a, b, result); //%d (������ ����) %f(�Ǽ�������) %c(����������: �ѱ���) %s(���ڿ�������:�ѱ����̻�)
	//printf( )�� ����� ����ϱ� ���� ����ϴ� �Լ��� ��ȣ ���� ������ ����Ϳ� ����϶�� �ǹ�
	//\n�� ������ ��µ��� �ʴ� ��ȣ�� ���� �ٷ� �Ѿ��� �ǹ�
	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result);
	*/
	/*
	int a, b; 
	int result;

	scanf_s("%d", &a);//Ű����� a�� �� ���� �Է¹޴´� scanf_s() : �Է��Լ�, &(���ۼ��� ������ �ǹ�)
	scanf_s("%d", &b);//Ű����� b�� �� ���� �Է¹޴´� 

	result = a + b; 
	printf("%d + %d = %d \n", a, b, result); 
	
	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result);
	*/
	/*
	scanf�� �Է��Լ��� ���־�Ʃ�� �ܿ� ��� ���������� ����Ѵ�
	(�� �ٸ������������� scanf�� ���)
	���־�Ʃ��������� scanf ��ſ� scanf_s�� �����Ѵ�.
	���࿡ scanf�� ����Ѵٸ� (�ַ��Ž����/�ҽ����ϸ�(���콺������)
	�Ӽ� / �����Ӽ� / c / c++ / SDL�˻�(��->�ƴϿ�)
*/
	int a, b;
	int result;

	printf("ù ��° ���ڸ� �Է��ϼ��� : ");//������ ȭ�鿡 ����Ѵ�. 
	scanf_s("%d", &a);
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b); 

	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result);
}
