#define _CRT_SECURE_NO_WARNINGS

/*#include<stdio.h>

float Max(float n[], int size) {
	float max = 0;
	for (int i = 0; i < size; i++) {
		if (max < n[i])
			max = n[i];
		else
			;
	}
	return max;
}

void Forgery(float n[], int size, float maximum){
	for (int i = 0; i < size; i++) {
		n[i] = n[i] / maximum * 100;
	}
	return n;
}

float Average(float n[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum += n[i];
	}
	float average = sum / size;

	return average;
}

int main(void) {
	int n;
	scanf("%d", &n);
	float arr[1000];
	for (int i = 0; i < n; i++) {
		float num;
		scanf("%f", &num);
		arr[i] = num;
	}
	float max;
	max = Max(arr, n);
	Forgery(arr, n, max);
	printf("%.2f", Average(arr, n));

	return 0;
} No.1546*/