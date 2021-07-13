#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
int main(void) {
	while (1)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		else {
			printf("%d\n", a + b);
		}
	} return 0;
} No.10952*/

/*#include<stdio.h>
int main(void) {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
} No.10951*/

/*#include<stdio.h>
int main(void) {
	int a, b, c, d;
	int result, input, count = 0;

	scanf("%d", &input);
	result = input;

	while (1) {
		a = input / 10;
		b = input % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		input = d;
		count++;
		if (d == result) {
			break;
		}
	}
	printf("%d", count);
} No.1110*/