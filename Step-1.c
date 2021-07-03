#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>

int main(void)
{
	printf("Hello World!");

	return 0;
} No.2557*/

/*#include<stdio.h>
int main(void) {
	for (int i = 0; i <= 1; i++) {
		printf("강한친구 대한육군\n");
	}
	return 0;
} No.10718*/

/*#include<stdio.h>
int main(void) {
	printf("\\    /\\\n )  ( \')\n(  /  )\n \\(__)|");
} No.10171*/

/*#include<stdio.h>
int main(void) {
	printf("|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\\n|\"^\"`    |\n||_/=\\\\__|");
} No.10172*/

/*#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);
} No.1000*/

/*#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a - b);
} No.1001*/

/*#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a * b);
} No.10998*/

/*#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.9f", (double)a / b);

	return 0;
} No.1008*/

/*#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a * b, a / b, a % b);

	return 0;
} No.10869*/

/*#include<stdio.h>
int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n%d\n%d\n%d", (A + B) % C, ((A % C) + (B % C)) % C, (A * B) % C, ((A % C) * (B % C)) % C);
} No.10430*/

/*#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	int b100 = b / 100;
	int b10 = b / 10 - b100 * 10;
	int b1 = b - b100 * 100 - b10 * 10;
	printf("%d\n%d\n%d\n%d", a*b1, a*b10, a*b100, a*b);

	return 0;
} No.2588*/