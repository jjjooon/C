# include <stdio.h>

int main()
{
	/*
	int aa[3][4];//---2���� �迭�� �����Ѵ�

	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;//�� ��ҿ� ���� �����Ѵ�. 
	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
	aa[2][0] = 9; aa[2][1] =10; aa[2][2] =11; aa[2][3] =12;

	printf("aa[0][0]���� aa[2][3]���� ���\n");

	printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);//�迭�� ������ ����Ѵ�. 
	printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
	printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);
	*/
	/*
	2���� �迭�� �⺻ ����
		2���� �迭�� 1���� �迭�� ���� �� ������ ��
		�� ���� ÷�� ���
		int aa[��][��] : �������迭
		int aa[��] : �������迭
*/
	/*
	int aa[3][4];//2���� �迭�� ÷�� ������ �����Ѵ�. 
	int i, k;
	int val = 1;//�迭�� �� ���� �ʱ�ȭ�Ѵ� 

	for (i = 0; i < 3; i++)//�ٱ� for���� �� �� �ݺ��Ѵ�. ��, �� ÷�ڰ� �� ������ ����ȴ�
	{
		for (k = 0; k < 4; k++)//���� for���� �� �� �ݺ��Ѵ�. ��, �� ÷�ڰ� �� ������ ����ȴ�
		{
			aa[i][k] = val;
			val++;//�迭�� val ���� �Է��� �� 1 ������Ų��. 
		}
	}

	printf("aa[0][0]���� aa[2][3]���� ���\n");

	for (i = 0; i < 3; i++)//�Է°� ������ �������� 12ȸ ����Ѵ�. 
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d",aa[i][k]);
		}
		printf("\n");//�� ���� ����� �� ���� �ѱ��. 
	}
	*/
	int aa[3][4] = //2���� �迭�� �ʱ�ȭ�Ѵ�. 
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int i, k;
	printf("aa[0][0]���� aa[2][3]���� ���\n");

	for (i = 0; i < 3; i++)//2���� �迭�� ����� ���� ����Ѵ�. 
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", aa[i][k]);
		}
		printf("\n");
	}
	/*
	2���� �迭�� �ʱ�ȭ
		2���� �迭�� �����ϴ� ���ÿ� �� �ʱ�ȭ�ϱ�
*/
}