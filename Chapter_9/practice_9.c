/* 第九章编程练习第九题 */
#include <stdio.h>
double power(double n, int p);		//ANSI函数原型
double power2(double p, int n);
int main(void)
{
	double x, xpow;
	int exp;
	
	printf("Enter a number and the integer power ");
	printf(" to whic\nthe number will be raised. Enter q");
	printf("to quit.\n");
	while(scanf("%lf %d",&x, &exp) == 2)	
	{
		xpow = power(x, exp);		//函数调用
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n"); 
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	
	return 0;
} 

double power(double n, int p)			//函数定义
{
	double pow = 1;
	int i;
	
	if(n == 0)
	{
		if(p == 0)
		{
			printf("It is undefined,so ");
			return 1;	
		}
		pow = 0;
		return  0;
	}
	if(p == 0)
	{
		
			pow = 1;
			return pow;
	}
	if(p < 0)
	{
		p = -p;
		pow = power2(n,p);
		pow = 1.0 / pow;

	}
	else
	{ 
		pow = power2(n, p);
		printf("%f\n",pow);
	}

	return pow;							//返回pow的值 
} 

double power2(double p, int n)
{
	double pow = 1;
	
	if(n > 1)
	{
		n = n-1;
		pow = power2(p, n);
		pow *= p;
	}
	else
	{
		pow *= p;
	}
	return pow;
}
