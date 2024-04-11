#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

void tong(vector<int>& nums,int n) {
	vector<int> vec(n + 1,0),ans;
	for(int i = 0; i < nums.size(); i++)
		vec[nums[i]]++;
	for(int i = 1; i <= n; i++) {
		while(vec[i]) {
			ans.push_back(i);
			vec[i]--;
		}
	}
	nums = ans;
}

int main() {
	int n,m;
	cin >> n >> m;
	vector<int> vec(m);
	for(int i = 0; i < m; i++)
		cin >> vec[i];

	tong(vec,n);

	for(int i = 0; i < m; i++)
		cout << vec[i] << " \n"[i == m - 1];

	return 0;
}
