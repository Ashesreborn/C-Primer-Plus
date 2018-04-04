/* 第十章编程练习第八题 */
#include <stdio.h>
void copy_ptr(double * target2, double * source, int n);
void show(const double * arra, int n);
int main(void)
{
	double arr[7] = {1, 2, 3, 4, 5, 6, 7};
	double arr2[3];
	
	copy_ptr(arr2, arr+2, 3);
	show(arr2,3);
	
	return 0;
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

void show(const double * arra, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		printf("%8.3f ", arra[i]);
	putchar('\n');
}
