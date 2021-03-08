#include <stdio.h>
#include <string.h>

void swap(char* type, void* a, void* b);

int main(void)
{
	int age1, age2;
	double height1, height2;

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age1, &height1);

	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age2, &height2);

	printf("# 수정 전 나이와 키 ... \n");
	printf("첫 번째 사람의 나이와 키 : %d %.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d %.1lf\n", age2, height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("# 수정 후 나이와 키 ... \n");
	printf("첫 번째 사람의 나이와 키 : %d %.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d %.1lf\n", age2, height2);
}

void swap(char* type, void* a, void* b)
{
	if (strcmp(type, "int") == 0)
	{
		int temp;

		temp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}
	else
	{
		double temp;

		temp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = temp;
	}
}