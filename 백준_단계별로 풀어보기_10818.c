#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num[1000000] = { 0 };

int main() {
	int N; //�Է¹��� ����
	int max = 0, min = 0; //�ִ� �ּڰ�
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	max = num[0]; min = num[0]; //max�� min�� ������ �� �־��ֱ�
	
	for (int i = 0; i < N - 1; i++) {
		if (max < num[i + 1]) {
			max = num[i + 1];
		}
		if (min > num[i + 1]) {
			min = num[i + 1];
		}
	}
	printf("%d %d", max, min);
}