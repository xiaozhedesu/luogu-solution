#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int nums[9];
	for(int i = 1; i <= 9; i++) nums[i - 1] = i;

	do {
		int traNum[3] = {0};
		int k = 0;
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				traNum[i] *= 10;
				traNum[i] += nums[k++];
			}
		}
		if(traNum[0] * 2 == traNum[1] && traNum[0] * 3 == traNum[2]) {
			for(int i = 0; i < 3; i++) cout << traNum[i] << " ";
			cout << "\n";
		}
	} while(next_permutation(nums,nums + 9));

	return 0;
}
