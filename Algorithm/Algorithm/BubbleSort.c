// Bubble Sort
// 20143057 컴퓨터공학과 박민기

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int testcase[], int len) {
	int i, j, temp;

	for (i = 1; i <= len - 1; i++) {
		for (j = 1; j <= len - i; j++) {
			if (testcase[j - 1] > testcase[j]) {
				temp = testcase[j];
				testcase[j] = testcase[j - 1];
				testcase[j - 1] = temp;
			}
		}
	}
}

int main(void) {
	int testcase[] = { 40, 10, 50, 90, 20, 80, 30, 60 };
	int len = sizeof(testcase) / sizeof(int); // 배열의 길이 구하기

	BubbleSort(testcase, len); // 함수호출

	for (int i = 0; i < len; i++) {
		printf("%d ", testcase[i]); // 정렬된 배열 출력
	}

	return 0;
}