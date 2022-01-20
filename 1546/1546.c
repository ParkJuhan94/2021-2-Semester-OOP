#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int max = 0;
	int num_subj;
	double score[1000];
	double sum = 0;
	double avg;
	
	scanf("%d", &num_subj);
	for (int i = 0; i < num_subj; i++) {
		scanf("%lf", &score[i]);
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int i = 0; i < num_subj; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}

	//printf("%lf", sum);	//Å×½ºÆ®
	avg = sum / num_subj;
	printf("%lf", avg);
}