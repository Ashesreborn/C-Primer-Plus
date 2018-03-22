/* 第二章编程练习第三题 */
#include <stdio.h>
int main(void)
{
	int days,ages;
	
	printf("Please enter your age:");
	scanf("%d",&ages);
	days=ages*365;
	printf("%d age is %d days!\n",ages,days);
	
	return 0;
}
