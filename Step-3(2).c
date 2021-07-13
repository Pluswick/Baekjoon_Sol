#define _CRT_SECURE_NO_WARNINGS

/*#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: ", i);
		printf("%d\n", a + b);
	}
} No.11021*/

/*#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: ", i);
		printf("%d + %d = %d\n",a, b, a + b);
	}
} No.11022*/

/*#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
} No.2438*/

/*#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		
		printf("\n");
	}
} No.2439*/

/*#include<stdio.h>
int main(void) {
	int n, x;
	scanf("%d %d", &n, &x);
	int input;
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (x > input)
			printf("%d ", input);
	}
} No.10871*/

/*#include <stdio.h>

int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	int N[10000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &N[i]);
	}
	for (int j = 0; j < n; j++) {
		if (N[j] < x) {
			printf("%d ", N[j]);
		}
	}
	return 0;
} No.10871(another solution)*/