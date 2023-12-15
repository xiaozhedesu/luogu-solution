#include <iostream>
#include <vector>

using namespace std;

int main() {
	int length;
	cin >> length;
	vector<int> vec1;
	vector<int> vec2;
	for(int i = 0; i < length; i++) {
		int temp;
		cin >> temp;
		vec1.insert(vec1.end(),temp);
	}
	for(int i = 0; i < length; i++) {
		int temp;
		cin >> temp;
		vec2.insert(vec2.end(),temp);
	}

	int result = 0;
	for(int i = 0; i < length; i++) {
		result += vec1.at(i) * vec2.at(i);
	}

	cout << result;

	return 0;
}
