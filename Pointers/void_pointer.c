#include <stdio.h>
#include <string.h>

void swap(char* type, void* a, void* b);

int main(void)
{
	int age1, age2;
	double height1, height2;

	printf("Enter the age and height of the first : ");
	scanf("%d %lf", &age1, &height1);

	printf("Enter the age and height of the second : ");
	scanf("%d %lf", &age2, &height2);

	printf("# Before swapping ... \n");
	printf("The age and height of the first : %d %.1lf\n", age1, height1);
	printf("The age and height of the second : %d %.1lf\n", age2, height2);

	// pass the type by string
	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("# After swapping ... \n");
	printf("The age and height of the first : %d %.1lf\n", age1, height1);
	printf("The age and height of the second : %d %.1lf\n", age2, height2);
}

void swap(char* type, void* a, void* b)
{
	if (strcmp(type, "int") == 0)
	{
		int temp;

		// void to int
		temp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}
	else
	{
		double temp;

		// void to double
		temp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = temp;
	}
}