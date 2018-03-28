/* 第六章编程练习第十七题 */
#include <stdio.h>
int main(void)
{
	double bonus = 1000000;
	int i;
	
	for(i = 0;bonus > 100000;i++)
	{
		bonus = bonus * (1 + 0.08);
		bonus = bonus - 100000;
		printf("%f\n",bonus);
		
	}
	printf("%d years later,the money is over.\n",i);
}
