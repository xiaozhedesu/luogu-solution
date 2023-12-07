#include <stdio.h>
#include <string.h>

int minesweeper[110][110];

void boom(int rows,int cols) {
	for(int outer = 1; outer <= rows; outer++) {
		for(int inner = 1; inner <= cols; inner++) {
			if(minesweeper[outer][inner] == 1) {
				putchar('*');
				continue;
			}
			int count = minesweeper[outer - 1][inner - 1]
			            + minesweeper[outer - 1][inner]
			            + minesweeper[outer - 1][inner + 1]
			            + minesweeper[outer][inner - 1]
			            + minesweeper[outer][inner + 1]
			            + minesweeper[outer + 1][inner - 1]
			            + minesweeper[outer + 1][inner]
			            + minesweeper[outer + 1][inner + 1];

			printf("%d",count);
		}
		putchar('\n');
	}
}

int main() {
	int m,n;
	scanf("%d %d",&m,&n);

	for(int outer = 1; outer <= m; outer++) {
		char temp[110];
		scanf("%s",temp);
		for(int inner = 1; inner <= strlen(temp); inner++) {
			if(temp[inner - 1] == '*') {
				minesweeper[outer][inner] = 1;
			}
		}
	}

	boom(m,n);

	return 0;
}
