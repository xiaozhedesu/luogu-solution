#include <stdio.h>

void scanArray(int array[], int length);

void cute(int fishCute[], int length);

int main() {
	int n;
	scanf("%d",&n);
	int fishCute[n];
	scanArray(fishCute,n);
	
	cute(fishCute,n);

	return 0;
}

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}

void cute(int fishCute[], int length){
	for(int outer = 0;outer < length;outer++){
		int cuterNum = 0;
		
		for(int inner = 0;inner < outer;inner++){
			if(fishCute[outer] > fishCute[inner]){
				cuterNum++;
			}
		}
		
		printf("%d ",cuterNum);
	}
}