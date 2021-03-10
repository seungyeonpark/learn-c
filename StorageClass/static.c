#include <stdio.h>

char* my_token(char* str);

int main(void)
{
	char* rp;
	char str[20];
	gets(str);

	rp = str;
	while ((rp = my_token(rp)))
	{
		printf("%s\n", rp);
		rp = NULL;
	}

	char str2[20];
	gets(str2);

	rp = str2;
	while ((rp = my_token(rp)))
	{
		printf("%s\n", rp);
		rp = NULL;
	}
}

char* my_token(char* str)
{
	// string tokenizer using static variable
	static char* sp;
	char* tp;
	char* rp;

	if (str != NULL)
	{
		sp = str;
	}

	if (*sp == '\0')
	{
		return NULL;
	}

	tp = sp;
	while (*tp != ' ' && *tp != '\0')
	{
		tp++;
	}

	if (*tp != '\0')
	{
		*tp = '\0';
		tp++;
	}

	rp = sp;
	sp = tp;

	return rp;
}
