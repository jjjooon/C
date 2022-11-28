# include <stdio.h>
# include <malloc.h>
# include <string.h>

int main()
{
	/*
	char data[3][100]; //3행 100열의 2차원 배열을 선언한다. 
	int i;

	for (i = 0; i < 3; i++)//세 번 반복한다. 
	{
		printf("%d번째 문자열:", i + 1);
		gets(data[i]); //각 행에 최대 99자의 문자열을 입력한다. 
	}

	printf("\n --입력과 반대로 출력(이차원 배열)--\n");
	for (i = 2; i >= 0; i--) //2행, 1행, 0행의 순서로 마지막 행부터 출력한다. 
	{
		printf("%d : %s\n", i + 1, data[i]);
	}
	*/
	/*
	여러 줄의 문자열 처리 : 2차원 배열
		문자 하나만 저장 : char
		한 줄의 문자열 저장 : 배열 또는 포인터 변수 사용
			char s[10] 또는 char* p로 지정한 후 포인터 변수에 주소 저장
		여러 줄의 문자열 저장 : 다차원 배열
			char s[3][10] : 한 줄에 최대 10자로 이루어진 3줄의 문자열 저장 가능
*/
	char* p[3];//세 칸의 포인터 배열을 선언한다. 
	char imsi[100];//입력값을 저장할 임시 공간 배열이다. 
	int i, size;

	for (i = 0; i < 3; i++)
	{
		printf("%d번째 문자열:", i + 1);
		gets(imsi);//임시 공간에 문자열을 입력한다. 
		size = strlen(imsi);//입력한 문자열의 길이를 계산한다. 
		p[i] = (char*)malloc((sizeof(char) * size) + 1);//---'입력한 길이 + 1(널문자)' 크기의 메모리를 확보한다. 

		strcpy_s(p[i], size+1, imsi);//입력한 문자열(imsi)의 내용을 메모리를 확보한 공간에 복사한다. strcpy_s(p[i], size+1, imsi)
	}
	

	printf("\n --입력과 반대로 출력(이차원 배열)--\n");
	for (i = 2; i >= 0; i--)  
	{
		printf("%d : %s\n", i + 1, p[i]);//포인터 배열에 저장된 문자열을 출력한다. 
	}

	for (i = 0; i < 3; i++)//할당했던 메모리 3개를 운영체제에 반납한다. 
		free(p[i]);
}
