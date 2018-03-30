/* 第八章编程练习第五题 */
#include <stdio.h>
int main(void)
{
	int guess = 50;
	int low = 1;		//最小值
	int upp = 100; 		//最大值
	char ch;
	
	
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\na b if it is big and with an s if it is small.\n");
	printf("Uh...is your number %d?\n",guess);
	while((ch = getchar()) != 'y')
	{
		
		 if(ch == 'b')
			{
				upp = guess;
				guess = (low + upp) / 2;
				printf("Well, then, is it %d? if not ,please pick again\n", guess);
			}
		else if(ch == 's')
		{
			low = guess;
			guess = (upp + low) / 2;
			printf("Well, then, is it %d? if not ,please pick again\n", guess);
		}
		else
			printf("Sorry, I understand only y , b or s.\n");
		while(getchar() != '\n')
			continue;
		
	}
	printf("I keew I could do it!\n");
	printf("Well, then, is it %d.\n", guess);
	
	return 0;
}
