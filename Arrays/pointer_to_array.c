#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

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
		printf("번호 입력 : ");
		scanf("%d", lotto_nums + index);

		for (i = 0; i < index; i++)
		{
			if (lotto_nums[i] == lotto_nums[index])
			{
				printf("같은 번호가 있습니다!\n");
				duplicate = 1;
				break;
			}
		}

		if (!duplicate)
			index++;
	}
}

void print_nums(int* lotto_nums)
{
	int i;
	printf("로또 번호 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}