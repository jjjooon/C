# include <stdio.h>
# include<string.h>//strcpy( ) 함수로 문자열 대입(문자 관련 함수 사용시 # include <string.h> (헤더 파일) 삽입
//strlen(), strcmp(), strcat() ==> 문자열 관련 함수


int main()
{
	/*
	char str1[10];//문자형 배열 str1과 str2를 선언한다. 
	char str2[10];
	char str3[10]="CookBook";//문자형 배열 str3을 선언함과 동시에 문자열을 대입한다. 

	strcpy_s(str1, 10, "Basic-C");
	//strcpy(str1, "Basic-C");사용시 솔루션탐색기/ 파일/속성/ 마우스 오른쪽 속성에서SDL검사 예를 아니요로
	//또는 strcpy_s(str1, 10, "Basic-C"); str1의 데이터크기 10을 넣는다
	strcpy_s(str2, 10, str3);//str3의 값을 str2에 복사한다.

	printf("str1==>%s\n", str1);//문자형 배열 str1, str2, str3을 출력한다.
	printf("str2==>%s\n", str2);
	printf("str3==>%s\n", str3);
	*/
	/*
	여러 글자가 모인 문자열과 배열
		문자열의 기본 형식
			문자열은 한 문자가 여러 개 이어진 것.
				‘Hanbit’이라는 글자의 저장 구조
		    널(null) 문자 : \0
				문자열의 끝을 알려주는 역할
				화면에 출력되지 않음
			문자열은 문자 배열을 사용
			    char str[7];
			    str = str[0] str[1] str[2] str[3] str[4] str[5] str[6]
			strcpy( ) 함수로 문자열 대입
				str 배열에 ‘Basic’이라는 글자 5개의 문자열 대입
				strcpy(str,"Basic)
		*/
	char str[10] = "0123456789";//열 자리의 str 배열에 글자 10개를 대입한다. 

	printf("str==>%s\n", str);//str의 내용을 출력한다.  
	//(비정상출력:쓰레기값(원래 데이터값, 의미없는값)포함 출력 ==>널 문자가 없기 때문에 출력시 문제 발생)

	str[0] = 'I';//str 배열에 글자 6개와 널 문자를 입력한다.
	str[1] = 'T';
	str[2] = 'C';
	str[3] = 'o';
	str[4] = 'o';
	str[5] = 'k';
	str[6] = '\0';
	printf("str==>%s\n", str);//str의 내용을 출력한다. (정상출력) 
	printf("str[7]==>%c\n", str[7]);//str[7]의 한 글자(쓰레기값)를 출력한다. 
	printf("str[50]==>%c\n", str[50]);//str[50]의 한 글자(이상한 값)를 출력한다. 
}
