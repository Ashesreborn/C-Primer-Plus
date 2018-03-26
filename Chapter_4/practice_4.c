/* 第四章编程练习第四题 */
#include <stdio.h>
int main(void)
{
	float height,heightwo;
	char name[30];
	
	printf("Please enter your height(Inches) and your name:");
	scanf("%f %s",&height, name);
	printf("%s, you are %f feet tall\n",name,height/12);
	printf("Please enter your height(cm): ");
	scanf("%f",&heightwo);
	printf("Your height is %f m",heightwo/100);
	
	return 0;
}
