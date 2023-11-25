#include <stdio.h>

int main(int argc, char *argv[]) {
	int distance;
	scanf("%d", &distance);

	double bike = 27 + distance / 3.0 + 23;
	double walk = distance / 1.2;

	if(bike > walk) {
		printf("Walk");
	} else if(bike < walk) {
		printf("Bike");
	} else {
		printf("All");
	}

	return 0;
}
