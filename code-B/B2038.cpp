#include <stdio.h>

int main() {
	char cha;
	scanf("%c",&cha);

	if(cha % 2 == 1) {
		printf("YES");
	} else {
		printf("NO");
	}

	return 0;
}
