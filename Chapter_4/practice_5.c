/* 第四章编程练习第五题 */
#include <stdio.h>
int main(void)
{
	float megap,megab;
	
	printf("Please enter the speed and the size:");
	scanf("%f %f",&megap, &megab);
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n",megap,megab,megab*8/megap);
}
