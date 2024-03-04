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

	

}