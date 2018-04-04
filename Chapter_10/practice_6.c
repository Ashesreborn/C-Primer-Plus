/* 第十章编程练习第六题 */
#include <stdio.h>
void reverse(double * arr,int n);
int main(void)
{
	double arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	show_arr(arr, 10);
	reverse(arr, 10);
	show_arr(arr, 10);
	
	return 0;
} 

void reverse(double * arr,int n)
{
	int i = 0;
	double temp;
	
	while(i < n)
	{
		temp = arr[i];
		arr[i] = arr[n-1];
		arr[n-1] = temp;
		i++;
		n--;
	}
	
}

void show_arr(double * arr, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		printf("%.2f    ",arr[i]);
	putchar('\n');
}
