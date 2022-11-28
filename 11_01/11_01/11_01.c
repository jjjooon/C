# include <stdio.h>
# include <malloc.h>//메모리 관련 함수를 사용할 때 malloc.h를 추가해야 한다.

int main()
{
	/*
	int aa[3]; //정수형 배열을 선언한다. 
	int* p; //정수형 포인터 변수를 선언한다. 
	int i, hap = 0;

	for (i = 0; i < 3; i++)//배열에 숫자 3개를 입력한다. 
	{
		printf("%d번째 숫자 : ", i + 1);
		scanf_s("%d", &aa[i]);
	}

	p = aa;//포인터 변수에 배열 aa의 주소를 대입한다. 

	for (i = 0; i < 3; i++)//합계를 누적한다. aa[0]~aa[2]의 합계를 구한다.
		hap = hap + *(p + i);

	printf("입력 숫자의 합 => %d\n", hap);
	*/
	/*
	int aa[10000]; 
	int* p; 
	int i, hap = 0;
	int cnt;

	printf("입력할 개수는? ");
	scanf_s("%d", &cnt);

	for (i = 0; i < cnt; i++)
	{
		printf("%d번째 숫자 : ", i + 1);
		scanf_s("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < cnt; i++)
		hap = hap + *(p + i);

	printf("입력 숫자의 합 => %d\n", hap);
	*/
	/*
	int* p;
	int i, hap = 0;
	int cnt;

	printf("입력할 개수는? ");
	scanf_s("%d", &cnt);//입력할 숫자의 개수를 입력한다. 

	p = (int*)malloc(sizeof(int) * cnt); //입력한 개수만큼 메모리를 확보한다. 

	for (i = 0; i < cnt; i++)//입력한 개수(cnt)만큼 반복한다. 
	{
		printf(" %d 번째 숫자 : ", i + 1);
		scanf_s("%d", p + i); //공간이 확보된 포인터 변수 p에 입력받은 숫자를 입력한다. 배열처럼 &p[i]라고 입력해도 된다.
	}

	for (i = 0; i < cnt; i++)
		hap = hap + *(p + i);//메모리의 실제 값을 합계에 누적한다. 배열처럼 p[i]라고 입력해도 된다.

	printf("입력 숫자의 합 => %d\n", hap);

	free(p);//메모리를 해제한다. 
	*/
	/*동적 메모리 확보 : malloc( )
		동적 메모리 확보의 개념
		프로그램 실행 시 필요한 메모리가 고정되어 있다면? → 문제 없음
		필요한 메모리 크기가 달라져 쓰지도 않는 메모리를 잡아놓으면? → 메모리 낭비 문제 발생
		해결 방법 :  메모리를 미리 잡아두지 않고, 필요할 때마다 확보
			malloc() 함수 사용
		메모리를 동적으로 할당하는 방법
			더하려는 숫자의 개수가 몇 개인지 사용자에게 물어봄
			malloc( ) 함수를 사용하여 메모리 확보
		malloc( ) 함수의 사용 형식
		포인터변수 = (포인터변수의 데이터형*)malloc(포인터변수의 데이터형 크기 * 필요한 크기);
			malloc( ) 함수의 사용 예
		포인터 변수를 int* p;로 선언한 경우
			포인터 변수의 데이터형 : int
			포인터 변수의 데이터형인 int의 크기 : 4
			사용자가 요구한 크기가 3이라면 다음과 같이 표현
				p = (int*)malloc(4 * 3)
			int 형의 크기가 4라는 것을 모른다면 sizeof( ) 함수 사용
				p = (int*)malloc(sizeof(int) * 3)
		malloc( ) 함수 사용 종료
			free( ) 함수 : 사용한 메모리를 운영체제에 반납
			포인터 변수에 널(null) 값을 넣는다는 의미
			포인터 변수는 아무것도 가리키지 않으므로 이 공간을 운영체제에 반납하게 됨.
        */
	/*
	int *p, *s;
	int i, j;

	printf("malloc()함수 사용\n");
	p = (int*)malloc(sizeof(int) * 3);//malloc( ) 함수로 정수형 메모리 3개를 할당한다. (3×4바이트=12바이트).
	for (i = 0; i < 3; i++)
		printf("할당된 곳의초기화 p[%d]==> %d\n", i, p[i]);//포인터 변수 p가 가리키는 곳의 실제 값을 출력한다. 
	free(p);//메모리를 해제한다. 

	printf("\n calloc()함수 사용\n");
	s = (int*)calloc(sizeof(int), 3);//calloc(크기, 개수) 함수로 정수형 메모리 3개를 할당한다
	for (j = 0; j < 3; j++)
		printf("할당된 곳의초기화 s[%d]==> %d\n", j, s[j]);//포인터 변수 s가 가리키는 곳의 실제 값을 출력한다. 
	free(s);
	*/
	/*
	그 외 메모리 관련 함수의 활용
		calloc( ) : 처음부터 0으로 초기화된 메모리를 확보
						사용 형식은 malloc() 함수와 동일
		realloc( ) : 최초로 확보한 메모리의 크기를 변경하는 함수
		포인터변수 = (포인터변수의 데이터형*)relloc(기본포인터, 포인터변수의 데이터형 크기 * 필요한 크기);
  			예) p의 크기(개수)를 10으로 변경할 경우
				p = (int*)realloc(sizeof(int),10);
*/

int* p;
int i, hap = 0;
int cnt = 0;
int data;

p = (int*)malloc(sizeof(int) * 1);
printf("1번째 숫자:");
scanf_s("%d", &p[0]);//첫 번째 값을 입력받고 데이터 개수를 1 증가시킨다. 
cnt++;

for (i = 2;; i++)//두 번째 값부터 계속 입력받는다. 조건이 없으므로 무한 루프가 된다.
{
	printf("%d번째 숫자 : ", i);
	scanf_s("%d", &data);// 바로 위에서 입력된 값을 임시 장소에 저장한다.
	if (data != 0)//입력된 값이 0이 아니면 메모리를 한 칸 추가하고, 0이면 for문을 빠져나간다
		p = (int*)realloc(p, sizeof(int) * i);
	else
		break;
	p[i - 1] = data;//추가한 메모리 공간에 임시 장소의 값을 대입하고, 입력값의 개수를 1 증가시킨다
	cnt++;
}
for (i = 0; i < cnt; i++)//사용자가 입력한 개수(cnt)만큼 반복해서 합계를 구한다. 
	hap = hap + p[i];
printf("입력 숫자 합 ==> %d\n", hap);//합계를 출력한다. 
free(p);//메모리를 해제한다. 
}
