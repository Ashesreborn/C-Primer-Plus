/* �ڰ��±����ϰ������ */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int countupp = 0, countlow = 0;
	
	while((ch = getchar()) != EOF)
	{
		if(islower(ch))
			countlow++;
		else if(isupper(ch))
			countupp++;
		
	}
	printf("��д��ĸ����Ϊ��%d,Сд��ĸ����Ϊ:%d\n", countupp,countlow);
	
	return 0;
}
