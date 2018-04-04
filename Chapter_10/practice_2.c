/* 第十章编程练习第二题 */
#include <stdio.h>
void copy_arr(double target1[], double source[], int n);
void copy_ptr(double * target2, double * source, int n);
void copy_ptrs(double * target3, double * source, double * end);
void show(const double * arra, int n);
int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	
	copy_ptrs(target3, source, source + 5);
	show(source, 5);
	show(target1,5);
	show(target2,5);
	show(target3,5);
	
	return 0;
}

void copy_arr(double target1[], double source[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		target1[i] = source[i];
}

void copy_ptr(double * target2, double * source, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		target2[i] = *source;
		source++;
	}
	
}

void copy_ptrs(double * target3, double * source, double * end)
{
	int i = 0;
	
	while(source < end)
	{
		target3[i] = *source;
		i++;
		source++;
	}
}

void show(const double * arra, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		printf("%8.3f ", arra[i]);
	putchar('\n');
}
