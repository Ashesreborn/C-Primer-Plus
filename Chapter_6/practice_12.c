/* 第六章编程练习第十二题 */
#include <stdio.h>
void summ(int i);
int main(void)
{
	int i;
	
	printf("Please enter a number:");
	scanf("%d",&i);
	while(i > 0)
	{
		summ(i);
		printf("Please enter the next number:");
		scanf("%d",&i);
	}
	summ(100);
	summ(1000);
	summ(10000);
	
	return 0;
}

void summ(int i)
{
	double j,sum;
	
	if(i%2 == 0)
		for(j = 1;j < i;j = j + 2)
			sum = sum + 2*(1.0/j);
	else
		for(j = 1;j <=i; j=j+2)
			sum = sum + 2*(1.0/j);
	printf("The sum is %f\n",sum);
		
}
