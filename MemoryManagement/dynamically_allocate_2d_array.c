#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int** matrix;
	int i, j;
	int a = 1;

	// dynamically allocate a 2D array
	matrix = (int**)malloc(4 * sizeof(int*));

	if (matrix == NULL)
	{
		printf("Error - unable to allocate required memory");
		exit(1);
	}

	for (i = 0; i < 4; i++)
	{
		matrix[i] = (int*)malloc(5 * sizeof(int));
		if (matrix[i] == NULL)
		{
			printf("Error - unable to allocate required memory");
			exit(1);
		}
	}

	// store and print the data in 2d array
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
		// matrix[i][j] is same as *(*(matrix+i)+j) 
			matrix[i][j] = a++;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	// free allocated memory
	for (i = 0; i < 4; i++)
	{
		free(matrix[i]);
	}

	free(matrix);

	return 0;
}

