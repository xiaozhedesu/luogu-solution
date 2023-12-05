#include <stdio.h>
#define TRUE 1
#define FALSE 0

void printNumber(int array[],int length) {
	for(int i = 0; i < length; i++) {
		printf("%d ",array[i]);
	}
}

int main() {
	int n,m;
	scanf("%d %d", &n, &m);

	int result[n] = {0};
	int out[n] = {0};
	int count = 0;
	int num = 0;
	while(count != n) {
		for(int turn = 0; turn < n; turn++) {
			if(out[turn] == TRUE) {
				continue;
			}
			num++;
			if(num == m) {
				num = 0;
				result[count++] = turn + 1;
				out[turn] = TRUE;
			}
		}
	}

	printNumber(result,n);
	return 0;
}
