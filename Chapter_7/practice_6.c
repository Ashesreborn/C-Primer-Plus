/* �����±����ϰ������ */
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
	printf("ei �ĳ��ִ���Ϊ��%d",count);
	
	return 0;
}
