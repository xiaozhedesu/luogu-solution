#include <stdio.h>
#include <math.h>
#define PI 3.141593

#include <iostream>
using namespace std;

void solution1() {
	printf("I love Luogu!");
}

void solution2() {
	int result1 = 2 + 4;
	int result2 = 10 - result1;
	printf("%d %d",result1,result2);
}

void solution3(){
	int result1 = 14 / 4;
	int result2 = 4 * result1;
	int result3 = 14 % 4;
	printf("%d\n%d\n%d",result1,result2,result3);
}

void solution4(){
	double result = 500/3.0;
	printf("%.3f",result);	//保留*六位*有效数字
}

void solution5(){
	int result = (260+220)/(12+20);
	printf("%d",result);
}

void solution6(){
	double result = sqrt(6*6+9*9);
	//printf("%f",result);
	cout<<result;
}

void solution7(){
	int result1 = 100+10;
	int result2 = result1 - 20;
	int result3 = result2 - result2;
	printf("%d\n%d\n%d",result1,result2,result3);
}

void solution8(){
	int r = 5;
	double C = 2 * PI * r;
	double S = PI * r * r;
	double V = 4.0/3 * PI * pow(r,3);
	//printf("%lf\n%lf\n%lf",C,S,V);
	cout << C << endl << S << endl << V;
}

void solution9(){
	int result = 1;
	for(int i = 0;i < 3;i++){
		result = (result + 1) * 2;
	}
	printf("%d",result);
}

void solution10(){
	//你们这是什么题啊，你们真的是害人不浅呐
	printf("9");
}

void solution11(){
	double result = 100.0 / (8-5);
	//printf("%f",result);
	cout << result;
}

void solution12(){
	int result1 = 'M' - 'A' + 1;
	char result2 = 'A'- 1 + 18;
	printf("%d\n%c",result1,result2);
}

void solution13(){
	int r1 = 4,r2 = 10;
	double V = 4.0/3 * PI * (pow(r1,3)+pow(r2,3));
	int result = (int)pow(V,1.0/3);
	printf("%d",result);
}

void solution14(){
	printf("50");
}

int main() {
	int T;
	scanf("%d",&T);

	switch(T) {
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
		case 3:
			solution3();
			break;
		case 4:
			solution4();
			break;
		case 5:
			solution5();
			break;
		case 6:
			solution6();
			break;
		case 7:
			solution7();
			break;
		case 8:
			solution8();
			break;
		case 9:
			solution9();
			break;
		case 10:
			solution10();
			break;
		case 11:
			solution11();
			break;
		case 12:
			solution12();
			break;
		case 13:
			solution13();
			break;
		case 14:
			solution14();
			break;
	}

	return 0;
}

