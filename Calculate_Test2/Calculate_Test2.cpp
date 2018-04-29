#include <stdio.h>

void main()
{
	int inputNum, resultNum;

	scanf_s("%d", &inputNum);

	resultNum=(inputNum*(inputNum + 1)) / 2;

	printf("n Á¤¼ö ÇÕ: %d", resultNum);
}