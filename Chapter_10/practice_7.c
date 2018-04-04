/* 第十章编程练习第七题 */
#include <stdio.h>
void copy_arr(double target1[], double source[], int n);
void show_arr(double arr [][10],int n);
#define COLS 10
int main(void)
{
	int i,j;
	double arr1[3][10] = {0};
	double arr2[3][10];
	
	for(i = 0; i < 3;i++)
	{
		for(j = 0; j < 10; j++)
		{
			arr1[i][j] = i + 2 * j;
		}
	}
	show_arr(arr1, 3);
	printf("****************************************\n");
	for(i = 0; i < 3; i++)
		copy_arr(arr2[i],arr1[i],10);
	show_arr(arr2,3);
	
	return 0;
}

void copy_arr(double target1[], double source[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		target1[i] = source[i];
}

void show_arr(double arr[][COLS],int n)
{
	int i, j;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			printf("%.2f  ", arr[i][j]);
		}
		printf("\n");
	}
			
}
