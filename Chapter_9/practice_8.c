/* 第九章编程练习第八题 */
#include <stdio.h>
double power(double n, int p);		//ANSI函数原型
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
		for(i = 1; i <= p; i++)
			pow *= n;
		pow = 1.0 / pow;
	}
	else
	{ 
		for(i = 1; i <= p; i++)
		{
			pow *= n;

		}
		printf("%f\n",pow);
	}

	return pow;							//返回pow的值 
} 
