#include <stdio.h>

void print0(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
		case 3:
		case 4:
			printf("X.X");
			break;
		case 5:
			printf("XXX");
			break;
	}
}

void print1() {
	printf("..X");
}

void print2(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
			printf("..X");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("X..");
			break;
		case 5:
			printf("XXX");
			break;
	}
}

void print3(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
			printf("..X");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("..X");
			break;
		case 5:
			printf("XXX");
			break;
	}
}

void print4(int line) {
	switch(line) {
		case 1:
		case 2:
			printf("X.X");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
		case 5:
			printf("..X");
			break;
	}
}

void print5(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
			printf("X..");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("..X");
			break;
		case 5:
			printf("XXX");
			break;
	}
}

void print6(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
			printf("X..");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("X.X");
			break;
		case 5:
			printf("XXX");
			break;
	}
}

void print7(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			printf("..X");
			break;
	}
}

void print8(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
			printf("X.X");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("X.X");
			break;
		case 5:
			printf("XXX");
			break;
	}
}

void print9(int line) {
	switch(line) {
		case 1:
			printf("XXX");
			break;
		case 2:
			printf("X.X");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("..X");
			break;
		case 5:
			printf("XXX");
			break;
	}
}

void printNum(char nums[],int length) {
	for(int outer = 1; outer <= 5; outer++) {
		for(int inner = 0; inner < length; inner++) {
			switch(nums[inner]) {
				case '0':
					print0(outer);
					break;
				case '1':
					print1();
					break;
				case '2':
					print2(outer);
					break;
				case '3':
					print3(outer);
					break;
				case '4':
					print4(outer);
					break;
				case '5':
					print5(outer);
					break;
				case '6':
					print6(outer);
					break;
				case '7':
					print7(outer);
					break;
				case '8':
					print8(outer);
					break;
				case '9':
					print9(outer);
					break;
			}
			if(inner != length - 1) {
				putchar('.');
			}
		}
		putchar('\n');
	}
}

int main(int argc, char *argv[]) {
	int length;
	scanf("%d",&length);
	char nums[length + 1];
	scanf("%s",&nums);

	printNum(nums,length);

	return 0;
}
