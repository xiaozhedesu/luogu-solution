#include <stdio.h>

int factorial(int num);

int factorialSum(int num);

int main(){
	int n;
	scanf("%d",&n);
	
	//�Ѿ�ԶԶ����long�ܴ洢�ķ�Χ�ˣ���Ҫ������ʽ�洢���
	int result = factorialSum(n);
	printf("%d",result);

	return 0;
}

int factorial(int num){
	if(num<=1){
		return 1;
	}else{
		return num * factorial(num-1);
	}
}

int factorialSum(int num){
	if(num<=1){
		return factorial(1);
	}else{
		return factorial(num) + factorialSum(num-1);
	}
}