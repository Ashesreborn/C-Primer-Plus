/* 第七章编程练习第十题 */
#include <stdio.h>
#define SINGL_GRADE 17850
#define HOUSEH_GRADE 23900
#define MARRY_TOGE 19750
#define MARRY_DISS 14875
#define RATE1 0.15
#define RATE2 0.28
int main(void)
{
	double wage, grade, tax;
	int number;
	
	while(1)
	{
	
	printf("***********************************************************\n");
	printf("Enter the your life class:\n");
	printf("1)  single				2)  household\n");
	printf("3)  marry_common				4)  marry_diss\n");
	printf("5) quit\n");	
	printf("***********************************************************\n");	
	while(scanf("%d",&number) == 1)
	{
		if(number < 1 ||number >5)
		{
			printf("Please enter the true number:\n");
			printf("***********************************************************\n");
			printf("Enter the number corresponding to the desired pay rate or action:\n");
			printf("1)  single				2)  household\n");
			printf("3)  marry_common				4)  marry_diss\n");
			printf("5) quit\n");	
			printf("***********************************************************\n");
			continue;
		}
		if(number >= 1 && number <= 4)
		{
			switch(number)
			{
				case 1:
						grade = SINGL_GRADE;
							break;
				case 2:
						grade = HOUSEH_GRADE;
				    		break;
				case 3:
						grade = MARRY_TOGE;
							break;
				case 4:
						grade = MARRY_DISS;
							break;
				default:
						;
			}
		}
		else
			break;
	//	printf("%f",grade);
		printf("Please enter your  wage:");
		scanf("%lf", &wage);
		break;
	}
	if(wage <= grade)
		tax = wage * RATE1;
	else
		tax = grade * RATE1 + (wage - grade) * RATE2;
	
	printf("tax is %f\n\n\n",tax);
}
	return 0;
} 
