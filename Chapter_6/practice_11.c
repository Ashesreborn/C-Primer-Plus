/* 第六章编程练习第十一题 */
#include <stdio.h>
int main(void)
{
	int i,numb[8];
	
	for(i = 0;i < 8;i++)
		scanf("%d",&numb[i]);
	for(i = 7; i>=0;i--)
		printf("%d\n",numb[i]);
		
	return 0;
}
