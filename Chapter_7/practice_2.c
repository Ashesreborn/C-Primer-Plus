/* 第二章编程练习第二题 */
#include <stdio.h>
int main(void)
{
	int numb = 0;
	char ch;
	
	printf("Please enter the character:");
	while(scanf("%c", &ch)==1 && ch != '#')
	{
		printf("%3c-%3d",ch,ch);
		numb++;
		if(numb % 8 == 0)
			printf("\n");
	}
	
	return 0;
} 
