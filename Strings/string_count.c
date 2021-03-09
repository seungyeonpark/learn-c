#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int max = 0;
	int ch;

	ch = getchar();
	// break out if return value is -1(ctrl + z)
	while (ch != -1)
	{
		// Until the enter key is pressed,
		if (ch != '\n')
		{
			// count the numbers
			cnt++;
		}
		else
		{
			if (cnt > max) {
				max = cnt;
			}
			// initialize to 0
			cnt = 0;
		}

		ch = getchar();
	}

	printf("Length of the longest word : %d ", max);
}