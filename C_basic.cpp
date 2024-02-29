#pragma warning(disable : 4996)
#include<stdio.h>
#include<conio.h> // getch();

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
	putchar('\n');

}