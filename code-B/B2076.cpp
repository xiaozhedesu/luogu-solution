#include <stdio.h>

int main() {
	int height;
	scanf("%d",&height);

	double lastHeight = height,sumHeight = height;
	for(int turn = 0; turn < 10; turn++) {
		lastHeight /= 2;
		if(turn + 1 != 10)
			sumHeight += 2 * lastHeight;
	}
	printf("%g\n%g",sumHeight,lastHeight);

	return 0;
}
