#include <stdio.h>
int swinDistance(int weak,int day);

int howMuchRestDay(int weak,int day);

int main() {
	int x,n;
	scanf("%d %d",&x,&n);

	int distance = swinDistance(x,n);

	printf("%d",distance);

	return 0;
}

int swinDistance(int weak,int day) {
	int rest = howMuchRestDay(weak,day);
	return 250*(day - rest);
}

int howMuchRestDay(int weak,int day) {
	int count = day;
	int rest = 0;
	while(count > 0) {
		if(weak > 7) {
			weak-=7;
		}
		count--;
		if(weak >= 1 &&weak <= 5) {
			weak++;
			continue;
		} else {
			weak++;
			rest++;
		}
	}
	return rest;
}
