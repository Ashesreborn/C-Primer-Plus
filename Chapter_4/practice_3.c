/* 第四章编程练习第四题 */
#include <stdio.h>
int main(void)
{
	float numb;
	
	printf("Please enter a float number: ");
	scanf("%f",&numb);
	printf("The input is %0.1f or %.1e\n",numb, numb);
	printf("The input is %+0.3f or %.3E\n",numb, numb);
	
	return 0;
} 
