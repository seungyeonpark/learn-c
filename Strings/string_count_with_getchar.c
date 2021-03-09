#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int max = 0;
	int ch;

	ch = getchar();
	while (ch != EOF)
	{
		if (ch != '\n')
		{
			cnt++;
		}
		else
		{
			if (cnt > max)
				max = cnt;
			cnt = 0;
		}

		ch = getchar();
	}

	printf("가장 긴 단어의 길이 : %d ", max);
}