#pragma warning(disable : 4996)
#include<stdio.h>
#include<conio.h>// getch();

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
	
		
	
	
	
	
	
	
	
	
		


	
	
	

	
}