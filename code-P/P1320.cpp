#include <stdio.h>
#include <string.h>

void printNum(int array[],int length) {
	for(int i = 0; i < length; i++) {
		printf("%d ",array[i]);
	}
}

int main() {
	char string[210];		//���ڽ��յ�������һ��
	int length = 0;			//��¼һ�г��ȣ�Ҳ��ѭ������
	int result[200]  = {0};	//��¼���ս��ѹ����
	int resultLen = 0;		//�������
	int temp = 0,frontNum = 0;
	//temp�ݴ��м�����ͬ������frontNum���ڸ���ǰ���Ƚ�
	int count = 0;			//��������ѭ��
	do {
		scanf("%s",string);
		length = strlen(string);
		for(int turn = 0; turn < length; turn++) {
			int num = string[turn] - '0';
			//��ͬ+1������ͬ�������ؼ���
			if(frontNum != num) {
				frontNum = num;
				result[resultLen++] = temp;
				temp = 1;
			} else {
				temp++;
			}
		}
		count++;
	} while(count < length);
	if(temp > 0) {
		//�������һ��ѹ�������֣�ѭ���ںܿ���û����
		result[resultLen++] = temp;
	}

	//���
	printf("%d ",length);
	printNum(result,resultLen);
	return 0;
}
