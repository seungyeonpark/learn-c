#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	// pass pointer to the array as an argument
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, duplicate;
	int index = 0;

	while (index < 6)
	{
		duplicate = 0;
		printf("Enter a number : ");
		scanf("%d", lotto_nums + index);

		for (i = 0; i < index; i++)
		{
			if (lotto_nums[i] == lotto_nums[index])
			{
				printf("Duplicate number!\n");
				duplicate = 1;
				break;
			}
		}

		if (!duplicate)
			// point to the next location
			index++;
	}
}

void print_nums(int* lotto_nums)
{
	int i;
	printf("Lotto numbers : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}