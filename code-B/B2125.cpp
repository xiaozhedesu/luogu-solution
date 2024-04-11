#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

int main() {
	int t;
	cin >> t;
	int maxScore = 0,score;
	string maxName,name;
	while(t--){
		cin >> score >> name;
		if(maxScore < score){
			maxScore = score;
			maxName = name;
		}
	}
	cout << maxName;

	return 0;
}
