/* 第十章编程练习第三题 */
#include <stdio.h>
int max(int * maxarr, int n);
int main(void)
{
	int maxvalue;
	int test[10] = {1, 2, 3, 444, 5, 6, 7, 8, 9};
	maxvalue = max(test, 10);
	printf("The max value is:%d\n",maxvalue);
	
	return 0;
}

int max(int * maxarr, int n)
{
	int i;
	int maxvalue = 0;
	
	for(i = 0; i < n; i++)
	{
		if(maxarr[i] > maxvalue)
			maxvalue = maxarr[i];
	}
	
	return maxvalue;
}
