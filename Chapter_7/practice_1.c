/* �ڶ��±����ϰ��һ�� */
#include <stdio.h>
int main(void)
{
	char cha;
	int space = 0, lines = 0, other = 0;
	
	printf("Please enter :");
	while(scanf("%c",&cha)==1 && cha != '#')
	{
		if(cha == ' ')
			space++;
		else if(cha == '\n')
			lines++;
		else
			other++;
			
	}
	printf("�ո���Ϊ��%d,���з���:%d,���������ַ�:%d\n",space, lines, other);
	
	return 0;
}
