#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char ox[80];
	int n;
	scanf("%d", &n);
	int streak = 0, count = 0, size = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", ox);
		size = sizeof(ox) / sizeof(char);
		for (int j = 0; j < size; j++) {
			if (ox[j] == 'O') {
				streak++;
				count += streak;
			}
			else
				streak = 0;
		}
		printf("%d\n", count);
		count = 0, streak = 0, size = 0;
	}

	return 0;
}//No.8958
/*
#include <stdio.h>
#include <string.h>

int main(void) {

	int input, score, sum;
	char test[80];

	scanf("%d", &input);

	for(int i=0; i<input; i++) {
		sum = 0;
		score = 1;
		scanf("%s", test);
		for(int j=0; j<strlen(test); j++) {
			if(test[j] == 'O') {
				sum += score;
				score++;
			}
			if(test[j] == 'X')  score = 1;
		}
		printf("%d\n", sum);
	}
}
*/