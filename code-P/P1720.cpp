#include <stdio.h>
#include <math.h>

double fibonacci(int num);

int main(){
	int num;
	scanf("%d",&num);
	
//	int result = fibonacci(num);
//	printf("%d.00",result);

	double result = fibonacci(num);
	printf("%.2f",result);

	return 0;
}

//用递归求和会超时
//int fibonacci(int num){
//	if(num<0){
//		return 0;
//	}
//	
//	if(num == 1 || num == 2){
//		return 1;
//	}else{
//		return fibonacci(num-1) + fibonacci(num-2);
//	}
//}

double fibonacci(int num){
	double num1 = pow((1 + sqrt(5)) / 2, num);
	double num2 = pow((1 - sqrt(5)) / 2, num);
	return (num1 - num2) / sqrt(5);
}
