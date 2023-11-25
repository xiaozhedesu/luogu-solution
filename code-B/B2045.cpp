#include <stdio.h>

int main(int argc, char *argv[]) {
	int week;
	scanf("%d",&week);

	if(week == 1 || week == 3 || week == 5) {
		printf("NO");
	} else {
		printf("YES");
	}

	return 0;
}
