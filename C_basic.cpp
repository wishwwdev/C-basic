#pragma warning(disable : 4996)
#include<stdio.h>
#include<conio.h>// getch();

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

	/*
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

	puts("������");
	puts("�����");
	*/

	/*
	// �����(\n ��)
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
	// ���Ĺ��� ��� ���� �����ϱ�(%d ��)
	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%05d\n", 123);
	printf("%-5d\n", 123);

	printf("%f\n", 123.45);
	printf("%6.1f\n", 123.45);
	printf("% .1f\n", 12.67); // "% .0f" >> �����ڸ� ���� ����

	printf("%3c\n", 'A');
	printf("%-3c\n", 'A');

	printf("%10s\n", "ABCDEFG");
	printf("%-10s\n", "ABCDEFG");
	*/

	/*
	// ������
	int a = 2, b = 2;
	++a; // ��ġ(����) ������
	b++; // ��ġ(����) ������
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
	// d = c - 2, c = b * 2, e = (b = a + 3); >> b = 6, c = �����Ⱚ, d = �����Ⱚ, e = 6 

	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	printf("e = %d\n", e);
	*/

	

}