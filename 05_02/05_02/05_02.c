# include <stdio.h>

int main()
{
	/*
	int a = 75;

	if (a > 50)
		if (a < 100)//���̸�(a�� 50���� ũ��) �����Ѵ�. 
		{
			printf("50���� ũ�� 100���� �۱���.\n"); //���̰�(a�� 50���� ũ�� a�� 100���� ������) �����Ѵ�.
		}
		else
		{
			printf("100���� ũ����\n");//���̰�(a�� 50���� ũ�� 100���� ũ�ų� ������) �����Ѵ�.
		}
	else
	{
		printf("50���� �۱���.\n");//�����̸�(a�� 50���� �۰ų� ������) �����Ѵ�. 
	}
	*/
	/*
	��ø if��
		if���� �� �� �����ϰ� �� ����� �ٽ� �ٸ� if���� �����ϴ� ��
		�����ϸ� ����� ����Ͽ� ���ǽ��� ��Ȯ�� �ϴ� ���� ����
*/
	/*
	int a;

	printf("������ �Է��ϼ���.\n");//������ �Է��Ѵ�(100�� ����). 
	scanf_s("%d", &a);

	if (a >= 90)//�Է��� ������ 90�� �̻��̸� A ������ ����Ѵ�. 
		printf("A");
	else
		if (a >= 80) //�Է��� ������ 80�� �̻��̸� B ����, 70�� �̻��̸� C ����, 60�� �̻��̸� D ������ ����Ѵ�
			printf("B");
		else
			if (a >= 70)
				printf("C");
			else
				if (a >= 60)
					printf("D");
				else
					printf("F"); //60�� �̸��̸� F ������ ����Ѵ�. 
	printf("�����Դϴ�");
	*/
	/*
	int a;

	printf("������ �Է��ϼ���.\n");
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
	printf("�����Դϴ�");
	*/
	/*
	int a;

	printf("1~4�߿� �����ϼ���:");
	scanf_s("%d", &a);

	switch (a)//�Է��� a ���� ���� �б��Ѵ�. 
	{
	case 1://a�� 1�̸� �Ʒ����� �����ϰ� �״����࿡�� switch ����� ����������
		printf("1�� �����ߴ�.\n");
		break;
	case 2:
		printf("2�� �����ߴ�.\n");
		break;
	case 3:
		printf("3�� �����ߴ�.\n");
		break;
	case 4:
		printf("4�� �����ߴ�.\n");
		break;

	default://a�� 1, 2, 3, 4 �� �ƹ��͵� �ش���� ���� �� �����Ѵ�. 
		printf("�̻��Ѱ� �����ߴ�.\n");
	}
	*/
	/*
	switch~case��
		���� ���� �̿��� �ٸ� ������ ������ ��쿡 ���
		���� �� �� �ϳ��� �����Ѵٴ� �ǹ̷� ���� �б�
		���ǰ�(������)�� ���� case�� ����
*/
	int year;

	printf("����⵵�� �Է��ϼ���:");
	scanf_s("%d", &year);

	switch (year % 12)
	{
	case 0:printf("�����̶�\n"); break;
	case 1:printf("�߶�\n"); break;
	case 2:printf("����\n"); break;
	case 3:printf("������\n"); break;
	case 4:printf("���\n"); break;
	case 5:printf("�Ҷ�\n"); break;
	case 6:printf("ȣ���̶�\n"); break;
	case 7:printf("�䳢��\n"); break;
	case 8:printf("���\n"); break;
	case 9:printf("���\n"); break;
	case 10:printf("����\n"); break;
	case 11:printf("���\n"); break;
	}
	/*
	break���� ����
		switch~case���� ���������� ����
		���๮�� �������� �ݵ�� ����� ��
*/
}
