#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
const double inf = 10000000;
const int LEN = 310;
double white[LEN];

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> white[i];
	}

	double max = 0;
	int maxIndex = -1;
	double min = inf;
	int minIndex = -1;
	double sum = 0;
	for(int i = 0; i < n; i++) {
		sum += white[i];
		if(max < white[i]) {
			max = white[i];
			maxIndex = i;
		}
		if(min > white[i]) {
			min = white[i];
			minIndex = i;
		}
	}

	sum = sum - max - min;
	double average = sum / (n - 2);
	double dif = 0;
	for(int i = 0; i < n; i++) {
		if(i == maxIndex || i == minIndex) continue;
		if(abs(white[i] - average) > dif) {
			dif = abs(white[i] - average);
		}
	}

	cout << fixed << setprecision(2)
	     << average << " "<< dif;

	return 0;
}
