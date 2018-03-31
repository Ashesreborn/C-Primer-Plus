/* 第九章编程练习第十一题 */
#include <stdio.h>
long Fibonacci(int n);
int main(void)
{
	int n;
	long number;
	
	printf("Please enter a number:");
	scanf("%d",&n);
	number = Fibonacci(n);
	printf("The value si %ld",number);
	
	return 0;
}

long Fibonacci(int n)
{
	long prec1 = 1, prec2 = 1;
	long number;
	int i;
	
	if(n == 1|| n ==2)
		return 1;
	for(i = 3; i <= n; i++)
	{
		number = prec1 + prec2;
		prec1 = prec2;
		prec2 = number;
	}
	
	return number;
}
