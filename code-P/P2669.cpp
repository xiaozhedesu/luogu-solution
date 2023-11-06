#include <stdio.h>
#include <math.h>

int salary(int day);

int main() {
	int k;
	scanf("%d",&k);

	int result = salary(k);
	printf("%d",result);

	return 0;
}

int salary(int day) {
	//���� = 1 ~ n ��ƽ���� (+ �����е�ʣ�������Ĺ���)��
	int cycle = 1;
	if(day<=0) {
		return 0;
	}
	while (day >= cycle) {
		day -= cycle++;
	}

	int sum = 0;
	for(int i = 1; i < cycle; i++) {
		sum+=pow(i,2);
	}
	if(day > 0) {
		sum +=day * (cycle);
	}
	return sum;
}
