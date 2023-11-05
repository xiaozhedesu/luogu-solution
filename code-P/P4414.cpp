#include <stdio.h>

void swap(int *a,int *b);

void printNumbers(int *nums,char *letters);

int main() {
	int nums[3];
	for(int index = 0; index < 3; index++) {
		scanf("%d",nums + index);
	}
	getchar();
	//�ַ�����һ��Ҫ��'\0'Ԥ���ռ䣬��Ȼ�ᵼ��'\0'���ڲ��Ҵ��λ��
	//����letters[3]�������'\0'�ͱ�����nums[0]�ϣ����½�������ˡ�
	char letters[4];
	scanf("%3s",letters);

	printNumbers(nums,letters);

	return 0;
}

void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printNumbers(int *nums,char *letters) {
	int length = 3;

	for(int outer = 0; outer < length; outer++) {
		for(int inner = 0; inner < length-outer-1; inner++) {
			if(nums[inner] > nums[inner+1]) {
				swap(nums+inner, nums+inner+1);
			}
		}
	}


	for(int index = 0; index < length; index++) {
		int numsIndex = letters[index] - 'A';
		printf("%d ",nums[numsIndex]);
	}
}