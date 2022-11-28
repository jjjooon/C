//[예제모음01]
/*
# include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("첫 번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("두 번째 숫자를 입력하세요 : ");
	scanf_s("%d", &b);

	printf("세 번째 숫자를 입력하세요 : ");
	scanf_s("%d", &c);

	printf("네 번째 숫자를 입력하세요 : ");
	scanf_s("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);
}
*/
//[예제모음02]
/*
#include <stdio.h>

int main()
{
	int a, b;
	int result;
	int k;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &a); // scanf(서식, 변수의주소)
	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
	scanf_s("%d", &k);
	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &b);

	if (k == 1) {
		result = a + b;
		printf(" %d  +  %d  =  %d \n", a, b, result);
	}

	if (k == 2) {
		result = a - b;
		printf(" %d  -  %d  =  %d \n", a, b, result);
	}

	if (k == 3) {
		result = a * b;
		printf(" %d  *  %d  =  %d \n", a, b, result);
	}

	if (k == 4) {
		result = a / b;
		printf(" %d  /  %d  =  %d \n", a, b, result);
	}
}

*/
//[예제모음03]
/*
#include <stdio.h>

int main()
{
	int a, b;
	int result;
	char k;

	printf("첫번째 계산할 값 ==> ");
	scanf_s("%d", &a);
	printf("+ - * / % ==> ");
	scanf_s(" %c", &k, 1); //// 1은 문자를 저장할 버퍼의 크기를 의미
	printf("두번째 계산할 값 ==> ");
	scanf_s("%d", &b);

	if (k == '+') {
		result = a + b;
		printf(" %d  +  %d  =  %d \n", a, b, result);
	}

	if (k == '-') {
		result = a - b;
		printf(" %d  -  %d  =  %d \n", a, b, result);
	}

	if (k == '*') {
		result = a * b;
		printf(" %d  *  %d  =  %d \n", a, b, result);
	}

	if (k == '/') {
		if (b != 0) {
			result = a / b;
			printf(" %d  /  %d  =  %d \n", a, b, result);
		}
		else
			printf(" 0으로 나누면 안됩니다. \n");
	}

	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf(" %d  %%  %d  =  %d \n", a, b, result);
		}
		else
			printf(" 0으로 나누면 나머지 값이 안됩니다. \n");
	}
}
*/
//[예제모음04]
/*
#include <stdio.h>

int main()
{
	int data;

	printf("정수를 입력하세요 ==> ");
	scanf_s("%d", &data);

	printf("10진수 ==> %d \n", data);
	printf("16진수 ==> %X \n", data);
	printf("8진수 ==> %o \n", data);
}
*/
//[예제모음05]
//[예제모음06]
/*
#include <stdio.h>

int main()
{
	printf("int 형의 크기\t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int 형의 크기\t\t ==> %d\n", sizeof(unsigned int));
	printf("short 형의 크기\t\t\t ==> %d\n", sizeof(short));
	printf("unsigned short 형의 크기\t ==> %d\n", sizeof(unsigned short));
	printf("long int 형의 크기\t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int 형의 크기\t ==> %d\n", sizeof(unsigned long int));
	printf("float 형의 크기\t\t\t ==> %d\n", sizeof(float));
	printf("double 형의 크기\t\t ==> %d\n", sizeof(double));
	printf("long double 형의 크기\t\t ==> %d\n", sizeof(long double));
	printf("char 형의 크기\t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char 형의 크기\t\t ==> %d\n", sizeof(unsigned char));
}
*/
//[예제모음07]
//[예제모음08]
/*
#include <stdio.h>

int main()
{
	float a, b;
	float result;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &a);
	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &b);

	result = a + b;
	printf(" %5.2f + %5.2f = %5.2f \n", a, b, result);
	result = a - b;
	printf(" %5.2f - %5.2f = %5.2f \n", a, b, result);
	result = a * b;
	printf(" %5.2f * %5.2f = %5.2f \n", a, b, result);
	result = a / b;
	printf(" %5.2f / %5.2f = %5.2f \n", a, b, result);
	result = (int)a % (int)b;
	printf(" %d %% %d = %d \n", (int)a, (int)b, (int)result);
}
*/
//[예제모음09]
/*
#include <stdio.h>
int main()
{
	int money, c500, c100, c50, c10;

	printf(" ## 교환할 돈은 ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	printf("\n 오백원짜리 ==> %d 개 \n", c500);
	printf(" 백원짜리   ==> %d 개 \n", c100);
	printf(" 오십원짜리 ==> %d 개 \n", c50);
	printf(" 십원짜리   ==> %d 개 \n", c10);
	printf(" 바꾸지 못한 잔돈 ==> %d 원 \n", money);
}
*/
//[예제모음10]
//[예제모음11]
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("계산할 연산자를 입력하세요 : ");
	scanf_s(" %c", &ch, 1);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다. \n", a, b, a + b);

	if (ch == '-')
		printf("%d - %d = %d 입니다. \n", a, b, a - b);

	if (ch == '*')
		printf("%d * %d = %d 입니다. \n", a, b, a * b);

	if (ch == '/')
		printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);

	if (ch == '%')
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
}
*/
//[예제모음12]
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("계산할 연산자를 입력하세요 : ");
	scanf_s(" %c", &ch, 1);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다. \n", a, b, a + b);
	else if (ch == '-')
		printf("%d - %d = %d 입니다. \n", a, b, a - b);
	else if (ch == '*')
		printf("%d * %d = %d 입니다. \n", a, b, a * b);
	else if (ch == '/')
		printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);
	else if (ch == '%')
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
	else
		printf("연산자를 잘못 입력했습니다. \n");
}
*/
//[예제모음13]
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf_s("%d %c %d", &a, &ch, 1, &b); //scanf_s사용주의점

	switch (ch)
	{
	case '+':
		printf("%d + %d = %d 입니다. \n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d 입니다. \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d 입니다. \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d 입니다. \n", a, b, a / b);
		break;
	case '%':
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
		break;
	default:
		printf("연산자를 잘못 입력했습니다. \n");
	}
}
*/
//[예제모음14]
//[예제모음15]
//[예제모음16]
//[예제모음17]
/*
#include <stdio.h>

int main()
{
	int start, end;
	int basu, i;
	int hap = 0;

	printf("합계의 시작값 ==> ");
	scanf_s("%d", &start);
	printf("합계의 끝값 ==> ");
	scanf_s("%d", &end);
	printf("배수 ==> ");
	scanf_s("%d", &basu);

	i = start;
	while (i <= end)
	{
		if (i % basu == 0)
			hap = hap + i;
		i++;
	}
	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, basu, hap);
}
*/
//[예제모음18]
#include <stdio.h>
/*
int main()
{
	char str[100];
	char ch;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("문자열을 입력(100자 이내) : ");
	scanf_s("%s", str, 100);

	i = 0;
	do {
		ch = str[i];

		if (ch >= 'A' && ch <= 'Z')
			upper_cnt++;
		if (ch >= 'a' && ch <= 'z')
			lower_cnt++;
		if (ch >= '0' && ch <= '9')
			digit_cnt++;

		i++;
	} while (ch != '\0');

	printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_cnt, lower_cnt, digit_cnt);
}
*/
//[예제모음19]
/*
#include <stdio.h>

int main()
{
	char str[100];
	char ch;

	int i, k;
	int star;

	printf("숫자를 여러 개 입력 : ");
	scanf_s("%s", str, 100);

	i = 0;
	ch = str[i];
	while (ch != '\0') {
		star = (int)ch - 48;

		for (k = 0; k < star; k++)
			printf("*");

		printf("\n");
		i = i + 1;
		ch = str[i];
	}
}
*/
//[예제모음20]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	char tt[100];
	int count, i;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		tt[i] = ss[count - (i + 1)];
	}
	tt[count] = '\0';

	printf("내용을 거꾸로 출력 ==> %s \n", tt);
}
*/
//[예제모음21]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char in[50], out[50];
	int i, len;
	int diff = 'a' - 'A';

	printf(" 문자 입력 : ");
	gets(in);

	len = strlen(in);

	for (i = 0; i < len; i++)
	{
		if (('A' <= in[i]) && (in[i] <= 'Z'))
			out[i] = in[i] + diff;
		else if (('a' <= in[i]) && (in[i] <= 'z'))
			out[i] = in[i] - diff;
		else
			out[i] = in[i];
	}
	out[i] = '\0';

	printf(" 변환된 문자 =>%s \n", out);
}
*/
//[예제모음22]
/*
#include <stdio.h>

int main()
{
	int gugu[9][9];
	int i, k;

	for (i = 0; i < 9; i++)
		for (k = 0; k < 9; k++)
			gugu[i][k] = (i + 1) * (k + 1);

	for (i = 0; i < 9; i++)
	{
		for (k = 0; k < 9; k++)
		{
			printf("%dX%d=%2d  ", k + 1, i + 1, gugu[i][k]);
		}
		printf("\n");
	}
}
*/
//[예제모음23]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char ch1, ch2;
	int i;

	printf("여러 글자를 입력 : ");
	gets(str);

	printf("기존 문자와 새로운 문자 : ");
	scanf_s("%c %c", &ch1, 1, &ch2);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ch1)
			str[i] = ch2;
	}

	printf("변환된 결과 ==> %s \n", str);
}
*/
//[예제모음24]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	int count, i;
	char* p;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	p = ss;

	printf("내용을 거꾸로 출력 ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1)));
	}
	printf("\n");
}
*/
//[예제모음25]
/*
#include <stdio.h>

int main()
{
	int a, b, tmp;
	int* p1, * p2;

	printf("a 값 입력 : ");
	scanf_s("%d", &a);
	printf("b 값 입력 : ");
	scanf_s("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a는 %d, b는 %d \n", a, b);
}
*/
//[예제모음26]
/*
#include <stdio.h>

int main()
{
	int s[10] = { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8 };
	int tmp;
	int i, k;

	int* p;

	p = s;

	printf("정렬 전 배열 s ==> ");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", *(p + i));
	}
	printf("\n");

	for (i = 0; i < 9; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			if (*(p + i) > *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	printf("정렬 후 배열 s ==> ");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", *(p + i));
	}
	printf("\n");
}
*/
//[예제모음27]
/*
#include <stdio.h>

void gugu(int dan)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		printf("%2d X %2d= %2d  \n", dan, i, dan * i);
	}
}

int main()
{
	int input;

	printf("출력하고 싶은 단을 입력 : ");
	scanf_s("%d", &input);

	gugu(input);
}
*/
//[예제모음28]
/*
#include <stdio.h>

char upper(char ch)
{
	return ch - ('a' - 'A');
}

char lower(char ch)
{
	return ch + ('a' - 'A');
}

int main()
{
	char in[100], out[100];
	char ch;
	int i = 0;

	printf("문자열을 입력(100자 이내) : ");
	scanf_s("%s", in, 100);

	do {
		ch = in[i];
		if (ch >= 'A' && ch <= 'Z')
			out[i] = lower(ch);
		else if (ch >= 'a' && ch <= 'z')
			out[i] = upper(ch);
		else
			out[i] = ch;
		i++;
	} while (ch != '\0');

	out[i] = '\0';
	printf("변환된 결과 ==> %s\n", out);
}

*/
//[예제모음29]
//[예제모음30]
//[예제모음31]
//[예제모음32]
//[예제모음33]
//[예제모음34]
//[예제모음35]
#include <stdio.h>

int main()
{
	typedef struct _person {
		char name[10];
		union _id {
			char phone[15];
			char jumin[15];
		} id;
	} person;

	person p1;

	printf("이름 --> ");
	scanf_s("%s", p1.name, 15);
	printf("전화번호 또는 주민번호 --> ");
	scanf_s("%s", p1.id.jumin, 15);

	printf("\n--- 구조체/공용체 혼합 활용 ---\n");
	printf("이름 ==> %s\n", p1.name);
	printf("전화번호/주민번호 ==> %s\n", p1.id.phone);
}

//[예제모음36]
//[예제모음37]
