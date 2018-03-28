/* 第六章编程练习第十四题 */
#include <stdio.h>
int main(void)
{
	int i;
	double numo[8],numt[8];
	
	printf("Please enter eight number:");
	for(i = 0; i < 8; i++)
		scanf("%lf",&numo[i]);
	numt[0]=numo[0];
	for(i = 1; i < 8; i++)
		numt[i] = numo[i]+numt[i-1];
	for(i = 0;i < 8;i++)
		printf("%6.2f",numo[i]);
	printf("\n");
	for(i = 0; i < 8;i++)
		printf("%6.2f",numt[i]);
	
	
	return 0;	
}
