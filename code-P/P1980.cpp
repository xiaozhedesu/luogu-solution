#include <stdio.h>

int howMuchNumber(int circu,int num);

int main() {
	int circu, num;
	scanf("%d %d",&circu, &num);

	int result = howMuchNumber(circu,num);
	printf("%d" ,result);
	return 0;
}

int howMuchNumber(int circu,int num) {
	//��1��circu�У������˶��ٴ�num
	int count = 0;
	for(int i = 1; i <= circu; i++) {
		int temp = i;
		while (temp != 0) {
			if(temp % 10 == num) {
				count++;
			}
			temp /= 10;
		}
	}
	return count;
}