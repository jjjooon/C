# include <stdio.h>

int main()
{
	/*
	int a, b = 5, c = 3;

	a = b + c;
	printf("%d + %d = %d \n", b, c, a);//���ϱ�� �����ؼ� a�� �����Ѵ�. 

	a = b - c;
	printf("%d - %d = %d \n", b, c, a);

	a = b * c;
	printf("%d * %d = %d \n", b, c, a);

	a = b / c;
	printf("%d / %d = %d \n", b, c, a);

	a = b % c;
	printf("%d %% %d = %d \n", b, c, a);//�������� ������ �ؼ� a�� �����Ѵ�.
	*/
	/*
	int a = 2, b = 3, c = 4;//������ ������ �����Ѵ�. 
	int result1, mok, namugi;
	float result2;//�Ǽ��� ������ �����Ѵ�. 

	result1 = a + b - c;//���ϱ�� ���� ������ ���ÿ� �����Ѵ�. 
	printf("%d + %d - %d = %d\n", a, b, c, result1);

	result1 = a + b * c;
	printf("%d + %d * %d = %d\n", a, b, c, result1);

	result2 = a + b /(float) c;//���� c�� �Ǽ��� ���� �� ��ȯ�� �� �����Ѵ�
	//���� �� ��ȯ�� �Ϸ��� ������ ���� �Ǵ� ��� �տ� ��(���� �̸�)���� ����. �Ǽ� ������� ���Ҷ��� ������ ���� �Ǽ��� �ؾߵȴ�
	printf("%d + %d - %d = %f\n", a, b, c, result2);

	mok = c / b;//���� ���Ѵ�. 
	printf("%d / %d �� ���� %d\n", c, b, mok);

	namugi = c % b;//�������� ���Ѵ�. 
	printf("%d %% %d �� �������� %d\n", c, b, namugi);

*/
	/*
	int a = 10;

	a++;
	printf("a++ ==> %d\n", a); //a = a+1

	a--;
	printf("a-- ==> %d\n", a); //a = a-1

	a+=5;
	printf("a+=5 ==> %d\n", a); //a = a+5

	a -= 5;
	printf("a-=5 ==> %d\n", a); //a = a-5

	a *= 5;
	printf("a*=5 ==> %d\n", a); //a = a*5

	a /= 5;
	printf("a/=5 ==> %d\n", a); //a = a/5

	a %= 5;
	printf("a%%=5 ==> %d\n", a); //a = a%5
	*/
	/*
	���� �����ڿ� ���� ������
		���� ������ : =, +=, -=, *=, /=, %=
		���� ������ : ++, --
*/
	int a = 10, b;

	b = a++; //b = a�� ������ �� a�� 1 ������Ų��.
	printf("%d\n", b);

	b = ++a; //a�� 1 ������Ų �Ŀ� b = a �� �����Ѵ�.
	printf("%d\n", b);

}