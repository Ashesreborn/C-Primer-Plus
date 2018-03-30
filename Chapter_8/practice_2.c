/* 第二章编程练习第二题 */
#include <stdio.h>
int main(void)
{
	char ch;
	int count; 
	
	while((ch = getchar()) != EOF)
	{
		if(ch < ' ' && ch != '\n' && ch != '\t')
			printf("%c-%d   ",ch,ch);
		else if(ch == '\n')
			printf("\\n-%d   ", ch);
		else if(ch == '\t')
			printf("\\t-%d   ", ch);
		else	
		printf("%c-%d   ", ch, ch);
		count++;
		if(count % 10 == 0)
			printf("\n");
	}
	
	return 0;
}
