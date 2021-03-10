#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("Enter three real numbers : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("Sorted values : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	// swap two numbers using pointers
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	// sort numbers in descending order
	if (*maxp < *midp) {
		swap(maxp, midp);
	}

	if (*maxp < *minp) {
		swap(maxp, minp);
	}

	if (*midp < *minp) {
		swap(midp, minp);
	}
}