//[��������01]
/*
# include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("ù ��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &c);

	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);
}
*/
//[��������02]
/*
#include <stdio.h>

int main()
{
	int a, b;
	int result;
	int k;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &a); // scanf(����, �������ּ�)
	printf("<1>���� <2>���� <3>���� <4>������ ==> ");
	scanf_s("%d", &k);
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
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
//[��������03]
/*
#include <stdio.h>

int main()
{
	int a, b;
	int result;
	char k;

	printf("ù��° ����� �� ==> ");
	scanf_s("%d", &a);
	printf("+ - * / % ==> ");
	scanf_s(" %c", &k, 1); //// 1�� ���ڸ� ������ ������ ũ�⸦ �ǹ�
	printf("�ι�° ����� �� ==> ");
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
			printf(" 0���� ������ �ȵ˴ϴ�. \n");
	}

	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf(" %d  %%  %d  =  %d \n", a, b, result);
		}
		else
			printf(" 0���� ������ ������ ���� �ȵ˴ϴ�. \n");
	}
}
*/
//[��������04]
/*
#include <stdio.h>

int main()
{
	int data;

	printf("������ �Է��ϼ��� ==> ");
	scanf_s("%d", &data);

	printf("10���� ==> %d \n", data);
	printf("16���� ==> %X \n", data);
	printf("8���� ==> %o \n", data);
}
*/
//[��������05]
//[��������06]
/*
#include <stdio.h>

int main()
{
	printf("int ���� ũ��\t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int ���� ũ��\t\t ==> %d\n", sizeof(unsigned int));
	printf("short ���� ũ��\t\t\t ==> %d\n", sizeof(short));
	printf("unsigned short ���� ũ��\t ==> %d\n", sizeof(unsigned short));
	printf("long int ���� ũ��\t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int ���� ũ��\t ==> %d\n", sizeof(unsigned long int));
	printf("float ���� ũ��\t\t\t ==> %d\n", sizeof(float));
	printf("double ���� ũ��\t\t ==> %d\n", sizeof(double));
	printf("long double ���� ũ��\t\t ==> %d\n", sizeof(long double));
	printf("char ���� ũ��\t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char ���� ũ��\t\t ==> %d\n", sizeof(unsigned char));
}
*/
//[��������07]
//[��������08]
/*
#include <stdio.h>

int main()
{
	float a, b;
	float result;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &a);
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
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
//[��������09]
/*
#include <stdio.h>
int main()
{
	int money, c500, c100, c50, c10;

	printf(" ## ��ȯ�� ���� ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	printf("\n �����¥�� ==> %d �� \n", c500);
	printf(" ���¥��   ==> %d �� \n", c100);
	printf(" ���ʿ�¥�� ==> %d �� \n", c50);
	printf(" �ʿ�¥��   ==> %d �� \n", c10);
	printf(" �ٲ��� ���� �ܵ� ==> %d �� \n", money);
}
*/
//[��������10]
//[��������11]
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %c", &ch, 1);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);

	if (ch == '-')
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);

	if (ch == '*')
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);

	if (ch == '/')
		printf("%d / %d = %f �Դϴ�. \n", a, b, a / (float)b);

	if (ch == '%')
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
}
*/
//[��������12]
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %c", &ch, 1);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);
	else if (ch == '-')
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
	else if (ch == '*')
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
	else if (ch == '/')
		printf("%d / %d = %f �Դϴ�. \n", a, b, a / (float)b);
	else if (ch == '%')
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
	else
		printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
}
*/
//[��������13]
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf_s("%d %c %d", &a, &ch, 1, &b); //scanf_s���������

	switch (ch)
	{
	case '+':
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d �Դϴ�. \n", a, b, a / b);
		break;
	case '%':
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
	}
}
*/
//[��������14]
//[��������15]
//[��������16]
//[��������17]
/*
#include <stdio.h>

int main()
{
	int start, end;
	int basu, i;
	int hap = 0;

	printf("�հ��� ���۰� ==> ");
	scanf_s("%d", &start);
	printf("�հ��� ���� ==> ");
	scanf_s("%d", &end);
	printf("��� ==> ");
	scanf_s("%d", &basu);

	i = start;
	while (i <= end)
	{
		if (i % basu == 0)
			hap = hap + i;
		i++;
	}
	printf("%d���� %d������ %d����� �հ� ==> %d\n", start, end, basu, hap);
}
*/
//[��������18]
#include <stdio.h>
/*
int main()
{
	char str[100];
	char ch;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("���ڿ��� �Է�(100�� �̳�) : ");
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

	printf("�빮�� %d��, �ҹ��� %d��, ���� %d��\n", upper_cnt, lower_cnt, digit_cnt);
}
*/
//[��������19]
/*
#include <stdio.h>

int main()
{
	char str[100];
	char ch;

	int i, k;
	int star;

	printf("���ڸ� ���� �� �Է� : ");
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
//[��������20]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	char tt[100];
	int count, i;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		tt[i] = ss[count - (i + 1)];
	}
	tt[count] = '\0';

	printf("������ �Ųٷ� ��� ==> %s \n", tt);
}
*/
//[��������21]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char in[50], out[50];
	int i, len;
	int diff = 'a' - 'A';

	printf(" ���� �Է� : ");
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

	printf(" ��ȯ�� ���� =>%s \n", out);
}
*/
//[��������22]
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
//[��������23]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char ch1, ch2;
	int i;

	printf("���� ���ڸ� �Է� : ");
	gets(str);

	printf("���� ���ڿ� ���ο� ���� : ");
	scanf_s("%c %c", &ch1, 1, &ch2);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ch1)
			str[i] = ch2;
	}

	printf("��ȯ�� ��� ==> %s \n", str);
}
*/
//[��������24]
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	int count, i;
	char* p;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	p = ss;

	printf("������ �Ųٷ� ��� ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1)));
	}
	printf("\n");
}
*/
//[��������25]
/*
#include <stdio.h>

int main()
{
	int a, b, tmp;
	int* p1, * p2;

	printf("a �� �Է� : ");
	scanf_s("%d", &a);
	printf("b �� �Է� : ");
	scanf_s("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("�ٲ� �� a�� %d, b�� %d \n", a, b);
}
*/
//[��������26]
/*
#include <stdio.h>

int main()
{
	int s[10] = { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8 };
	int tmp;
	int i, k;

	int* p;

	p = s;

	printf("���� �� �迭 s ==> ");
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
	printf("���� �� �迭 s ==> ");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", *(p + i));
	}
	printf("\n");
}
*/
//[��������27]
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

	printf("����ϰ� ���� ���� �Է� : ");
	scanf_s("%d", &input);

	gugu(input);
}
*/
//[��������28]
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

	printf("���ڿ��� �Է�(100�� �̳�) : ");
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
	printf("��ȯ�� ��� ==> %s\n", out);
}

*/
//[��������29]
//[��������30]
//[��������31]
//[��������32]
//[��������33]
//[��������34]
//[��������35]
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

	printf("�̸� --> ");
	scanf_s("%s", p1.name, 15);
	printf("��ȭ��ȣ �Ǵ� �ֹι�ȣ --> ");
	scanf_s("%s", p1.id.jumin, 15);

	printf("\n--- ����ü/����ü ȥ�� Ȱ�� ---\n");
	printf("�̸� ==> %s\n", p1.name);
	printf("��ȭ��ȣ/�ֹι�ȣ ==> %s\n", p1.id.phone);
}

//[��������36]
//[��������37]
