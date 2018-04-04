/* 第十章编程练习第十一题 */
#include <stdio.h>
#define COLS 5
int main(void)
{
	int arr[3][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10},
		{ 11, 12, 13, 14, 15}
	};
	
	show(arr, 3);
	douarr(arr, 3);
	printf("****************************************************\n");
	show(arr, 3);
	
	return 0;
}

void show(int arr[][COLS], int n)
{
	int i, j;
	
	for(i = 0; i < n ;i++ )
	{
		for(j = 0; j < COLS; j++)
			printf("%d    ", arr[i][j]);
		printf("\n");
	}
}

void douarr(int arr[][COLS], int n)
{
	int i, j;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < COLS; j++)
			arr[i][j] = arr[i][j] * 2;
		
	}
}
