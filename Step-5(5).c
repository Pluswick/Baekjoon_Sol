#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int c;
	int n = 0;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		int arr[1000];
		double average = 0.0;
		int total = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
			total += arr[j];
		}
		average = (double)total / n;
		int count = 0;
		for (int k = 0; k < n; k++) {
			if (arr[k] > average)
				count++;
		}
		printf("%.3f%%\n", (double)count / n * 100);
	}
	return 0;
}//No.4344