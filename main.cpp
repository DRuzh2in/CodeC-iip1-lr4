#include <stdio.h>

#define INT_MAX 2147483647;

void sort(int *A, int *B, int n);
void printArrA(int *A);
void printArrB(int *B);
void printSort(int *A, int *B, int k, int min);

int main() {
	int A[10] = { 1,3,6,8,43,-1,8,9,0,4 };
	int B[10];
	printArrA(A);
	sort(A, B, 10);
	printArrB(B);

}

void sort(int *A, int *B, int n)
{
	for (int k = 0; k < n; k++)
	{
		int i = 0;
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[min] > A[j])
			{
				min = j;
			}
		}
		B[k] = A[min];
		A[min] = INT_MAX;
		printSort(A, B, k, min);
	}
}

void printArrA(int *A)
{
	printf("\nInput array:\nint A[10] =");
	for (int i = 0; i<10; i++)
		printf(" %d", A[i]);
	printf("\n\n");
}

void printArrB(int *B)
{
	printf("\nOutput array:\nint B[10] =");
	for (int i = 0; i<10; i++)
		printf(" %d", B[i]);
	printf("\n\n");
}

void printSort(int *A, int *B, int k, int min)
{
	printf("B[%d]=%d\t\tA[%d]=%d\n", k, B[k], min, A[min]);
}
