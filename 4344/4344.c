#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, num_stu, sum, avg_above;	//�׽�Ʈ ���̽� ����
	int score[1000];
	double avg;


	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num_stu);
		sum = 0;	//�ֱ������� 0���� �ʱ�ȭ
		avg_above = 0;

		for (int i = 0; i < num_stu; i++) {
			scanf("%d", &score[i]);
			sum += score[i];
		}
		avg = (double)sum / num_stu;
		for (int i = 0; i < num_stu; i++) {
			if (score[i] > avg) {
				avg_above++;
			}
		}		
		printf("%.3lf%%\n", (double)avg_above / num_stu * 100);
	}

}