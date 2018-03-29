/* 第七章编程练习第六题 */
#include <stdio.h>
int main(void)
{
	char ch,prech;
	int count = 0;
	
	while((ch = getchar()) != '#')
	{

		if(ch == 'i')
		{
			prech == 'e'? count++:count;
		}
		prech = ch;
	}
	printf("ei 的出现次数为：%d",count);
	
	return 0;
}
