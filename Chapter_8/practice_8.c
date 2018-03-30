/* 第八章编程练习第八题 */
#include <stdio.h>
int main(void)
{
	char ch;
	float first,second, result;
	
	printf("Enter the operation of your choice:\n");
	printf("a. add				s. subtract\n");
	printf("m.multiply			d. divide\n");
	printf("q. quit\n");
	while((ch = getchar()) != 'q')
	{
		if(ch != 'a' && ch != 's' && ch != 'm' && ch!= 'd')
		{
			printf("Please input the true choice.\n");
			while((ch = getchar()) != '\n')
				continue;
			continue;
		}
		printf("Enter first number:");
		while(scanf("%f",&first) != 1)
		{
			while((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an number.");
			printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
		}
		printf("Enter second number:");
		while(scanf("%f",&second) != 1)
		{
			while((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an number.");
			printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
		}
		if(ch == 'a')
		{
			result = first + second;
			printf("%f + %f = %f", first, second,result);
		}
		else if(ch == 's')
		{
			result = first - second;
			printf("%f - %f = %f", first, second,result);
			
		}
		else if(ch == 'm')
		{
			result = first * second;
			printf("%f * %f = %f", first, second,result);
		}
		else if(ch == 'd')
		{
			while(second == 0)
			{
				printf("Enter a number other than 0:");
				scanf("%f",&second);
			}
			result = first / second;
			printf("%f / %f = %f", first, second,result);
		}		
		
	}
	printf("Bye.\n");
	
	
	return 0;
}


