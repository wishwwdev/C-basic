#pragma warning(disable : 4996)
#include<stdio.h>
#include<conio.h> // getch();

void main()
{
	/*
	printf("HelloC++");
	printf("HelloC++\n");
	// ������ �ּ�

	puts("�ȳ��ϼ���");
	// puts("�ȳ��ϼ���\n");
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

	printf("�� ������ �� ���ڸ� �Է��ϼ��� : ");

	scanf("%d %d %c", &a, &b, &ch);

	printf("�Է��� ���� %d, %d, %c�Դϴ�.\n", a, b, ch);
	*/

	/*
	char name[10];

	printf("�̸��� �Է��ϼ��� : ");

	scanf("%s", name);

	printf("�� �̸��� %s�Դϴ�\n", name);
	*/

	/*
	char name[10], bloodType, ch;
	int age;

RE:

	printf("�̸� �Է� : "); scanf("%s", name);
	printf("���� �Է� : "); scanf("%d", &age); getchar();
	printf("������ �Է� : "); scanf("%c", &bloodType); getchar();�� ���� // == blood = getchar(); getchar();
	
	printf("�� �̸��� %s�̰�, ���̴� %d���̸�, �������� %c�Դϴ�!\n", name, age, bloodType);

	printf("�Լ��Ͻðڽ��ϱ�?(Y/N) -> ");

	ch = getchar();

	if (ch == 'Y' || ch == 'y')
		goto RE;
	else
		return ;
	*/

	char ch;
	printf("�� ���� �Է� : ");
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