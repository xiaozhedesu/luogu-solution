#include <stdio.h>

void whereIsTheServer(int problemNum) {
	int localTime = problemNum * 5;
	int luoguTime = 11 + problemNum * 3;
	if (localTime > luoguTime) {
		printf("Luogu");
	} else {
		printf("Local");
	}
}

int main() {
	int n;
	scanf("%d", &n);

	whereIsTheServer(n);

	return 0;
}
