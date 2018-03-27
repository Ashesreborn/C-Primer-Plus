/* 第五章编程练习第四题 */
#include <stdio.h>
#define CM_P_IN 2.54
#define IN_P_F 12
int main(void)
{
	float height,inches;
	int feet;
	
	printf("Enter a height in centimeters: ");
	scanf("%f",&height);
	while(height > 0)
	{
	inches = height / CM_P_IN;
	feet = inches / IN_P_F;
	inches = inches - (feet * IN_P_F);
	printf("%0.1f cm = %d feet, %.1f inches\n", height, feet, inches);
	printf("Enter a height in centimeters (<=0 to quit): ");
	scanf("%f",&height);
	}
	printf("bye");
	
	return 0;
}
