#include <stdio.h>

char* my_strcpy(char* pd, const char* ps);
char* my_strcat(char* pd, const char* ps);
int my_strlen(const char* ps);
int my_strcmp(const char* pa, const char* pb);

int main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];

	gets(str1);
	gets(str2);
	gets(str3);

	my_strcpy(str1, str2);
	puts(str1);

	my_strcat(str1, str2);
	puts(str1);

	printf("%d\n", my_strlen(str2));

	printf("%d\n", my_strcmp(str2, str3));
}

char* my_strcpy(char* pd, const char* ps)
{
	char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}

char* my_strcat(char* pd, const char* ps)
{
	char* po = pd;

	while (*pd != '\0')
	{
		pd++;
	}

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}

int my_strlen(const char* ps)
{
	int cnt = 0;

	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}

	return cnt;
}

int my_strcmp(const char* pa, const char* pb)
{
	while ((*pa == *pb) && (*pa != '\0'))
	{
		pa++;
		pb++;
	}

	if (*pa > *pb)
	{
		return 1;
	}
	else if (*pa < *pb)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
