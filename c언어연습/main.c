#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef
struct student {
	char name[10];
	int kor, eng, math, tot;
	double avg;
} student;

void Read_Data(struct student kim[5]) {
	FILE* fp;
	fp = fopen("data.txt", "r");

	for (int i = 0; i < 5; i++) {
		fscanf(fp, "%s %d %d %d", kim[i].name, &kim[i].kor, &kim[i].eng, &kim[i].math);
	}
	fclose(fp);
}

void Sum_Data(struct student* st) {

	for (int i = 0; i < 5; i++) {
		st->tot = st->kor + st->math + st->eng;
		printf("총점은 %d 점 입니다.\n", st->tot);
		st++;		
	}
	
}

void Average_Data(struct student* st) {

	for (int i = 0; i < 5; i++) {
		st->avg = st->tot / 3;
		printf("평균은 %lf 점 입니다.\n", st->avg);
		st++;
	}	
}

void Print_Out(struct student st[]) {
	FILE* fp;
	fp = fopen("result.txt", "w");

	for (int i = 0; i < 5; i++) {
		fprintf(fp, "%s %d %d %d %d %f\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].tot, st[i].avg);
	}
	fclose(fp);
}

int main()
{
	student* stu = (student*)malloc(sizeof(student) * 5);

	Read_Data(stu);
	Sum_Data(stu);
	Average_Data(stu);
	Print_Out(stu);
}