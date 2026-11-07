#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int number[SIZE];
	int max, min;
	int total = 0;
	float avg;

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) number[i] = rand() % 101;

	max = min = number[0];

	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d ", number[i]);
		total += number[i];
		if (number[i] > max) max = number[i];
		if (number[i] < min) min = number[i];
	}
	printf("\n");

	avg = (float)total / SIZE;
	printf("최댓값 : %d, 최솟값 : %d\n", max, min);
	printf("평균 : %.2f\n", avg);

	return 0;
}