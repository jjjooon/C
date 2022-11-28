# include <stdio.h>

int main()
{
	/*
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("안녕하세요\n");
	}
	*/
	/*
	* 반복문
		여러 번 수행해야 할 작업을 한 번에 해결해주는 반복문
		대표적인 반복문은 for문과 while문

	for문의 이해
		반복문이란 말 그대로 문장을 반복하게 만들어주는 것
	
	for문의 개념과 활용
		for (초깃값; 조건식; 증감식)
		{
			실행문장
		}
	➊ for문을 사용하려면 무조건 변수를 하나 준비함. 변수 이름은 대개 i, j, k를 사용.
	➋ 사용할 변수의 초깃값을 0으로 설정. 꼭 0이 아니어도 되지만 보통 0부터 시작함.

	*/
	/*
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("안녕하세요?\n");//불록을 사용한 for문이다. 
		printf("##안녕 안녕 안녕\n");
	}
	printf("\n\n");
	
	for (i = 0; i < 3; i++)
		printf("안녕하세요?\n");//블록을 사용하지 않은 for문이다. 
		printf("##안녕 안녕 안녕\n");//이 부분은 for문과 상관없이 실행된 문장
*/
	/*
	int i;
	for (i = 5; i > 0; i--)//초깃값, 조건식, 증감식을 수정하여 숫자값을 줄인다
	{
		printf("%d : 안녕하세요\n", i);
	}
	*/
	/*
	int i;
	for (i = 1; i <=5; i++)
	{
		printf("%d \n", i);
	}
	*/
	/*
	int hap;

	hap = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;

	printf("1에서 10까지의 합: %d\n", hap);
	*/
	/*
	int hap = 0; //합계를 누적할 변수를 선언한다 반드시 hap는 초기화를 한다. 안하면 에러
	int i;//1부터 10까지 변하는 변수를 선언한다. 

	for (i = 1; i <= 10; i++)//for문에 의해 1부터 10까지 열 번 반복된다. 
	{
		hap = hap + i;//hap 변수에 1부터 10까지 반복해서 누적된다. 
	}

	printf("1에서 10까지의 합: %d\n", hap);
	*/
	/*
	* 실행 결과 오류 발생함.
		변수 hap이 초기화되지 않으면

	쓰레기값의 이해
		변수 안에 이미 다른 값이 있는 상태로 연산을 수행함으로써 비정상적인 결과 값 출력
		프로그램 내에서 변수가 초기화되지 않은 것이 원인
		누적값을 표현하는 변수의 초기화를 수행함으로써 문제 해결
			int hap = 0;
	*/
	//500에서 1000까지의 홀수의 합
	/*
	int hap = 0; 
	int i;

	for (i = 501; i <= 1000; i+=2)
	{
		hap = hap + i;
	}
	
	printf("500에서 1000까지의 홀수의 합: %d\n", hap);
	*/
	// 입력숫자(변수명은 num)까지의 합
	/*
	int hap = 0;
	int i;
	int num; //입력받을 최종값이다. 

	printf("값 입력 : ");
	scanf_s("%d", &num); //최종값을 입력한다. 

	for (i = 1; i <= num; i++) //1부터 최종값까지 1씩 증가시키며 반복한다.
	{
		hap = hap + i;
	}
	printf("1에서 %d까지의 합: %d\n", num, hap);
	*/
	
//시작값은 num1, 최종값은 num2, 증가값은 num3 직접 입력해서 합을 구한다
	/*
	int hap = 0;
	int i;
	int num1, num2, num3; 

	printf("시작값, 끝값, 증가값 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	for (i = num1; i <= num2; i = i + num3)
	{
		hap = hap + i;
	}
	printf("%d에서 %d까지 %d씩 증가한 수의 합: %d\n", num1, num2, num3, hap);
	*/

int i;
int dan;//계산한 단을 입력받을 변수를 선언한다. 

printf("몇단?");
scanf_s("%d", &dan);//계산할 단을 입력받는다. 

for (i = 1; i <= 9; i++) //1부터 9까지 반복하며 입력한 단을 출력한다. 
{
	printf("%d X %d = %2d\n", dan, i, dan * i);
}
}
