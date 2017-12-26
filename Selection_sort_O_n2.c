#include<stdio.h>

int SelectionSort(int A[], int n);

void main()
{
	int n, i;
	int A[20];

	printf("Enter the size of array"); //Input length of array
	scanf("%d", &n);

	printf("Enter the array"); //Input elements of array
	for (i = 1; i <= n; i++)
		scanf("%d", &A[i]);

	SelectionSort(A, n); //Call function
	
	for (i = 1; i <= n; i++) 
		printf("%d ", A[i]); //Print sorted array

}

int SelectionSort(int A[], int n)
{
	int i, j, min, temp, min_index;

	for (i = 1; i <= n; i++)
	{
		min = A[i];
		min_index = i;

		for (j = i + 1; j <= n; j++)
		{
			if (A[j] < min) //Compare jth element with minimum element
			{
				min = A[j];
				min_index = j;
			}
		}

		A[min_index] = A[i]; //swap minimum element to its correct position
		A[i] = min;
	}

}
