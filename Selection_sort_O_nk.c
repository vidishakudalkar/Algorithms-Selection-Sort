#include<stdio.h>

int SelectionSortk(int A[], int n, int k);

void main()
{
	int n, i, k;
	int A[20];

	printf("Enter length"); //Input length of array
	scanf("%d", &n);

	printf("Enter the array"); //Input elements of array
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	printf("Enter k"); //Input k 
	scanf("%d", &k);

	SelectionSortk(A, n, k);//Function call to sort elements

	for (i = 0; i < k; i++) // Print k-element sorted array
		printf("%d ", A[i]);

}

int SelectionSortk(int A[], int n, int k)
{
	int i, j, min, temp, min_index;

	for (i = 0; i < k; i++)
	{
		min = A[i];
		min_index = i;

		for (j = i + 1; j < n; j++)
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
