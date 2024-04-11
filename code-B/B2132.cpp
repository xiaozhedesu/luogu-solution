#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using i64 = long long;

vector<int> prime;
bool isPrime(int num){
	if(find(prime.begin(),prime.end(),num) != prime.end()) 
		return true;
	if(num < 2 || num != 2 && num % 2 == 0)
		return false;
	for(int i = 2;i <= sqrt(num);i++){
		if(num % i == 0) 
			return false;
	}
	prime.push_back(num);
	return true;
}

bool isDoublePrime(int num){
	return isPrime(num) && isPrime(num + 2);
}

int main() {
	int n;
	cin >> n;
	bool sign = false;
	for(int i = 0;i <= n - 2;i++){
		if(isDoublePrime(i)){
			sign = true;
			printf("%d %d\n",i,i + 2);
		}
	}
	
	if(!sign) printf("empty");

	return 0;
}
