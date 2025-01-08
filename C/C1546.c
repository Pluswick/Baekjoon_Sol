#include <stdio.h>
int main() {
    int n, max_score = 0;
    scanf("%d", &n);
    int scores[n];
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] > max_score) max_score = scores[i];
    }

    for (int i = 0; i < n; i++) {
        sum += (double)scores[i] / max_score * 100;
    }

    printf("%.6f\n", sum / n);
    return 0;
}
