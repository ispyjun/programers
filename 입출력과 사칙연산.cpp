//����°� ��Ģ����
//���� 1330

#include <stdio.h>

int main(void)
{
	printf("Hello World!");

	return 0;
}

//���� 10718

#include <stdio.h>

int main(void)
{
	printf("����ģ�� ��������\n");
	printf("����ģ�� ��������\n");
	return 0;
}

//���� 1000

#include <stdio.h>
int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A + B);
	return 0;
}

//���� 1001

#include <stdio.h>
int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A - B);
	return 0;
}

//���� 10998

#include <stdio.h>
int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A*B);
	return 0;
}

//���� 10869

#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a*b);
	printf("%d\n", a / b);
	printf("%d", a%b);
	return 0;
}

//���� 10430

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", (a%c + b % c) % c);
	printf("%d\n", (a*b) % c);
	printf("%d\n", (a%c * b%c) % c);
}

//���� 2588

#include <stdio.h>

int main(void)
{
	int a, b;
	int c = 0, d = 0, e = 0;
	scanf("%d %d", &a, &b);
	c = (b % 10)*a;
	d = ((b / 10) % 10)*a;
	e = (b / 100)*a;
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", c + d * 10 + e * 100);
}