# include <stdio.h>

int main()
{
	/*
	printf("100+100"); //���� �Ͽ���+�Ͽ��� 
	printf("\n"); //�ٹٲ�
	//printf( ) �Լ�: ȭ��(�����)�� ū����ǥ(�� ��) ���� ������ ����϶�� �ǹ�
	printf("%d", 100 + 100); //���� �� + �� ����� �̹�
	printf("\n");
	*/
	/*
	ù ��° printf(��100��)�� ����� 100�� ������ 100(�Ͽ���)��.printf()�� ū����ǥ �ȿ� �ִ� ���� ������ ���ڷ� ����Ѵ�.
	�� ��° printf(�� % d��, 100)�� ����� 100�� ������ 100(��)��.����(% d)�� ������ ���ڴ� �״�� ������ �ǹ̸� ���ϱ� �����̴�
	*/
	/*
	Printf() �Լ� ��� �� 
		printf( ) �Լ��� ���� �տ��� %�� �ٴ´�.
		%d�� ����(decimal)�� �ǹ��Ѵ�.
		������ ������ ū����ǥ �ڿ� ������ ����(�Ǵ� ����)�� ������ ���ƾ� �Ѵ�.
	*/
	/*
	printf("%d", 100, 200);//%d(����)�� 1��, ���ڴ� 2���̴�.
	printf("\n");
	printf("%d %d", 100); //%d(����)�� 2��, ���ڴ� 1���̴�. 
	printf("\n");
	*/
	/*
	printf("%d / %d = %d", 100, 200, 0.5);//%d(����)�� 3��, ����(��)�� 3���̴�. ���Ŀ� ���� 0.5,�� 0�� ��� 
	printf("\n");

	printf("%d / %d = %f", 100, 200, 0.5);
	printf("\n");
	*/
	//printf( )���� ����� �� �ִ� ��ǥ���� ������ ����
	/*
	����������  : %d(10����), %x(16��������),%o(8��������)
	�Ǽ�������  : %f(ª�� �Ǽ�:�Ҽ��� �̸� 6�ڸ�), %lf(�� �Ǽ�:�Ҽ��� �̸� 17�ڸ�)
	����������  : %c(�ѱ��� : ''�� �ѷ��ξ� �Ѵ�) ��==>'a', '��'
	���ڿ�������  : %s(��������(�ѱ����̻�) : ""�� �ѷ��ξ� �Ѵ�) ��==>"abcd", "��������"
	*/
	/*
	printf("%d / %d = %f\n", 100, 200, 0.5);//���� 2���� �Ǽ� 1���� ����Ѵ�. 
	printf("%c %c\n", 'a', 'K');//���� 2���� ����Ѵ�. 
	printf("%s %s\n", "�ȳ�", "c���");//���ڿ� 2���� ����Ѵ�.  
	*/
	/*
	printf("%d\n", 123);
	printf("%5d\n", 123);//5ĭ ������ ��� �����Ͽ� ���
	printf("%05d\n", 123);//5ĭ ������ ������� 0����ä���� ��� �����Ͽ� ���

	printf("%f\n",123.45);//�Ǽ� �Ҽ��� �̸� 6�ڸ��� ���
	printf("%7.1f\n", 123.45);//���� 7�ڸ� �Ǽ��� �Ҽ��� �̸� 1�ڸ��� ���
	printf("%7.3f\n", 123.45);//���� 7�ڸ� �Ǽ��� �Ҽ��� �̸� 3�ڸ��� ���

	printf("%s\n", "Basic-C");
	printf("%10s\n", "Basic-C"); //10ĭ ������ ��� �����Ͽ� ���
	*/
	
	printf("\n�ٹٲ�\n����\n");
	printf("\t��Ű\t����\n");
	printf("�̰��� \r����ϴ�.\n");
	printf("\a\a\a�߼Ҹ� 3��\n");
	printf("���ڰ� \"����\"�Ǵ� ȿ��\n");
	printf("\\\\\\�������� ���� ���\n");
	//�پ��� ����� ���� ����
	//���� ���ڴ� �տ� �ݵ�� �� \���� �ٴ´�.�̷� ���ڸ� Ż��(escape) ���ڶ���� �Ѵ�.

}