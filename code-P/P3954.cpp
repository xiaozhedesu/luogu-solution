#include <stdio.h>

int calcScore(int homeworkScore, int testScore, int finalTestScore) {
	return homeworkScore * 0.2 + testScore * 0.3 + finalTestScore * 0.5;
}

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	int score = calcScore(A, B, C);
	printf("%d", score);

	return 0;
}
