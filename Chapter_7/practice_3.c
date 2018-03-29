/* 第二章编程练习第三题 */
#include <stdio.h>
int main(void)
{
	int numb, even = 0, odd = 0,sum1 = 0, sum2 = 0;
	float aver1, aver2;
	
	printf("Please enter the num:");
	while(scanf("%d",&numb) == 1 && numb != 0)
	{
		if(numb % 2 == 0 && numb != 0)
		{
			sum1 = sum1 + numb;
			even++;

		}
		else if(numb % 2 == 1)
		{
			sum2 = sum2 + numb;
			odd++;
		}
		else
		{
			;
		}
		
	}
	aver1 = (float)sum1 / even;
	aver2 = (float)sum2 / odd;
	printf("偶数个数为：%d,偶数平均数为：%f\n", even,aver1);
	printf("奇数个数为: %d,偶数平均数为：%f\n", odd, aver2);
	
	return 0;
}
