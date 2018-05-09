//문제3 전달된 수만큼 피보나치 수열 출력 함수 

#include <stdio.h>

int inputNum;
int fs1 = 0, fs2 = 1, lastValue;

void FibonacciSequence(int inputNum);


void main()
{
	printf("정수를 입력해주세요: ");
	scanf_s("%d", &inputNum);

	FibonacciSequence(inputNum);

}

void FibonacciSequence(int inputNum)
{
	for (int i = 0; i < inputNum; i++)
	{
		if (i <= 1)
		{
			printf("%d, ", i);
		}
		else if (i > 1)
		{
			lastValue = fs1 + fs2;
			printf("%d, ", lastValue);
			fs1 = fs2;
			fs2 = lastValue;
		}
	}//for(inputNum)
}