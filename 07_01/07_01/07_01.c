# include <stdio.h>

int main()
{
	/*
	int i;
	i = 0;//초깃값을 지정한다. 

	while (i < 5)//조건식이다. 
	{
		printf("while문은 공부합시다.\n");
		i++;//증감식이다. 
	}
	*/
	/*
	while 문의 실행 순서
		조건식의 값이 참이면 반복할 문장 수행
		중괄호({ })가 끝나는 곳에서 조건식으로 돌아와 같은 동작 반복
	*/
	//while 문을 이용해서 1에서 10까지의 합
	/*
	int i, hap = 0;
	i = 1; //초깃값을 지정한다. 

	while (i <= 10)//조건식이다. 
	{
		hap = hap + i;
		i++; //증감식이다. 
	}
	printf("1에서 10까지의 합: %d\n", hap);
	*/
	/*
	int a, b;

	while (1)//무한 루프를 만드는 코드이다. 
	{
		printf("더할 두 수 입력(멈추려면 (Ctrl+C):");
		scanf_s("%d %d", &a, &b); //입력값을 공백으로 분리한다.
		printf("%d + %d = %d\n", a, b, a + b);//결과를 출력한다. 
	}
	*/
	/*무한루프를 위한 while문
		조건식이 무조건 참이어야 함
		for( ; ; )와 동일한 역할
		while(1)로 표현
*/	
	int a, b;
	char ch;

	while (1)//무한 루프를 만드는 코드이다.
	{
		printf("더할 두 수 입력(멈추려면 (Ctrl+C)):"); //연산할 2개의 수를 입력받는다.
		scanf_s("%d %d", &a, &b); 

		printf("계산할 연산자를 입력:");
		scanf_s("%c", &ch, 1);//연산자를 입력받는다. % 앞에 공백 문자를 넣는다.(공백이 앞의 enter키 값을 받음) scanf_s("%c", &ch, 1);

		switch (ch)
		{
		case '+': printf("%d + %d = %d \n", a, b, a + b); break;//입력받은 ch 연산자에 의해 +, -, *, /, %로 분기한다 . 그 외는 오류 메시지를 출력한다.
		case '-': printf("%d - %d = %d \n", a, b, a - b); break;
		case '*': printf("%d * %d = %d \n", a, b, a * b); break;
		case '/': printf("%d / %d = %d \n", a, b, a / b); break;
		case '%': printf("%d %% %d = %d \n", a, b, a % b); break;
		}
	}

}
