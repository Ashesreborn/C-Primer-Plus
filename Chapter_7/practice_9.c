/* �ھ��±����ϰ�ھ��� */
#include <stdio.h>
int main(void)
{
	int number,i,j;
	
	while(scanf("%d", &number) == 1 && number > 0)
	{
		for(i = 2; i <= number;i++)
		{
			int prime = 1;
			for(j = 2; j < i;j++)
			{
				if(i % j == 0)
				{
				//	printf("%d ��һ������.\n",i );
					prime = 0;
					break;
				}

			}
			if(prime == 1)
				printf("%d ��һ������.\n",i );
		}
	}
	
	return 0;
}
