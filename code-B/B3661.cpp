#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;
using i64 = long long;

vector<int> a,b;

template <typename T>
void printVector(vector<T> vec){
	for(int i = 0;i < vec.size();i++){
		cout << vec[i] << " ";
	}
	cout << endl;
}

void solve(){
	int num;
	cin >> num;
	if(num % 2 == 1) a.push_back(num);
	else b.push_back(num);
}

int main() {
	int n;
	cin >> n;
	while(n--) solve();
	
	printVector(a);
	printVector(b);

	return 0;
}
