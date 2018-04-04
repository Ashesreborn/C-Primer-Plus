/* 第十章编程练习第五题 */
#include <stdio.h>
double Dvalue(double * arr, int n);
int main(void)
{
	double array[10] = {300,50, 100, 20, 4, 5, 6, 7, 8, 9};
	double d_value;
	
	d_value= Dvalue(array, 10);
	printf("The D-value is %f\n",d_value);
	
	return 0;
}

double Dvalue(double * arr, int n)
{
	int i = 0;
	double maxvalue, minvalue, d_value;
	maxvalue = minvalue = arr[i];
	
	for(i = 0; i < n; i++)
	{
		if(arr[i] > maxvalue)
			maxvalue = arr[i];
		if(arr[i] < minvalue)
			minvalue = arr[i];
	}
	d_value = maxvalue - minvalue;
	
	return d_value;
}
