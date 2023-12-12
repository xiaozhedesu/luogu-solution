#include <iostream>
#include <string.h>

using namespace std;

double result[4];
int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int people;
		cin >> people;
		if(people > 0 && people <= 18) {
			result[0]++;
		} else if(people <= 35) {
			result[1]++;
		} else if(people <= 60) {
			result[2]++;
		} else {
			result[3]++;
		}
	}

	for(int i = 0; i < 4; i++) {
		result[i] /= n;
		result[i] *= 100;
		printf("%.2lf%%\n",result[i]);
	}

	return 0;
}
