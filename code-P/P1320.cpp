#include <stdio.h>
#include <string.h>

void printNum(int array[],int length) {
	for(int i = 0; i < length; i++) {
		printf("%d ",array[i]);
	}
}

int main() {
	char string[210];		//用于接收点阵其中一行
	int length = 0;			//记录一行长度，也是循环次数
	int result[200]  = {0};	//记录最终结果压缩码
	int resultLen = 0;		//结果长度
	int temp = 0,frontNum = 0;
	//temp暂存有几个相同的数，frontNum用于跟当前数比较
	int count = 0;			//用于跳出循环
	do {
		scanf("%s",string);
		length = strlen(string);
		for(int turn = 0; turn < length; turn++) {
			int num = string[turn] - '0';
			//相同+1，不相同保存结果重计算
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
		//保存最后一个压缩码数字，循环内很可能没保存
		result[resultLen++] = temp;
	}

	//输出
	printf("%d ",length);
	printNum(result,resultLen);
	return 0;
}
