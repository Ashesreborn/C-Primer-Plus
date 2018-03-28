/* 第六章编程练习第十三题 */
#include <stdio.h>
int main(void)
{
	int i, numb[8], sum;
	sum = 1;
	
	for(i = 0;i < 8;i++)
	{
		sum = sum * 2;
		numb[i] = sum;	
	}

	do{
		printf("%d\n",numb[--i]);
	}while(i>0);
	
	return 0;
}
