# include <stdio.h>
# include <string.h>

int main()
{
	/*
	char name[10]; //�л� �̸�, ���� ����, ���� ����, ��� ���� ������ �����Ѵ�. 
	int kor;
	int eng;
	float avg;

	printf("�̸� : ");//scanf_s("%s", name, 9) ũ��� �����ڿ�����Ѵ�. �л� �̸��� �Է��Ѵ�. �ι��ڸ� ������ �ִ� 9�ڸ� �Է��� �� �ִ�.
	scanf_s("%s", name, 9);

	printf("�������� : ");//���� ������ �Է��Ѵ�. 
	scanf_s("%d", &kor);

	printf("�������� : ");
	scanf_s("%d", &eng);

	avg = (kor + eng) / 2.0f;//��� ������ ����Ѵ�. 

	printf("\n");
	printf("�л��̸� ==> %s\n", name);//�л� �̸�, ���� ����, ���� ����, ��� ������ ����Ѵ� 
	printf("�������� ==> %d\n", kor);
	printf("�������� ==> %d\n", eng);
	printf("������� ==> %5.1f\n", avg);
	*/
	/*
	struct student{//student ����ü���� ������ �� ��� ������ �����Ѵ� (�л� �̸�, ���� ����, ���� ����, ���� ����, ��� ����).
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;//����ü ���� s�� �����Ѵ�. 

	printf("�̸� : ");
	scanf_s("%s", s.name, 9);

	printf("�������� : ");
	scanf_s("%d", &s.kor);

	printf("�������� : ");
	scanf_s("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n");
	printf("�л��̸� ==> %s\n", s.name);
	printf("�������� ==> %d\n", s.kor);
	printf("�������� ==> %d\n", s.eng);
	printf("������� ==> %5.1f\n", s.avg);
	*/
	/*
	* ����ü�� ����
		�ɹ� ���� : ����ü �ȿ��� ���ǵ� ����. �Ϲ����� ������ ������ ������� ����
	
	struct ����ü�̸�{
		�������;
		�������;
		�������;
		�������;
	};
	struct ����ü�̸� ����ü �����̸�;

	����ü ���� ����
		����ü���� �������� �ݵ�� �� };���� ������ ��.
		����ü���� ��������� ����ü���� ����� ����ü ������ ������.
		����ü ������ ������ü ���� �̸�.��� ���� �̸��� ���·� ���� �Ϲ� ����ó�� �����
	*/
	//����ü �迭�� ������� ���� ��
	/*
	char name[3][10];  //�л� �̸� �迭�� �����Ѵ�. 
	int kor[3];
	int eng[3];
	float avg[3];

	int i;

	strcpy_s(name[0], 9, "Kim");//strcpy_s(name[0],9, "Kim") ũ�� ���� ���� �ڿ� ����Ѵ�.(�л� �̸�, ���� ����, ���� ����, ��� ����).
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
		printf("�л��̸� ==> %s\n", name[i]);
		printf("�������� ==> %d\n", kor[i]);
		printf("�������� ==> %d\n", eng[i]);
		printf("������� ==> %5.1f\n", avg[i]);
		printf("\n");
	}
	*/
	//����ü �迭�� ����Ͽ� ����
/*
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};
	
	struct student s[3];//����ü �迭 s[3]�� �����Ѵ�. 

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
		printf("�л��̸� ==> %s\n", s[i].name);
		printf("�������� ==> %d\n", s[i].kor);
		printf("�������� ==> %d\n", s[i].eng);
		printf("������� ==> %5.1f\n", s[i].avg);
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
struct student* p; //����ü ������ ���� p�� �����Ѵ�. 

p = &s; //������ p�� s�� �ּҸ� �����Ѵ�. 

printf("�̸� : ");
scanf_s("%s", p->name, 9);

printf("�������� : ");
scanf_s("%d", &p->kor);

printf("�������� : ");
scanf_s("%d", &p->eng);

p->avg = (p->kor + p->eng) / 2.0f;

printf("\n");
printf("�л��̸� ==> %s\n", p->name);
printf("�������� ==> %d\n", p->kor);
printf("�������� ==> %d\n", p->eng);
printf("������� ==> %5.1f\n", p->avg);
	}

