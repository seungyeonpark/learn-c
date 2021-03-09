#include <stdio.h>

int main(void)
{
	int i, j;
	// initialize from 1 to 20.
	int ary[5][6] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20}
	};

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			// store the sum of each column in the last row
			ary[i][5] += ary[i][j];
			// store the sum of each row in the last column
			ary[4][j] += ary[i][j];
			// store the sum of all elements in tne last element
			ary[4][5] += ary[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}
}