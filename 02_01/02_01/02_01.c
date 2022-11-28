#include<stdio.h>

int main()
{
	//\ IiLl ㅣ1 0ㅇ Oo d2coing 글자체////
	/*
	int a, b; //정수형 변수선언
	int result;

	a = 100; //a라는 변수에 100변수값을 대입
	b = 50;

	result = a + b; //result변수에 a+b의 값을 대입
	printf("%d + %d = %d \n", a, b, result); //%d (정수형 서식) %f(실수형서식) %c(문자형서식: 한글자) %s(문자열형서식:한글자이상)
	//printf( )는 결과를 출력하기 위해 사용하는 함수로 괄호 안의 내용을 모니터에 출력하라는 의미
	//\n은 실제로 출력되지 않는 기호로 다음 줄로 넘어가라는 의미
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

	scanf_s("%d", &a);//키보드로 a에 들어갈 값을 입력받는다 scanf_s() : 입력함수, &(엠퍼센드 번지의 의미)
	scanf_s("%d", &b);//키보드로 b에 들어갈 값을 입력받는다 

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
	scanf는 입력함수로 비주얼스튜디 외에 모든 개발툴에서 사용한다
	(단 다른개발툴에서는 scanf만 사용)
	비주얼스튜디오에서는 scanf 대신에 scanf_s를 권장한다.
	만약에 scanf를 사용한다면 (솔루션탐색기/소스파일명(마우스오른쪽)
	속성 / 구성속성 / c / c++ / SDL검사(예->아니오)
*/
	int a, b;
	int result;

	printf("첫 번째 숫자를 입력하세요 : ");//도움말을 화면에 출력한다. 
	scanf_s("%d", &a);
	printf("두 번째 숫자를 입력하세요 : ");
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
