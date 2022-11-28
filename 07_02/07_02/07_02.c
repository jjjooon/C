# include <stdio.h>

int main()
{
	/*
	int a = 100;

	while (a == 200)
	{
		printf("while문 내부에 들어 왔습니다.\n");//조건식을 먼저 판단하므로 while문 내부가 실행되지 않는다.
	}
	do
	{
		printf("do ~~ while문 내부에 들어 왔습니다.\n");//먼저 내용을 실행한 후 조건식을 판단하므로 do~while문 do문이 무조건 한번은 내부가 실행된다.
	} while (a == 200);
	*/
	/*
	do~while문과 while문의 차이
		do~while문은 조건식을 확인하기 전에 ‘반복할 문장’을 수행하므로 무조건 한 번은 실행됨
		형식은 while문과 동일하지만 do~while문은 조건식이 아래에 위치
*/
	int menu;

	do {  // do~while문이므로 한 번은 꼭 실행된다 .
		printf("\n 손님 주문하시겠습니까?\n");
		printf("<1>카페라떼<2>카푸치노<3>아메리카노<4>그만시킬래요==>");
		scanf_s("%d", &menu);//커피를 선택한다. 

		switch (menu)//선택한 커피에 따라서 주문을 접수한다. 
		{
		case 1:printf("#카페라떼를 주문하셨습니다.\n"); break;
		case 2:printf("#카푸치노를 주문하셨습니다.\n"); break;
		case 3:printf("#아메리카노를 주문하셨습니다.\n"); break;
		case 4:printf("#주문하신 커피를 준비하겠습니다.\n"); break;
		default:printf("잘못 주문하셨습니다.\n");
		} 
	} while (menu != 4);//선택한 메뉴가 4번이 아니면 계속 반복해서 주문을 받는다. (4번이면 중단)
}
