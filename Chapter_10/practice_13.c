/* 第十章编程练习第十三题 */
#include <stdio.h>
#define COLS 5
void enter(double ar[][COLS], int n);
void average_line(double * arr);
double max(double arr[][COLS], int n);
double average_tot(double arr[][COLS], int n);

int main(void)
{
	int i;
	double arr[3][5];
	double subtot, maxo;
	printf("Please enter the three group number(every group have five number):\n");
	enter(arr, 3);
	for(i = 0; i < 3; i++)
		average_line(arr[i]);
	subtot = average_tot(arr, 3);
	printf("The all number average is %f\n",subtot);
	maxo = max(arr,3);
	printf("The max number is %f\n", maxo);
	
	return 0;
}

void enter(double ar[][COLS], int n)
{
	int i, j;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < COLS; j++)
			scanf("%lf", &ar[i][j]);
	
}

void average_line(double * arr)
{
	int i;
	double total = 0, average;
	
	for(i = 0; i < COLS; i++)
		total = total + arr[i];
	average = total / 5;
	printf("The group's average is %f\n", average);
}

double average_tot(double arr[][COLS], int n)
{
	int i, j;
	double total, subtot;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < COLS; j++)
			total = arr[i][j];
	subtot = total / (n * COLS);
	
	return subtot;
}

double max(double arr[][COLS], int n)
{
	int i, j;
	double max = 0;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < COLS; j++)
			if(arr[i][j] > max)
				max = arr[i][j];
	
	return max;
}

