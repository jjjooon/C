# include <stdio.h>

int main()
{
	/*
	int a = 75;

	if (a > 50)
		if (a < 100)//참이면(a가 50보다 크면) 실행한다. 
		{
			printf("50보다 크고 100보다 작군요.\n"); //참이고(a가 50보다 크고 a가 100보다 작으면) 실행한다.
		}
		else
		{
			printf("100보다 크군요\n");//참이고(a가 50보다 크고 100보다 크거나 같으면) 실행한다.
		}
	else
	{
		printf("50보다 작군요.\n");//거짓이면(a가 50보다 작거나 같으면) 실행한다. 
	}
	*/
	/*
	중첩 if문
		if문을 한 번 실행하고 그 결과에 다시 다른 if문을 실행하는 것
		가능하면 블록을 사용하여 조건식을 명확히 하는 것이 좋음
*/
	/*
	int a;

	printf("점수를 입력하세요.\n");//점수를 입력한다(100점 만점). 
	scanf_s("%d", &a);

	if (a >= 90)//입력한 점수가 90점 이상이면 A 학점을 출력한다. 
		printf("A");
	else
		if (a >= 80) //입력한 점수가 80점 이상이면 B 학점, 70점 이상이면 C 학점, 60점 이상이면 D 학점을 출력한다
			printf("B");
		else
			if (a >= 70)
				printf("C");
			else
				if (a >= 60)
					printf("D");
				else
					printf("F"); //60점 미만이면 F 학점을 출력한다. 
	printf("학점입니다");
	*/
	/*
	int a;

	printf("점수를 입력하세요.\n");
	scanf_s("%d", &a);

	if (a >= 90) 
		printf("A");
	else if (a >= 80) 
		printf("B");
	else if (a >= 70)
		printf("C");
	else if (a >= 60)
		printf("D");
	else
		printf("F"); 
	printf("학점입니다");
	*/
	/*
	int a;

	printf("1~4중에 선택하세요:");
	scanf_s("%d", &a);

	switch (a)//입력한 a 값에 따라서 분기한다. 
	{
	case 1://a가 1이면 아래행을 수행하고 그다음행에서 switch 블록을 빠져나간다
		printf("1을 선택했다.\n");
		break;
	case 2:
		printf("2를 선택했다.\n");
		break;
	case 3:
		printf("3을 선택했다.\n");
		break;
	case 4:
		printf("4를 선택했다.\n");
		break;

	default://a가 1, 2, 3, 4 중 아무것도 해당되지 않을 때 수행한다. 
		printf("이상한걸 선택했다.\n");
	}
	*/
	/*
	switch~case문
		참과 거짓 이외의 다른 선택이 가능한 경우에 사용
		여러 개 중 하나를 선택한다는 의미로 다중 분기
		조건값(정숫값)에 따라 case문 실행
*/
	int year;

	printf("출생년도를 입력하세요:");
	scanf_s("%d", &year);

	switch (year % 12)
	{
	case 0:printf("원숭이띠\n"); break;
	case 1:printf("닭띠\n"); break;
	case 2:printf("개띠\n"); break;
	case 3:printf("돼지띠\n"); break;
	case 4:printf("쥐띠\n"); break;
	case 5:printf("소띠\n"); break;
	case 6:printf("호랑이띠\n"); break;
	case 7:printf("토끼띠\n"); break;
	case 8:printf("용띠\n"); break;
	case 9:printf("뱀띠\n"); break;
	case 10:printf("말띠\n"); break;
	case 11:printf("양띠\n"); break;
	}
	/*
	break문의 역할
		switch~case문을 빠져나가는 역할
		실행문의 마지막에 반드시 써줘야 함
*/
}
