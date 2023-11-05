#include <stdio.h>

int eatApple(int m,int t,int s);

int main() {
	int m, t, s;
	scanf("%d %d %d", &m, &t, &s);

	int result = eatApple(m,t,s);
	printf("%d",result);

	return 0;
}

int eatApple(int m,int t,int s) {
	if (t == 0) {
		return 0;
	} else {
		int result = m-(double)s/t;
		if(result <=0) {
			return 0;
		} else {
			return result;
		}
	}
}
