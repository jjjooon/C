# include <stdio.h>

int main()
{
	/*
	printf("10 & 7 = %d\n", 10 & 7);//10과 7의 비트 논리곱을 수행한다. 
	printf("123 & 456 = %d\n", 123 & 456);
	printf("0xFFFF & 0000 = %d\n", 0xFFFF & 0000);//16진수 FFFF와 0의 비트 논리곱을 수행한다. 
	*/
	/*
	비트 연산자
		비트 연산자는 정수나 문자 등을 2진수로 변환한 후에 각 자리의 비트끼리 연산 수행
		비트 연산자의 종류
		&(비트 논리곱), |(비트 논리합), ^(비트 배타적논리합), ~(비트부정), <<(비트 왼쪽 시프트), >>(비트 오른쪽 시프트)
	비트 논리곱(&) 연산자 :둘 다 참일때 참
		10진수를 2진수로 변환한 후 각 비트에 AND 연산 수행
*/
/*
	printf("10 | 7 = %d\n", 10 | 7);//10과 7의 비트 논리합을 수행한다. 
	printf("123 | 456 = %d\n", 123 | 456);
	printf("0xFFFF | 0000 = %d\n", 0xFFFF | 0000);//16진수 FFFF와 0의 비트 논리합을 수행한다. 
	/*비트 논리합(|) 연산자 : 둘중에 하나로 참일때 참
		10진수를 2진수로 변환한 후 각 비트에 OR 연산 수행
		*/
/*
	printf("10 ^ 7 = %d\n", 10 ^ 7);//10과 7의 비트 배타적 논리합을 수행한다. 
	printf("123 ^ 456 = %d\n", 123 ^ 456);//비트 배타적 논리합(^) = 비트논리합(|)-비트논리곱(&)
	printf("0xFFFF ^ 0000 = %d\n", 0xFFFF ^ 0000);//16진수 FFFF와 0의 비트 배타적 논리합을 수행한다.
	*/
	/*
	int a = 123;
	printf("%d\n", ~a+1); //2의 보수(a 값)를 구한다. 
	*/
	/*
	어떤수의 반대수(2의 보수) = ~a(1의 보수)+1

	비트 부정(~) 연산자
		두 수에 대한 연산이 아니라 비트 하나의 값을 반대로 만든다.
		어떤 수의 반대수(음수는 양수, 양수는 음수)를 찾을 때 사용
		2의 보수(반대수) = { 1의 보수(각 비트의 값을 반전시킨 값) } + 1
	*/
	int a = 10;

	printf("%d를 오른쪽 1회 시프트하면 %d이다.\n", a, a >> 1);
	printf("%d를 오른쪽 2회 시프트하면 %d이다.\n", a, a >> 2);
	printf("%d를 오른쪽 3회 시프트하면 %d이다.\n", a, a >> 3);
	printf("%d를 오른쪽 4회 시프트하면 %d이다.\n", a, a >> 4);
	/*
	비트 오른쪽 시프트(>>) 연산자
		나열된 비트를 오른쪽으로 시프트하는 연산자
		오른쪽으로 시프트할 때마다 2n(2의1승, 2의2승, 2의3승…)으로 나눈 효과
		오른쪽 시프트를 할 때마다 2의 n승(2의 1승, 2의 2승, 2의 3승…)을 나눈 몫의 효과
*/
	printf("%d를 왼쪽 1회 시프트하면 %d이다.\n", a, a << 1);
	printf("%d를 왼쪽 2회 시프트하면 %d이다.\n", a, a << 2);
	printf("%d를 왼쪽 3회 시프트하면 %d이다.\n", a, a << 3);
	printf("%d를 왼쪽 4회 시프트하면 %d이다.\n", a, a << 4);

	/*
	비트 왼쪽 시프트(>> ) 연산자
		왼된 비트를 오른쪽으로 시프트하는 연산자
		왼쪽으로 시프트할 때마다 2n(2의1승, 2의2승, 2의3승…)으로 곱한 효과
		*/
}
