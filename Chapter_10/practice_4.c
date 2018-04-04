/* 第十章编程练习第四题 */
#include <stdio.h>
int max(double * array, int n);
int main(void)
{
	int i;
	double arr[10] = {1, 50, 3, 4, 5, 6, 7, 8, 9};
	i = max(arr, 10);
	printf("The max value's subscript is %d\n",i);
	
	return 0;
}

int max(double * array, int n)
{
	int i, j;
	double maxvalue = 0;
	
	for(i = 0; i < n; i++)
	{
		if(array[i] > maxvalue)
		{
			maxvalue = array[i];
			j = i;
		}
		
	}
	
	return j;
}
