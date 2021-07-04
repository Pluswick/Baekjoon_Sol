#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < b) {
		printf("<");
	}
	else if (a == b) {
		printf("==");
	}
	else {
		printf(">");
	}
	return 0;
} No.1330*/

/*#include<stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	if (a >= 90)
		printf("A");
	else if (a >= 80)
		printf("B");
	else if (a >= 70)
		printf("C");
	else if (a >= 60)
		printf("D");
	else
		printf("F");
	return 0;
} No.9498*/

/*#include<stdio.h>

int main(void) {
	int year;
	scanf("%d", &year);
	int leap;
	leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
	printf("%d", leap);
	return 0;
} No.2753*/

/*#include<stdio.h>

int main(void) {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y>0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else
		printf("4");
	return 0;
} No.14681*/

/*#include<stdio.h>

int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m < 45) {
		h = h - 1;
		if (h < 0) {
			h = 23;
		}
		m = 60 - (45 - m);
	}
	else {
		m = m - 45;
	}
	printf("%d %d", h, m);

	return 0;
} No.2884*/