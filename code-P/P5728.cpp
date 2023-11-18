#include <stdio.h>
#include <math.h>

bool isSimilarStudents(int score1[],int score2[]);

int similarStudentsNum(int scores[][3],int num);

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);
	int scores[num][3];
	for(int index = 0; index < num; index++) {
		scanf("%d %d %d",&scores[index][0],&scores[index][1],&scores[index][2]);
	}

	int result = similarStudentsNum(scores,num);
	printf("%d",result);

	return 0;
}

bool isSimilarStudents(int score1[],int score2[]) {
	bool result;

	int scoreSum1 = score1[0] + score1[1] + score1[2];
	int scoreSum2 = score2[0] + score2[1] + score2[2];

	//全科
	result = abs(scoreSum1 - scoreSum2) <= 10;

	//单科
	for(int index = 0; index < 3; index++) {
		result = result && abs(score1[index] - score2[index]) <= 5;
	}

	return result;
}

int similarStudentsNum(int scores[][3],int num) {
	int result = 0;

	for(int outer = 0; outer < num; outer++) {
		for(int inner = outer + 1; inner < num; inner++) {
			if(isSimilarStudents(scores[outer],scores[inner])) {
				result++;
			}
		}
	}

	return result;
}