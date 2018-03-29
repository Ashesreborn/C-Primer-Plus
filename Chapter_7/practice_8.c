/* 第七章编程练习第七题 */
#include <stdio.h>
#define BASE_TIME 40
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BASE1 (BREAK1 * RATE1)
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
int main(void)
{
	int hours,number;
	double wage,tax,netin,BASE_PER_H = 0.0;
	
	
		printf("***********************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr					2) $9.33/hr\n");
		printf("3) $10.00/hr					4) $11.20/hr\n");
		printf("5) quit\n");
		printf("***********************************************************\n");
		while(scanf("%d",&number) == 1)
		{
			if(number < 1 ||number >5)
			{
				printf("Please enter the true number:\n");
				printf("***********************************************************\n");
				printf("Enter the number corresponding to the desired pay rate or action:\n");
				printf("1) $8.75/hr					2) $9.33/hr\n");
				printf("3) $10.00/hr					4) $11.20/hr\n");
				printf("5) quit\n");
				printf("***********************************************************\n");
				continue;
			}
			if(number >= 1 && number <= 4)
			{
				switch(number)
				{
					case 1:
							BASE_PER_H = 8.75;
							break;
					case 2:
							 BASE_PER_H = 9.33;
							break;
					case 3:
							 BASE_PER_H = 10.00;
							break;
					case 4:
							 BASE_PER_H = 11.20;
							break;
					default:
							;
				}
			}
			else
				break;
			printf("Please enter your word time:");
			scanf("%d", &hours);
			break;
		}

	if(hours <= BASE_TIME)
		wage = hours * BASE_PER_H;
	else
		wage = (BASE_PER_H * BASE_TIME)+((hours - BASE_TIME) * 1.5 ) * BASE_PER_H;
	if(wage <= BREAK1)
		tax = wage * RATE1;
	else if(wage <= BREAK2)
		tax = BASE1 + (RATE2 * (wage - BREAK1));
	else
		tax = BASE2 + (RATE3 * (wage - BREAK2));
	
	netin = wage - tax;
	printf("工资总额为:%f,税金为:%f,净收入为:%f\n", wage, tax, netin);
	
	return 0;
}  
