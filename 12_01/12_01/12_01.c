# include <stdio.h>
# include <string.h>

int main()
{
	/*
	char name[10]; //학생 이름, 국어 점수, 영어 점수, 평균 점수 변수를 선언한다. 
	int kor;
	int eng;
	float avg;

	printf("이름 : ");//scanf_s("%s", name, 9) 크기는 변수뒤에사용한다. 학생 이름을 입력한다. 널문자를 제외한 최대 9자를 입력할 수 있다.
	scanf_s("%s", name, 9);

	printf("국어점수 : ");//국어 점수를 입력한다. 
	scanf_s("%d", &kor);

	printf("영어점수 : ");
	scanf_s("%d", &eng);

	avg = (kor + eng) / 2.0f;//평균 점수를 계산한다. 

	printf("\n");
	printf("학생이름 ==> %s\n", name);//학생 이름, 국어 점수, 영어 점수, 평균 점수를 계산한다 
	printf("국어점수 ==> %d\n", kor);
	printf("영어점수 ==> %d\n", eng);
	printf("평균점수 ==> %5.1f\n", avg);
	*/
	/*
	struct student{//student 구조체형을 선언한 후 멤버 변수를 선언한다 (학생 이름, 국어 점수, 영어 점수, 수학 점수, 평균 점수).
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;//구조체 변수 s를 선언한다. 

	printf("이름 : ");
	scanf_s("%s", s.name, 9);

	printf("국어점수 : ");
	scanf_s("%d", &s.kor);

	printf("영어점수 : ");
	scanf_s("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n");
	printf("학생이름 ==> %s\n", s.name);
	printf("국어점수 ==> %d\n", s.kor);
	printf("영어점수 ==> %d\n", s.eng);
	printf("평균점수 ==> %5.1f\n", s.avg);
	*/
	/*
	* 구조체의 문법
		맴버 변수 : 구조체 안에서 정의된 변수. 일반적인 변수와 동일한 방법으로 선언
	
	struct 구조체이름{
		멤버변수;
		멤버변수;
		멤버변수;
		멤버변수;
	};
	struct 구조체이름 구조체 변수이름;

	구조체 문법 구조
		구조체형의 마지막은 반드시 ‘ };’로 끝나야 함.
		구조체형을 만들었으면 구조체형의 모양대로 구조체 변수를 선언함.
		구조체 변수는 ‘구조체 변수 이름.멤버 변수 이름’ 형태로 쓰고 일반 변수처럼 사용함
	*/
	//구조체 배열을 사용하지 않은 예
	/*
	char name[3][10];  //학생 이름 배열을 선언한다. 
	int kor[3];
	int eng[3];
	float avg[3];

	int i;

	strcpy_s(name[0], 9, "Kim");//strcpy_s(name[0],9, "Kim") 크기 값은 변수 뒤에 사용한다.(학생 이름, 국어 점수, 영어 점수, 평균 점수).
	kor[0] = 90;
	eng[0] = 80;
	avg[0] = (kor[0]+ eng[0])/2.0f;

	strcpy_s(name[1], 9, "Park");
	kor[1] = 70;
	eng[1] = 60;
	avg[1] = (kor[1] + eng[1]) / 2.0f;

	strcpy_s(name[2], 9, "Lee");
	kor[2] = 50;
	eng[2] = 40;
	avg[2] = (kor[2] + eng[2]) / 2.0f;

	for (i = 0; i < 3; i++)
	{
		printf("학생이름 ==> %s\n", name[i]);
		printf("국어점수 ==> %d\n", kor[i]);
		printf("영어점수 ==> %d\n", eng[i]);
		printf("평균점수 ==> %5.1f\n", avg[i]);
		printf("\n");
	}
	*/
	//구조체 배열을 사용하여 변경
/*
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};
	
	struct student s[3];//구조체 배열 s[3]을 선언한다. 

	int i;

	strcpy_s(s[0].name, 9, "Kim");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;

	strcpy_s(s[1].name, 9, "Park");
	s[1].kor = 70;
	s[1].eng = 60;
	s[1].avg = (s[1].kor + s[1].eng) / 2.0f;

	strcpy_s(s[2].name, 9, "Lee");
	s[2].kor = 50;
	s[2].eng = 40;
	s[2].avg = (s[2].kor + s[2].eng) / 2.0f;

	for (i = 0; i < 3; i++)
	{
		printf("학생이름 ==> %s\n", s[i].name);
		printf("국어점수 ==> %d\n", s[i].kor);
		printf("영어점수 ==> %d\n", s[i].eng);
		printf("평균점수 ==> %5.1f\n", s[i].avg);
		printf("\n");
	}
	*/
struct student {
	char name[10];
	int kor;
	int eng;
	float avg;
};

struct student s;
struct student* p; //구조체 포인터 변수 p를 선언한다. 

p = &s; //포인터 p에 s의 주소를 대입한다. 

printf("이름 : ");
scanf_s("%s", p->name, 9);

printf("국어점수 : ");
scanf_s("%d", &p->kor);

printf("영어점수 : ");
scanf_s("%d", &p->eng);

p->avg = (p->kor + p->eng) / 2.0f;

printf("\n");
printf("학생이름 ==> %s\n", p->name);
printf("국어점수 ==> %d\n", p->kor);
printf("영어점수 ==> %d\n", p->eng);
printf("평균점수 ==> %5.1f\n", p->avg);
	}

