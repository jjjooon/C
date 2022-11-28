# include <stdio.h>

int main()
{
	/*
	union student {//공용체 변수 student를 선언한다. 
		int tot;
		char grade;
	};
	union student u;//공용체 변수 u를 선언한다. 

	u.tot = 300;//공용체 변수의 멤버 변수에 값을 대입한다. 
	u.grade = 'A';
	//u.tot에는 300이라는 값을 넣고, u.grade에 A 를 넣음.
	//300이 들어간 4바이트 중 첫 번째 바이트에 엉뚱한 A(아스키 코드 65)가 들어가면서 이상한 값이 출력됨
	//u.grade에는 나중에 A를 넣었으므로 A(65)로 제대로 출력됨. (나중에 넣은 값만 제대로 출력)

	printf("\n---공용체 활용---\n");
	printf("총점 ==> %d\n", u.tot);//공용체 변수의 멤버 변숫값을 출력한다. 
	printf("등급 ==> %c\n", u.grade);
	*/
	/*
	공용체와 종합경기장의 비교
		공용체 : 하나의 메모리 공간을 다른 종류의 변수가 공용으로 사용하는 것

		union 공용체이름 {
		멤버변수;
		멤버변수;
	};
		union 공용체이름 공용체변수;
*/
	enum week{sun, mon, tue, wed, thu, fri, sat}; //0부터 6까지의 열거형이다. 
	//0은 sun, 1은 mon, 2는 tue, … 등과 같이 의미가 좀더 명확해짐
	//나열한 데이터의 값은 0에서부터 1씩 차례대로 증가함

	enum week ww;//열거형 변수 ww를 선언한다. 

	ww = sat;//변수 ww에 값을 대입한다. 

	if (ww == sun)//ww가 sun(0)인지 여부에 따라 출력한다. 
		printf("오늘은 일요일입니다.\n\n", ww);
	else
		printf("오늘은 일요일이 아닙니다.\n\n", ww);
	/*
	enum 열거체이름 { 
		기호1,기호2, 기호3, ,,,,, }; 

	enum 열거체이름 열거체변수;

	열거형의 이해
		열거형의 형식
		단순히 1, 2, 3, 4, … 와 같은 숫자를 기호로 표현한 것
	*/
}
