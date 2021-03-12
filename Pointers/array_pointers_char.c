#include <stdio.h>
#include <stdlib.h>

struct profile
{
	char name[20];
	char* intro;
}

int main(void)
{
	struct profile student;

	strcpy(student.name, "SeungYeon");
	student.intro = (char*)malloc(80);
	gets(student.intro);

	free(student.intro);

	return 0;
}
