#include <stdio.h>

typedef struct
{
	int num;
	char name[20];
	int kor;
	int eng;
	int mat;
	int tot;
	double avg;
	char grade;
} Student;

void input_data(Student* ary);
void print_data(Student* ary);
void sort_data(Student* ary);

int main(void)
{
	Student list[5];

	input_data(list);

	printf("# 정렬 전 데이터 ...\n");
	print_data(list);

	sort_data(list);

	printf("# 정렬 후 데이터 ...\n");
	print_data(list);
}

void input_data(Student* ary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("학번 : ");
		scanf("%d", &ary->num);
		printf("이름 : ");
		scanf("%s", ary->name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d%d%d", &ary->kor, &ary->eng, &ary->mat);
		ary->tot = ary->kor + ary->eng + ary->mat;
		ary->avg = ary->tot / 3.0;
		if (ary->avg >= 90)
			ary->grade = 'A';
		else if (ary->avg >= 80)
			ary->grade = 'B';
		else if (ary->avg >= 70)
			ary->grade = 'C';
		else
			ary->grade = 'F';
		ary++;
	}
}

void print_data(Student* ary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%5d %s%5d%5d%5d%5d%5.1lf%5c\n",
			ary->num, ary->name, ary->kor, ary->eng, ary->mat, ary->tot, ary->avg, ary->grade);
		ary++;
	}
}

void sort_data(Student* ary)
{
	int i, j, max;
	Student temp;

	for (i = 0; i < 4; i++)
	{
		max = i;
		for (j = i + 1; j < 5; j++)
		{
			if (ary[max].tot < ary[j].tot)
			{
				max = j;
			}
		}

		if (max != i)
		{
			temp = ary[i];
			ary[i] = ary[max];
			ary[max] = temp;
		}
	}
}