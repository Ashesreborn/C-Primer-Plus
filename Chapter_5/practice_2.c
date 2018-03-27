/* 第二章编程练习第二题 */
#include <stdio.h>
int main(void)
{
	int num,numt;
	
	printf("Please enter a integer:");
	scanf("%d",&num);
	numt = num +10;
	while(num <= numt)
	{
		printf("%d\n",num);
		num++;
	}
	
	return 0;
}
