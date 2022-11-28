# include <stdio.h>

int main()
{
	/*
	int a, b = 5, c = 3;

	a = b + c;
	printf("%d + %d = %d \n", b, c, a);//더하기로 연산해서 a에 대입한다. 

	a = b - c;
	printf("%d - %d = %d \n", b, c, a);

	a = b * c;
	printf("%d * %d = %d \n", b, c, a);

	a = b / c;
	printf("%d / %d = %d \n", b, c, a);

	a = b % c;
	printf("%d %% %d = %d \n", b, c, a);//나머지값 연산을 해서 a에 대입한다.
	*/
	/*
	int a = 2, b = 3, c = 4;//정수형 변수를 선언한다. 
	int result1, mok, namugi;
	float result2;//실수형 변수를 선언한다. 

	result1 = a + b - c;//더하기와 빼기 연산을 동시에 수행한다. 
	printf("%d + %d - %d = %d\n", a, b, c, result1);

	result1 = a + b * c;
	printf("%d + %d * %d = %d\n", a, b, c, result1);

	result2 = a + b /(float) c;//정수 c를 실수로 강제 형 변환한 후 연산한다
	//강제 형 변환을 하려면 형식은 변수 또는 상수 앞에 ‘(형식 이름)’을 써줌. 실수 결과값을 원할때는 나누는 값을 실수로 해야된다
	printf("%d + %d - %d = %f\n", a, b, c, result2);

	mok = c / b;//몫을 구한다. 
	printf("%d / %d 의 몫은 %d\n", c, b, mok);

	namugi = c % b;//나머지를 구한다. 
	printf("%d %% %d 의 나머지는 %d\n", c, b, namugi);

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
	대입 연산자와 증감 연산자
		대입 연산자 : =, +=, -=, *=, /=, %=
		증감 연산자 : ++, --
*/
	int a = 10, b;

	b = a++; //b = a를 수행한 후 a를 1 증가시킨다.
	printf("%d\n", b);

	b = ++a; //a를 1 증가시킨 후에 b = a 를 수행한다.
	printf("%d\n", b);

}