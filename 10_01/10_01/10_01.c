/*
# include <stdio.h>
int plus(int v1, int v2)//plus( ) 함수를 정의한다. 
{
	int result;
	result = v1 + v2;//받은 두 매개변수의 합을 구한다 

	return result; //plus( ) 함수를 호출한 곳에 result 값을 반환한다. 
}

int main()
{
	int hap;

	hap = plus(100, 200);//매개변수 2개를 지정하여 plus( ) 함수를 호출하고 반환값은 hap에 저장한다.

	printf("100과 200의 plus()함수 결과는 : %d\n", hap);
}
*/
/*
함수의 개념
	함수(Function) : ‘무엇을 넣으면 어떤 것을 돌려주는 요술상자’
	C 언어에서 유용한 함수를 자체적으로 제공, 직접 만들어서 사용도 가능
		함수이름();
	예) printf( ) 함수 : C 언어에서 자체 제공
		printf("Basic-C"); → ‘Basic-C’ 출력
➊ 함수 호출 : plus(100, 200);으로 함수 호출
				   plus( )함수의 매개변수인 v1에는 100이, v2에는 200이 차례대로 할당됨.
➋ 함수 실행 : v1과 v2를 더해 result에 대입한 후 이 함수를 호출했던 곳으로 돌아감.
➌ 결과 반환 : 함수 실행 결과인 result값(300)을 plus( ) 함수를 호출했던 곳으로 돌려줌.
➍ hap에 반환값 대입 : result값 300을 변수 hap에 대입. plus(100, 200)의 결과를 hap에 넣어야
				   하므로 hap과 plus( ) 함수의 데이터 형식이 같아야 함.
	*/
/*
# include <stdio.h>
int calc(int v1, int v2, int op)//매개변수 3개를 받아서 계산하는 함수이다. 
{
	int result;

	switch (op)//매개변숫값에 따라서 ‘1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈’을 실행한다.
		//% 주의 case1(X)   case 1(O) : case와 1사이를 띄울것

	{
	case 1: result = v1 + v2; break;
	case 2: result = v1 - v2; break;
	case 3: result = v1 * v2; break;
	case 4: result = v1 / v2; break;
	}

	return result;	//계산 결과를 반환한다. 
}

int main()
{
	int res; //계산 결과, 연산자, 입력 숫자에 대한 변수이다. 
	int oper, a, b;

	printf("계산입력(1:+,2:-,3:*,4:/):");//연산자를 입력한다. 
	scanf_s("%d", &oper);

	printf("계산할 두 숫자를 입력하세요 : ");
	scanf_s("%d%d", &a, &b);//계산할 두 숫자를 입력한다 

	res = calc(a, b, oper);//매개변수 3개를 넣고 calc( ) 함수를 호출한다. 계산 결과는 res에 저장한다.

	printf("계산 결과는 : %d\n", res);
}
*/
/*
# include <stdio.h>
int a = 100;//전역변수 a를 선언하고 초깃값을 대입한다. 

void func1()
{
	int a = 200;//지역변수 a를 선언하고 초깃값을 대입한다. 
	printf("func1()에서 a의 값==> %d\n", a);//지역변수를 출력한다. 
}
int main()
{
	func1();//함수를 호출한다. 
	printf("main()에서 a의 값==>%d\n", a);//전역변수를 출력한다
}
*/
/*
지역변수와 전역변수의 이해
	지역변수 : 한정된 지역(local)에서만 사용되는 변수
	전역변수 : 프로그램 전체(global)에서 사용되는 변수
*/
/*
# include <stdio.h>
void func1()//void 형 함수이므로 반환값이 없다. 
{
	printf("void형 함수는 돌려 줄게 없음\n");
}

int func2()//int 형 함수므로 반환값이 있다. 
{
	return 100;
}
int main()
{
	int a;
	func1();//void 형 함수를 호출한다. 
	a = func2();//int 형 함수를 호출한다. 
	printf("int형 함수에서 돌려준 값==>%d\n", a);
}
*/
/*
반환값 유무에 따른 함수 구분
	반환값이 있는 함수
		함수를 실행한 결과값은 함수의 데이터형을 따름
		‘int 함수 이름( )’으로 정의했다면 결과도 정수형 변수나 정숫값이어야 함.
	반환값이 없는 함수
		함수를 실행한 결과로 돌려줄 것이 없는 경우
		함수의 데이터형을 void로 표시 : void 형 함수를 호출할 때는 함수 이름만 쓴다.
*/
/*
# include <stdio.h>
void func1(int a)
{
	a = a + 1; //전달받은 a 값을 1 증가시킨 후 출력한다. 
	printf("전달받은 a==>%d\n", a);
}

int main()
{
	int a = 10; //변수 a를 선언한다. 

	func1(a); //a 값을 매개변수로 넘겨 함수를 호출한다. 
	printf("func1() 실행 후의 a==> %d\n", a);//함수를 호출한 후 a 값을 출력한다. 
}
*/
/*
# include <stdio.h>
void func1(int* a)//매개변수로 주솟값(포인터)을 받는다. 
{
	*a = *a + 1; //a가 가리키는 곳의 실제 값 +1을 수행한다. 
	printf("전달받은 a==>%d\n", *a);//a가 가리키는 곳의 실제 값을 출력한다. 
}

int main()
{
	int a = 10; //a를 10으로 초기화한다

	func1(&a); //함수를 호출할 때 a의 주소를 전달한다. 
	printf("func1() 실행 후의 a==> %d\n", a);//함수를 호출한 후 a 값을 출력한다. 
}
*/
/*
값으로 전달(call by value)
	숫자나 문자 등의 값 자체를 함수에 넘겨주는 방법
	원래 값을 전달한 곳에는 아무런 영향을 미치지 않음

주소(또는 참조)의 전달
	주소값(address)을 함수에 넘겨주는 방법

main( ) 함수에서 func1(a) 호출. func1( ) 함수의 a에 10을 복사해서 넣음.
func1( ) 함수에서는 a 값을 1 증가시켜서 11로 바꿈.
main( )의 a는 변경되지 않고 10을 유지함
*/
# include <stdio.h>
void func1(char a, char b)//매개변수가 값인 함수이다. 
{
	int imsi;
	imsi = a;//두 문자를 교환한다.(main 함수에서는 변함이 없음) 
	a = b;
	b = imsi;
}

void func2(char* a, char* b)//매개변수가 주소인 함수이다. 
{
	int imsi;//두 문자의 실제값을 교환한다.(main 함수에서는 바뀜) 
	imsi = *a;
	*a = *b;
	*b = imsi;
}
int main()
{
	char x = 'A', y = 'Z';
	printf("원래값 : x=%c,  y=%c\n", x, y);//원래 문자를 출력한다. 
	func1(x, y);
	printf("값을 전달한 후 : x=%c, y=%c\n", x, y);//값을 전달해서 func1( ) 함수를 호출한다. 
	func2(&x, &y);
	printf("주소를 전달한 후 : x=%c, y=%c\n", x, y);//주소를 전달해서 func2( ) 함수를 호출한다. 
}