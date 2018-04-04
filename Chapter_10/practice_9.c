/* 第十章编程练习第九题 */
#include <stdio.h>
void copy_arr(int rows, int cols, double target[rows][cols],double source[rows][cols]);
void show(int rows, int cols, double arr[rows][cols]);
int main(void)
{
	double arr[3][5] = {
		{1, 2, 3, 4, 5 },
		{10, 20, 30, 40, 50 },
		{100, 200, 300, 400, 500 },
	};
	double arr2[3][5];
	
	copy_arr(3, 5, arr2, arr);
	show(3, 5, arr2);
	
	return 0;
}

void copy_arr(int rows, int cols, double target[rows][cols],double source[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
		for(j =0; j < cols; j++)
			target[i][j] = source[i][j];
			
}

void show(int rows, int cols, double arr[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0;j < cols; j++)
			printf("%.2f  ", arr[i][j]);
		putchar('\n');
	}
}
