/* 第六章编程练习第十五题 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch, arra[256];
	int i = 0;
	
	printf("Please enter one sentence:");
	scanf("%c",&ch);
	while('\n' != ch && i<=255)
	{
		arra[i++] = ch;
		scanf("%c",&ch);
	}
	for(i = strlen(arra)-1;i >=0;i--)
		printf("%c",arra[i]);
		
	return 0;
} 
