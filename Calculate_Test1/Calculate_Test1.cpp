#include <stdio.h>

void main()
{
	int korean, english, math, computer;

	int sum, avg;

	printf("시험 점수 입력 \n");
	printf("국어: ");
	scanf_s("%d", &korean);

	printf("영어: ");
	scanf_s("%d", &english);

	printf("수학: ");
	scanf_s("%d", &math);

	printf("컴퓨터: ");
	scanf_s("%d", &computer);

	printf("\n입력된 점수\n\n 국어: %d\n 영어: %d\n 수학: %d\n 컴퓨터: %d\n\n", korean, english, math, computer);

	sum = korean + english + math + computer;
	avg = sum / 4;
	printf("시험 총점: %d\n", sum);
	printf("평균 점수: %d\n", avg);

}