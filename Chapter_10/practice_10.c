/* 第十章编程练习第十题 */
#include <stdio.h>
void sum(int * arr1, int * arr2, int * arr3, int n);
void show(const int * arra, int n);
int main(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {2, 4, 6, 8, 10};
	int arr3[5];
	
	sum(arr1, arr2, arr3, 5);
	show(arr3, 5);
	
	return 0;
}

void sum(int * arr1, int * arr2, int * arr3, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
}

void show(const int * arra, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		printf("%d ", arra[i]);
	putchar('\n');
}
