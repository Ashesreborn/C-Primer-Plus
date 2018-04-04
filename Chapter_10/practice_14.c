/* 第十章编程练习第十四题 */
#include <stdio.h>
#define COLS 5
void enter(int rows, int cols, double ar[rows][cols]);
void average_line(double * arr);
double max(int rows, int cols, double ar[rows][cols]);
double average_tot(int rows, int cols, double ar[rows][cols]);

int main(void)
{
	int i;
	double arr[3][5];
	double subtot, maxo;
	printf("Please enter the three group number(every group have five number):\n");
	enter(3, 5, arr);
	for(i = 0; i < 3; i++)
		average_line(arr[i]);
	subtot = average_tot(3, 5, arr);
	printf("The all number average is %f\n",subtot);
	maxo = max(3, 5, arr);
	printf("The max number is %f\n", maxo);
	
	return 0;
}

void enter(int rows, int cols, double ar[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
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

double average_tot(int rows, int cols, double arr[rows][cols])
{
	int i, j;
	double total, subtot;
	
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
			total = arr[i][j];
	subtot = total / (rows * cols);
	
	return subtot;
}

double max(int rows, int cols, double arr[rows][cols])
{
	int i, j;
	double max = 0;
	
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
			if(arr[i][j] > max)
				max = arr[i][j];
	
	return max;
}

