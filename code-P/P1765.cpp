#include <stdio.h>
#include <string.h>

char scan[220] = {'\0'};

int click(char cha) {
	switch(cha) {
		case ' ':
		case 'a':
		case 'd':
		case 'g':
		case 'j':
		case 'm':
		case 'p':
		case 't':
		case 'w':
			return 1;
		case 'b':
		case 'e':
		case 'h':
		case 'k':
		case 'n':
		case 'q':
		case 'u':
		case 'x':
			return 2;
		case 'c':
		case 'f':
		case 'i':
		case 'l':
		case 'o':
		case 'r':
		case 'v':
		case 'y':
			return 3;
		case 's':
		case 'z':
			return 4;
	}
	return 0;
}

int main() {
	scanf("%[^\n]",&scan[0]);

	int len = strlen(scan),res = 0;
	for(int i = 0; i < len; i++) {
		res += click(scan[i]);
	}
	printf("%d",res);

	return 0;
}
