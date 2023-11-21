#include <stdio.h>

int cube[20][20][20];

void cutCube(int operate[6]);

int nokoriCubes(int a,int b,int c);

int main(int argc, char *argv[]) {
	//����
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(int outer = 0; outer < a; outer++) {
		for(int middle = 0; middle < b; middle++) {
			for(int inner = 0; inner < c; inner++) {
				//��cube������г�ʼ��
				cube[outer][middle][inner] = 1;
			}
		}
	}
	int num;
	scanf("%d",&num);
	int operation[num][6];
	for(int outer = 0; outer < num; outer++) {
		for(int inner = 0; inner < 6; inner++) {
			scanf("%d",&operation[outer][inner]);
			//��Ŀ��ΧΪ1 <= var <= ���ȣ�����1�����
			operation[outer][inner]--;
		}
	}

	//�и����
	for(int outer = 0; outer < num; outer++) {
		cutCube(operation[outer]);
	}

	//���
	printf("%d",nokoriCubes(a,b,c));
	return 0;
}

void cutCube(int operate[6]) {
	for(int outer = operate[0]; outer <= operate[3]; outer++) {
		for(int middle = operate[1]; middle <= operate[4]; middle++) {
			for(int inner = operate[2]; inner <= operate[5]; inner++) {
				cube[outer][middle][inner] = 0;
			}
		}
	}
}

int nokoriCubes(int a,int b,int c) {
	int count = 0;
	for(int outer = 0; outer < a; outer++) {
		for(int middle = 0; middle < b; middle++) {
			for(int inner = 0; inner < c; inner++) {
				if(cube[outer][middle][inner] == 1) {
					count++;
				}
			}
		}
	}
	return count;
}
