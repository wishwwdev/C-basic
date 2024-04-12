#pragma warning(disable : 4996)
#include<stdio.h> // printf();, scanf();
#include<string.h> // strcpy();
#include<conio.h> // getch();
#include<time.h> // time_t 타입

#include<stdlib.h> // malloc();
// or #include<malloc.h> //malloc();

// #include<iostream.h> // ms 이외의 버전
#include<iostream> // ms버전 -> cout, cin을 사용하기 위함(C언어의 printf(), scanf() 역할)
using namespace std;

void sub(int a, int b) {
	int sum;
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
}


void main()
{
	/*
	printf("HelloC++");
	printf("HelloC++\n");
	// 여러줄 주석

	puts("안녕하세요");
	// puts("안녕하세요\n");
	*/

	/*
	int a, *p;
	a = 10;
	p = &a;

	printf("a = %d \t *p = %d\n", a, *p);

	*p = 100;

	printf("a = %d \t *p = %d\n", a, *p);
	*/

	/*
	int a, b;
	char ch;

	printf("두 정수와 한 문자를 입력하세요 : ");

	scanf("%d %d %c", &a, &b, &ch);

	printf("입력한 값은 %d, %d, %c입니다.\n", a, b, ch);
	*/

	/*
	char name[10];

	printf("이름을 입력하세요 : ");

	scanf("%s", name);

	printf("내 이름은 %s입니다\n", name);
	*/

	/*
	char name[10], bloodType, ch;
	int age;

RE:

	printf("이름 입력 : "); scanf("%s", name);
	printf("나이 입력 : "); scanf("%d", &age); getchar();
	printf("혈액형 입력 : "); scanf("%c", &bloodType); getchar();와 같음 // == blood = getchar(); getchar();

	printf("내 이름은 %s이고, 나이는 %d살이며, 혈액형은 %c입니다!\n", name, age, bloodType);

	printf("게속하시겠습니까?(Y/N) -> ");

	ch = getchar();

	if (ch == 'Y' || ch == 'y')
		goto RE;
	else
		return ;
	*/

	/*
	char ch;
	printf("한 문자 입력 : ");
	ch = getchar(); // == scanf("%c", ch);

	putchar(ch); // == printf("%c", ch);
	printf("\n");
	getch();

	putchar('A');
	putchar('\n'); // printf("\n");
	getch();

	putchar(65);
	putchar('\n');
	getch();

	putchar('A' + 1); // printf("%c", 'A' + 1);
	putchar('\n');
	getch();

	putchar(65 + 1);
	putchardf('\n');
	*/
	
	/*
	char str1[100], str2[100];

	printf("STR1 : "); gets_s(str1);
	printf("STR2 : "); scanf("%s", str2);

	printf("STR1 : %s\n", str1);
	printf("STR2 : %s\n", str2);
	getch();

	puts(str1);
	puts(str2);
	getch();

	puts("오늘은");
	puts("토요일");
	*/

	/*
	// 제어문자(\n 등)
	printf("Date Error!\a");
	puts("Date Error!\a");
	printf("PSB - TV\b");
	putchar(65);
	putchar('\n');
	printf("%d \t %d\n", 50, 100);
	printf("%d \t %c\n", 65, 'A');
	printf("%c \t %d\n", 65, 'A');
	printf("%d \t %c\n", '\0', '\0');
	*/
	
	/*
	// 형식문자 출력 형태 정의하기(%d 등)
	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%05d\n", 123);
	printf("%-5d\n", 123);

	printf("%f\n", 123.45);
	printf("%6.1f\n", 123.45);
	printf("% .1f\n", 12.67); // "% .0f" >> 정수자리 수만 나옴

	printf("%3c\n", 'A');
	printf("%-3c\n", 'A');

	printf("%10s\n", "ABCDEFG");
	printf("%-10s\n", "ABCDEFG");
	*/

	/*
	// 연산자
	int a = 2, b = 2;
	++a; // 전치(전위) 연산자
	b++; // 후치(후위) 연산자
	printf("%d %d\n", a, b);
	
	int a = 2, b = 2, c = -2, i, j, k;

	i = ++a;
	j = b++;
	k = -c;

	printf("%d %d\n", i, a);
	printf("%d %d\n", j, b);
	printf("%d %d\n", k, c);
	*/
	
	/*
	int a = 2, b = -3, c;

	if (!(a + b))
		c = 1;
	else
		c = 0;
	printf("c = %d\n", c);
	*/

	/*
	int a = 3, b, c, d, e;

	e = (b = a + 3), c = b * 2, d = c - 2;
	// d = c - 2, c = b * 2, e = (b = a + 3); >> b = 6, c = 쓰레기값, d = 쓰레기값, e = 6 

	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	printf("e = %d\n", e);
	*/
	
	/*
	int a = 123;
	double b = 123.45;

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof("MBC"));
	printf("%d\n", sizeof(a * 10));
	printf("%d\n", sizeof(a + b));
	*/
	
	/*
	int tot = 100;
	float avg;

	// avg = tot / 3; >> 33
	avg = tot / 3.0; // == avg = (double) tot / 3;  >> 33.333333

	printf("avg = %d\n", avg);
	*/

	/*
	//
	int a = 2, b = 1;

	// 1.
	if (a < b)
		a++;

	// 2.
	if (a >= b)
		a++;
	else
		b++;

	// 3.
	if (a != b)
	{
		a++;
		b++;
	}

	// 4.
	if (a == b)
	{
		a++;
		b++;
	}
	else
	{
		a++;
		b++;
	}
	/*

	/* 
	//
	int a = 0;

	if (a > 0)
		puts("양수!");
	else if (a < 0)
		puts("음수!");
	else
		puts("제로!");
	*/

	/*
	// exam1
	int a, result;

	printf("한 정수 입력 : "); scanf("%d", &a);

	result = a % 2;

	if (result)
		printf("%d은 홀수!\n", a);
	else
		printf("%d은 짝수!\n", a);
	*/

	/*
	// exam2
	char ch;
	int result;

	printf("한 문자 입력 : "); scanf("%c", &ch);

	result = ch / 'a'; // 알아서 아스크코드로 바꿔주기때문에 굳이 숫자로 적을 필요없음

	if (result)
		printf("%c는 소문자! %c의 아스키코드는 %d!\n", ch, ch, ch);
	else 
		printf("%c는 대문자! %c의 아스키코드는 %d!\n", ch, ch, ch);
	*/
	
	/*
	// If문 vs Switch문
	int a = 2;

	switch (a) // 선택자
	{
		case 1: puts("1 = *"); break; // 1 -> 라벨
		case 2: puts("2 = *"); break;

		case 3: puts("3 = *"); break;
		case 4: puts("4 = *"); break;
		default: puts("1 ~ 4사이의 정수만 입력!\a\a");
	}
	*/

	/*
	// exam3
	int a;

	printf("한 정수 입력 : "); scanf("%d", &a);

	switch (a)
	{
		case 1: printf("%d번은 봄!\n", a); break;
		case 2: printf("%d번은 여름!\n", a); break;
		case 3: printf("%d번은 가을!\n", a); break;
		case 4: printf("%d번은 겨울!\n", a); break;
	}
	*/
	
// exam4
	/*
	int a, result;

	printf("한 정수 입력 : "); scanf("%d", &a);

	result = a % 2;

	switch (result)
	{
		case 0: printf("%d은 짝수!\n", a); break;
		default: printf("%d은 홀수!\n", a);
	}
	*/

// N.6
// for문
	/*
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch + 1)
		printf("%3c", ch);
		printf("\n");

	// >> AAAAAA ··· 무한루프임
	*/
	
// exam1
	/*
	int i, sum = 0;

	for (i = 1; i < 101; i++)
		sum += i;

	printf("1 ~ 100합 : %d", sum);
	*/

	/*
	int i, j, c1 = 0, c2 = 0, c3 = 0;

	for (i = 1; i <= 3; i++)			// 고정, 외부 for문
	{
		c1++;
		for (j = 1; j <= 5; j++)		// 반복, 내부 for문
			{
				c2++;
				c3++;
			}
	}

	printf("%d %d %d\n", c1, c2, c3);
	*/
	
// practice1
	/*
	int a, b, result;

	for (a = 2; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			result = a * b;
			printf("%2d x %d = %-2d", a, b, result);
		}
		printf("\n");
	}
	*/

// practice2
	/*
	int a, b, result;

	for (b = 1; b <= 9; b++)
	{
		for (a = 2; a <= 9; a++)
		{
			result = a * b;
			printf("%2d x %d = %-2d", a, b, result);
		}
		printf("\n");
	}
	*/

// N.7
// while1
	/*
	char ch = 'A';

	while (ch <= 'Z')
	{
		printf("%3c", ch);
		ch++;
	}
	printf("₩n");
	*/

// while2
	/*
	char ch='A';

	do
	}
		printf("%3c", ch);
		ch++;
	} while(ch <= 'Z');

	printf("₩n");
	*/

// while3
	/*
	int i=10, j=5;

	while(i <= 5)
	{
		printf("i = %dWn", ++i);
		j++;
	}
	printf("j = %d₩n",j);
	*/
	
// while4
	/*
	int i=10, j=5;

	do
	{
		printf("i = %d₩n", ++i);
		j++;
	} while(i <= 5);

	printf("j = %d₩n", j);
	*/
	
// exam1
	// for
	/*
	int i, total = 0;

	for (i = 1; i <= 100; i++)
		total += i;

	printf("1 ~ 100까지의 합 : %d\n", total);
	*/
	
	// while
	/*
	int i = 1, total = 0;

	while (int i <= 100)
	{
		total += i++;
	}
	printf("1 ~ 100까지의 합 : %d\n", total);
	*/

	// do~while
	/*
	int i = 1, total = 0;
	
	do
	{
		total += i++;
	} while (i <= 100);

	printf("1 ~ 100까지의 합 : %d\n", total);
	*/

// exam2
	// for
	/*
	int a = 0, b = 0;

	for (int i = 1; i <= 100; i++)
	{
		int result = i % 2;
		result ? a += i : b += i;	// 1 - 삼항연산자
		
		if (result) a += i;			// 2 - if문
		else b += i;
		
		
	}
	printf("1 ~ 100 중 홀수합 : %d\n", a);
	printf("1 ~ 100 중 짝수합 : %d\n", b);
	*/
	
// exam3
	// if, switch
	/*
	int num;

	printf("한 정수 입력 : "); scanf("%d", &num);
	printf("%d의 절댓값 : ", num); getch();

	switch (num < 0) { case 1: num = -num; }

	printf("%d\n", num);
	*/
	
	// if문
	/*
	int num;

	printf("한 정수 입력 : "); scanf("%d", &num);
	printf("%d의 절댓값 : ", num);

	if (num < 0) num = -num;	

	printf("%d\n", num);
	*/

// N.8
// exam1
	// My
	/*
	int a, b, c, result;

	printf("세 정수 입력: "); scanf("%d %d %d", &a, &b, &c);

	
	// 1.
	if (a >= b && a >= c) result = a;
	if (b >= a && b >= c) result = b;
	if (c >= a && c >= b) result = c;

	// 2.
	result = a >= b && a >= c ? a : b >= a && b >= c ? b : c;

	printf("MAX : %d\n", result);
	*/

	// Answer
	/*
	int a, b, c, max;

	printf("첫번째 정수 입력 : "); scanf("%d", &a);
	printf("두번째 정수 입력 : "); scanf("%d", &b);
	printf("세번째 정수 입력 : "); scanf("%d", &c);
	
	// 1.
	if (a >= b && a >= c) max = a;
	else if (b >= a && b >= c) max = b;
	else max = c;
	printf("MAX : %d\n", max);
	
	// 2.
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;

	printf("MAX : %d\n", max);
	*/

// exam2
	/*
	int num1, num2, result;
	char oper;

	printf("첫번째 정수 : "); scanf("%d", &num1); getchar();
	printf("사칙 연산자 : "); scanf("%c", &oper); 
	printf("두번째 정수 : "); scanf("%d", &num2); 

	switch (oper)
	{
		case '+': result = num1 + num2; break;
		case '-': result = num1 - num2; break;
		case '*': result = num1 * num2; break;
		case '/': result = num1 / num2; break;
	}

	printf("%d %c %d = %d\n", num1, oper, num2, result);
	*/
	
// exam3
	/*
	int i = 1, sum = 0, num = 0;

	// for
	for (i = 1; i <= 100; i++)
	{
		int a = i % 7;
		if (!a)
		{
			sum += i;
			num++;
		}
	}

	// while
	while (i <= 100)
	{
		int a = i % 7;
		if (!a)
		{
			sum += i;
			num++;
		}
		i++;
	}

	// do~while
	do
	{
		int a = i % 7;
		if (!a)
		{
			sum += i;
			num++;
		}
		i++;
	} while (i <= 100);
	
	printf("1 ~ 100 중 7의 배수 합 : %d\n", sum);
	printf("1 ~ 100 중 7의 배수 갯수 : %d\n", num);
	*/
	
// exam4
	/*
	int i = 1, result = 0;

	// for문 1개
	for (i = 1; i <= 25; i++)
	{
		result = i % 5;

		printf("%3d", i);
		if (!result) printf("\n");
	}
	
	
	// for문 2개
	int j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++) printf("%3d", result++);
		printf("\n");
	}

	// while문 1개
	while (i <= 25)
	{
		result = i % 5;

		printf("%3d", i++);
		if (!result) printf("\n");
	}

	// while문 2개
	int j = 1;

	while (i <= 5)
	{
		while (j <= 5)
		{
			printf("%3d", result++);
			j++;
		}
		printf("\n");
		j = 1;
		i++;
	}
	*/

// N.9
// array
	/*
	// 1.
	int a[3];
	a[0] = 10;
	a[1] = 20;
	a[2] = 30;

	// 1-1
		int a, b, c;

		a = 10;
		b = 20;
		c = 30;

	// 2.
	int a[3] = { 10, 20, 30 };

	// 2-1
	int a = 10, b = 20, b = 30;

	// 3.
	int i, a[3];

	for (i = 0; i < 3; i++)
	{
		printf("정수 입력 : ");
		scanf("%d", &a[i]);
	}
	printf("받은 정수 : ");
	for (i = 0 ; i < 3; i++) printf("%3d", a[i]);

	// 3-1
	int a, b, c;

	printf("첫번째 정수 : ");
	scanf("%d", &a);
	printf("두번째 정수 : ");
	scanf("%d", &b);
	printf("세번째 정수 : ");
	scanf("%d", &c);
	*/
	
// exam1
	/*
	int arr[3];

	printf("첫번째 정수 입력 : ");  scanf("%d", &arr[0]);
	printf("두번째 정수 입력 : ");  scanf("%d", &arr[1]);
	arr[2] = arr[0] + arr[1];

	printf("%d + %d = %d", arr[0], arr[1], arr[2]);
	*/

// exam2
	/*
	int arr[4];

	printf("첫번째 정수 입력 : ");  scanf("%d", &arr[0]);
	printf("두번째 정수 입력 : ");  scanf("%d", &arr[1]);
	printf("세번째 정수 입력 : ");  scanf("%d", &arr[2]);

	arr[3] = arr[0];
	if (arr[3] < arr[1]) arr[3] = arr[1];
	if (arr[3] < arr[2]) arr[3] = arr[2];
	
	printf("세 정수 중 가장 큰 수는 %d이다.", arr[3]);
	*/
	
// exam3
	/*
	int arr[10];

	for (int j = 0; j < 10; j++)
	{
		printf("%d번째 정수 입력 : ", j + 1);  scanf("%d", &arr[j]);
	};

	printf("받은 정수 : ");
	for (int i = 0; i < 10; i++) printf("%-3d", arr[i]);
	*/

// exam4
	/*
	int i, j, cn = 1, arr[2][5];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d번째 정수 입력 : ", cn);  scanf("%d", &arr[i][j]);
			cn++;
		};
	}

	printf("받은 정수 : ");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 5; j++) printf("%-2d", arr[i][j]);
	*/

// N.10
// Selection Sort
	// 내림차순
	/*
	int arr[5];

	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	*/
	
	// 오름차순
	/*
	int arr[5];

	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	*/

// exam1
	/*
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 정수 입력 : ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\n");
	
	for (int i = 0; i < 9; i++)
		for (int j = i + 1; j < 10; j++)
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

	printf("내림차순 : ");
	for (int i = 0; i < 10; i++) printf("%-3d", arr[i]);
	printf("\n"); getch();

	for (int i = 0; i < 9; i++)
		for (int j = i + 1; j < 10; j++)
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

	printf("오름차순 : ");
	for (int j = 0; j < 10; j++) printf("%-3d", arr[j]);
	*/

// N.11
// pointer
	// 1,
	/*
	float sub(float a, float b)
	{
		float sum;
		sum = a + b;
		a = 10.0;
		b = 20.0;
		return sum;
	}

	void main()
	{
		float a = 5.0, b = 3.0, sum;
		sum = sub(a, b);

		printf("%f + %f = %f", a, b, sum);
	}
	*/
	
	// 2.
	/*
	void sub(float *a, float *b, float *sum)
	{
		*sum = *a + *b;
		*a = 10.0;
		*b = 20.0
	}

	void main()
	{
		float a = 5.0, b = 3.0, sum;
		sub(&a, &b, &sum);

		printf("%f + %f = %f", a, b, sum);
	}
	*/

// exam1
/*
int sub(int a, int b)
{
	int sum = a + b;

	return sum;
}
*/
	/*
	int a, b, sum;

	printf("첫번째 정수 입력 : "); scanf("%d", &a);
	printf("두번째 정수 입력 : "); scanf("%d", &b);

	sum = sub(a, b);

	printf("%d + %d = %d", a, b, sum);
	*/

// exam2
/*
void sub(int *a, int *b, int *sum)
{
	*sum = *a + *b;
}
*/
	/*
	int a, b, sum;

	printf("첫번째 정수 입력 : "); scanf("%d", &a);
	printf("두번째 정수 입력 : "); scanf("%d", &b);
	
	sub(&a, &b, &sum);

	printf("%d + %d = %d", a, b, sum);
	*/

// N.12
// pointer
	// 1.
	/*
	int* p;

	p = 10; // 불가능

	p = 0; // null을 넣은거라고 인식

	p = (int*)200; 
	// 만약 p가 가리키고 있는 주소값이 1000인 상태에서, p = (int*)200; 연산을 할 경우
	// p가 가리키고 있는 주소값은 1200이 됨.		cf) p의 주소값 X, p가 가리키는(가지고) 있는 주소값 O

	// 포인트 연산자는 정수형이기 때문에 강제형변환(cast)을 통해 데이터를 집어 넣을 수 있음

	printf("p = %d\n", p);
	*/
	
	// 2.
	/*
	int arr[3] = { 100, 200, 300 };
	int* pt1, * pt2;

	pt1 = arr; // >> pt1 == &arr[0];
	pt2 = &arr[2];

	printf("pt1 = %u *pt1 = %d &pt1 = %u\n", pt1, *pt1, &pt1);

	pt1 = pt1 + 1;
	// 주소를 하나 더 증가시킨다는 뜻
	// arr[3]은 한 칸에 정수(4byte)가 들어있기 때문에 다음 칸의 주소값은 +4가 되는 것임

	printf("pt1 = %u *pt1 = %d &pt1 = %u\n", pt1, *pt1, &pt1);

	printf("pt2 = %u *pt2 = %d &pt2 = %u\n", pt2, *pt2, &pt2);
	*/
	

// pointer array
	// 1.
	/*
	char name[10], * irum;

	irum = "강호동";	// 정리 : 포인터 변수 = 포인터 상수 >> 가능
	// 문자열은 포인터임
	// 변수에 문자열을 담으면 문자열의 주소값이 변수에 저장되는 것임
	

	name = "홍길동";	// 정리 : 포인터 상수 = 포인터 상수 >> 불가능
	// 포인터 상수는 주소값을 의미함
	// 배열을 포인터 상수에 넣는 방법 >> strcpy(name, "홍길동");	cf) #include<string.h>사용해야함

	printf("난 %s이고 넌 %s이다\n", irum, name);
	*/

	// 2.
	/*
	char* str[3] = { "program", "cobol", "MBC" };

	printf("str[1] = %s\n", str[1]); // >> cobol

	printf("*str[1] = %c\n", *str[1]); // >> c
	// 간접연산자를 통해 데이터로 직접가면 ‘문자’를 받음
	// 간접연산자없이 주소값으로 가면, 해당 주소값부터 null값까지 받음(문자열)	-> 아래 '정리'에서 자세히 설명
	// *(str[1] + 1) >> 만약 str[1]의 주소값이 2000번지라고 가정했을때, 이건 2001번지의 문자를 출력함 cf) 서식문자열로 %c를 사용해야함
	// (str[1] + 2) >> 2002번지부터 null값까지 출력함 cf) 서식문자열로 %s를 사용해야함

	// cf) 괄호 안에서 더해지는 숫자는 Character로 취급 -> 이해안됨!!
	//		: 괄호없이 더해지는 숫자는 그냥 int의 바이트값인 4byte로 인식하여 2004번지가 됨
	//		ex) str[1] + 1 >> 2004번지로 인식

	printf("str[1][1] = %c\n", str[1][1]); // >> c
	*/

	// 3. 배열과 포인터 변수의 표기법
	/*
	// 3-1
	char str[10] = "ABCDEFG";

	printf("%c\n", str[1]); // >> B (문자출력)

	// 3-2
	char* str = "ABCDEFG";

	printf("%c\n", *(str + 1)); // >> B (문자출력)
	printf("%s\n", (str + 1)); // >> BCDEFG (1001번지, 문자열출력, 서식문자열로 %s를 사용해야함)

	// 배열에서의 str[1] == 포인터 변수에서의 *(str + 1) >> B만 출력 (해당 주소값의 데이터 하나만)
	// (str + 1) >> 해당 주소값부터 null까지(문자열 출력)
	
	// 정리 : 간접연산자 O -> 해당 주소 안의 데이터를 직접 가리키는 거라 해당 데이터만 의미(문자로 출력됨)
	//		  간접연산자 X -> 해당 주소값를 가리킴(주소값 안의 데이터가 null인 주소값까지 -> 문자열로 출력됨)
	*/

// N.13
// 구조체(structure)
	/*
	// struct Style s;  C   : struct를 쓸 때마다 적어줘야함.
	// Style s;         C++ : struct는 처음 정의할 때만 씀임.

	Style s = { "홍길동", 10, 20, 30 };
	int a = 1;

	s.hip = 33; // 구조체 값 변경방법
	scanf("%d", &s.hip); // 만약 s.name했을 경우에는 번지연산자 안써도됨(문자열은 포인터라 s.name의 값은 주소값임)

	// 만약 s가 포인터변수일 경우 값 변경방법 
	// ex) Style *s = { "홍길동", 10, 20, 30 };
	// s->hip = 33; 
	// scanf("%d", &s->hip);
	*/
	
// exam1
	// (1) 
	/*
	Style s = { "홍길동", 10, 20, 30 };

	printf("이름 : %s\n가슴 : %d\n허리 : %d\n힙   : %d\n", s.name, s.chest, s.waist, s.hip);
	*/

	// (2)
	/*
	Style s = { "홍길동", 10, 20, 30 };

	strcpy(s.name, "김철수"); // s.name(포인터)와 "김철수"(포인터)는 모두 포인터이기 때문에(주소값가짐) strcpy()을 사용하여 값을 넣어줌 
	s.chest = 40;					※ #include<strinf.h> 사용해야함
	s.waist = 50;
	s.hip = 60;

	printf("이름 : %s\n가슴 : %d\n허리 : %d\n힙   : %d\n", s.name, s.chest, s.waist, s.hip);
	*/
	
	// (3)
	/*
	Style s;

	printf("이름 : "); scanf("%s", s.name);
	printf("가슴 : "); scanf("%d", &s.chest);
	printf("허리 : "); scanf("%d", &s.waist);
	printf("힙   : "); scanf("%d", &s.hip);

	printf("이름 : %s\n가슴 : %d\n허리 : %d\n힙   : %d\n", s.name, s.chest, s.waist, s.hip);
	*/

	// (4)
	/*
	Style arr[5];

	for (int i = 0; i < 5; i++)
	{
		printf("%d.\n", i + 1);
		printf("이름 : "); scanf("%s", arr[i].name);
		printf("가슴 : "); scanf("%d", &arr[i].chest);
		printf("허리 : "); scanf("%d", &arr[i].waist);
		printf("힙   : "); scanf("%d", &arr[i].hip);
	}
	getch();
	printf("\n");

	for (int j = 0; j < 5; j++)
	{
		printf("%d번째 배열\n", j + 1);
		printf("이름 : %s\n가슴 : %d\n허리 : %d\n힙   : %d\n", arr[j].name, arr[j].chest, arr[j].waist, arr[j].hip);
	}
	*/

	// (5)
	/*
	Style arr[5], temp;
	int i, j;

	// 입력
	for (i = 0; i < 5; i++)
	{
		printf("%d.\n", i + 1);
		printf("이름 : "); scanf("%s", arr[i].name);
		printf("가슴 : "); scanf("%d", &arr[i].chest);
		printf("허리 : "); scanf("%d", &arr[i].waist);
		printf("힙   : "); scanf("%d", &arr[i].hip);
	}
	getch();
	printf("\n");
	
	// 정렬
	for (i = 0; i < 4; i++)
		for (j = i + 1; j < 5; j++)
			if (arr[i].hip < arr[j].hip)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

	// 출력
	for (i = 0; i < 5; i++)
	{
		printf("%-3s %-3d %-3d %-3d\n", arr[i].name, arr[i].chest, arr[i].waist, arr[i].hip);
	}
	*/

// N.14
// Structure Pointer
	/*
	Ballpen ball = { "monma", "blue", 1000 };
	Ballpen* ballp;
	ballp = &ball;

	scanf("%s %s %d", (*ballp).maker, (*ballp).color, &(*ballp).price);

	(*ballp).price = 100;

	printf("%s, %s, %d\n", ball.maker, ballp->color, (*ballp).price); // (*ballp).maker로 사용하는 것을 추천 (범용성 때문에)

	printf("size of ball : %d, size of ballp : %d\n", sizeof(ball), sizeof(ballp));
	
	ballp++;

	printf("%s, %s, %d\n", (*(ballp-1)).maker, (*(ballp - 1)).color, (*(ballp - 1)).price);
	*/

// C vs C++
	// 변수 선언
	// 변수 선언시, C에서는 반드시 시작 부분에 선언해야한다.
	// 하지만, C++에서는 아무 곳에서 선언가능하다.(당연히 선언된 범위 내에서만 사용가능)
	/*
		int a, b, c;
	
	for (int i = 1; i <= 10; i++)	// C++만 가능
	{
		 int f = 1;					// C++만 가능
	}
	*/

	// 전역 식별자
	// 변수 앞에 ‘ :: ’를 사용함
	// 지역변수와 전역변수의 이름이 같을 때, 변수 앞에 ‘ :: ‘을 사용하여 전역변수임을 나타내는 식별자임
	/*
	int su = 100; // 전역변수

	void main()
	{
		int su = 200;
	
		printf("su = %d", su);     // 지역변수 su를 출력
	
		printf("::su = %d", ::su); // 전역변수 su를 출력
	}
	*/

	// printf, scanf vs cout, cin
	// C언어 : printf(), scanf()
	// C++ : cout, cin
	// 1. C언어에서 입력 후 ‘enter’를 getchar()로 걸러냈다면, C++의 cin함수는 ‘enter’를 자동으로 걸러냄
	// 2. 입력시 번지연산자를 사용하지 않아도됨
	/*
	char name[10];
	int age;

	printf("나이 입력 : "); scanf("%d", &age); getchar();
	printf("이름 입력 : "); scanf("%s", name);

	cout << "나이 입력 : "; cin >> age;		// 번지연산자X, getchar()X
	cout << "이름 입력 : "; cin >> name;

	cout << "나이, 이름순으로 입력 : ";
		cin >> name >> age;						  // 한 번에 입력

	cout << "내 이름은 " << name << "이고 나이는" // 한 번에 출력
		 << age << "입니다." << endl;
	*/

// exam1
	// (1)
	/*
	Person person, *personp;

	person = { "홍길동", "A", 10 };
	personp = &person;

	printf("%s %d %s", (*personp).name, (*personp).age, (*personp).bloodType);
	*/

	// (2)
	/*
	Person person, *personp;

	person = { "홍길동", "A", 10 };
	personp = &person;

	strcpy((*personp).name, "김철수");

	printf("%s %d %s", (*personp).name, (*personp).age, (*personp).bloodType);
	*/

	// (3)
	/*
	Person person, * personp;

	personp = &person;

	scanf("%s %d %s", (*personp).name, &(*personp).age, (*personp).bloodType);

	printf("%s %d %s", (*personp).name, (*personp).age, (*personp).bloodType);
	*/

	// (4)
	/*
	Person person[5], temp;
	int i;

	for (i = 0; i < 5; i++)
		scanf("%s %d %s", person[i].name, &person[i].age, person[i].bloodType); getchar();
	getch();

	for (i = 0; i < 5; i++)
		printf("%s %d %s\n", person[i].name, person[i].age, person[i].bloodType);
	*/
	

	// (5)
	/*
	Person person[5], temp;
	int i, j;

	for (i = 0; i < 5; i++)
		scanf("%s %d %s", person[i].name, &person[i].age, person[i].bloodType); getchar();

	for (i = 0; i < 4; i++)
		for (j = i+1; j < 5; j++)
			if (person[i].age < person[j].age)
			{
				temp = person[i];
				person[i] = person[j];
				person[j] = temp;
			}
	getch();

	for (i = 0; i < 5; i++)
		printf("%s %d %s\n", person[i].name, person[i].age, person[i].bloodType);
	*/
	
// N.15
// Variable(프로세스 메모리 구조)
	// 1.
	/*
	puts(" STATIC AUTO ");
	sub();
	sub();
	sub();
	*/

	// 2.
	/*
	char *name = new char[10];
	int *age = new int;

	name = "홍길동"; 
	// >> 오류
	// 답 : strcpy(name, "홍길동");
	// new는 heap영역에 메모리가 할당은 되지만 할당된 주소값을 참조하는 변수가 없음
	// name이 heap영역에 할당된 메모리 주소값을 데이터로 가지지만 그 heap영역에 할당된 메모리를 참조하는 변수가 없음
	// 그래서 strcpy()를 통해 그 메모리 안에 직접 값을 넣어줘야함

	age = 20;
	// >> 정상
	*/
	
	// 3-1
	// heap영역에 선언된 변수에 대해 delete
	// 공간해지, 자원반납(메모리 공간이 사라지는 것이 아님)
	// 공간을 해지해주므로써 컴퓨터가 메모리 공간을 효율적으로 사용할 수 있음
	/*
	char* name = new char[10];
	int* age = new int;

	delete []name, age;
	*/
	
	// 3-2
	// 자유변수 new를 통해 heap영역에 메모리 할당
	// 포인터변수 arr의 공간을 미리 지정하지 않아도 됨(실시간으로 메모리 할당 가능)
	// static(static), auto(stack)을 사용하면 공간을 지정하고 실행해야됨
	/*
	int cn, i;

	printf("처리할 데이터 갯수 입력 : "); scanf("%d", &cn);

	int *arr = new int[cn]; // new , class -> heap영역

	// static int arr[cn];	// static영역
	// int arr[cn];			// stack영역

	for (i = 0; i < cn; i++)
	{
		printf("%d번째 정수 : ", i + 1); scanf("%d", &arr[i]);
	}

	printf("받은 정수 : ");
	for (i = 0; i < cn; i++)
		printf("%-3d", arr[i]);
	*/

// malloc()
	// malloc : heap에 공간을 할당할 때 사용하는 표준 함수
	// #include<stdlib.h> 또는 #include<malloc.h> 를 사용해야함

	// int *arr = (int *)malloc(sizeof(int) * cn);	// C
	// int *arr = new int[cn];						// C++
	// 예시
	// 만약 cn이 3일 경우
	// malloc(4byte 곱하기 3) => malloc(12) => (int *)malloc(12) => 포인터로 만듦
	// 컴파일러에 따라 int의 byte값이 달라서 sizeof(int)를 사용하여 그만큼의 메모리 공간을 heap에 할당하는 것임

// exam1
	/*
	int cn, i, j, temp;

	printf("몇개의 정수를 입력받으시겠습니까? : "); scanf("%d", &cn);

	// int *arr = (int *)malloc(sizeof(int) * cn); // C언어
	int *arr = new int[cn]; // C++

	for (i = 0; i < cn; i++)
	{
		printf("%d번째 정수 입력 : ", i + 1); scanf("%d", &arr[i]);
	}

	printf("받은 정수 : ");
	for (i = 0; i < cn; i++)
		printf("%-3d", arr[i]); 
	puts(""); getch();

	for (i = 0; i < cn -1; i++)
		for (j = i+1; j < cn; j++)
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	
	printf("내림차순 : ");
	for (i = 0; i < cn; i++)
		printf("%-3d", arr[i]);
	puts(""); getch();

	printf("오름차순 : ");
	for (i = cn - 1; i >= 0; i--)
		printf("%-3d", arr[i]);

	// free(arr); // C
	delete []arr; // C++
	*/

// N.16
// Reference(참조자)
	// 1.
	/*
	int x = 100;
	int &chamjo_x = x;
	int *pointer_x = &x;

	chamjo_x += 1;				// >> 101
	*pointer_x += 1;			// >> 102
	 // pointer_x += 1; // >> 1000(주소값) + 4(int의 btye)
	
	printf("%d", x);			// >> 102
	printf("%d", chamjo_x);		// >> 102
	printf("%d", pointer_x);	// >> 1000

	printf("%d", &x);			// >> 1000
	printf("%d", &chamjo_x);	// >> 1000
	printf("%d", &pointer_x);	// >> 2000
	*/

	// 2. 일반변수, 참조자, 포인터의 데이터 비교
	/*
	time_t start, end; // V/C++ 2010 ~ 2022
	int i;
	Data data;

	start = time(0);
	for (i = 0; i <= 3000000; i++)
		pointer_func(&data);
	end = time(0);
	printf("포인터 인자 : %ld초\n", end - start);

	start = time(0);
	for (i = 0; i <= 3000000; i++)
		reference_func(data);
	end = time(0);
	printf("참조 인자 : %ld초\n", end - start);

	start = time(0);
	for (i = 0; i <= 3000000; i++)
		func(data);
	end = time(0);
	printf("보통 인자 : %ld초\n", end - start);
	*/
	
	// 3.
	/*
	int sel;

	printf("한 정수 입력(1 ~ 3) : "); scanf("%d", &sel);

	Person& x = getinfo(sel);

	printf("이름 : %s\n", x.name);
	printf("나이 : %d\n", x.age);

	Person s = man[2];	// 30000byte = 30000byte	=> 새로운 변수를 만듦
	*/

// exam1
	// (1) Variable
	/*
	int a, b;

	printf("첫번째 정수 : "); scanf("%d", &a);
	printf("두번째 정수 : "); scanf("%d", &b);

	sub(a, b);
	*/
	
	
	
	
	
	
	

	

	
	
	
	
	



	
	
	
}

