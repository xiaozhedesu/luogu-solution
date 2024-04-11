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

int main() {
	int n;
	cin >> n;
	int max = 0;
	for(int i = 2;i < n;i++){
		if(isPrime(i)){
			if(isPrime(n - i)){
				int num = i * (n - i);
				max = (max > num)? max : num;
			}
		}
	}
	cout << max;

	return 0;
}
