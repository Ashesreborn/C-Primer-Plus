/* 第七章编程练习第十一题 */
#include <stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT_B 100
#define DISCOUNT_RATE 0.5
#define GRADE1 5
#define GRADE2 20
#define rate 6.5
#define rate2 14
#define rate3 0.5
int main(void)
{
	char ch;
	float number, discount = 0, artichoke_sum = 0,beet_sum = 0,carrot_sum = 0,price_total,weight_total,freight,artichoke_price,beet_price,carrot_price,order_price,price_final;
	
	printf("Please enter your choice:\n");
	printf("a)Artichoke				b)beet\n");
	printf("c)Carrot				q)quit\n");
	while(1)
	{
		/*if(ch != 'a' || ch != 'b' || ch != 'c')
		{
			printf("Please enter the true character\n");
			continue;
		}*/
		scanf("%c",&ch);
		fflush(stdin);
		switch(ch)
		{
			case 'a':
				printf("Please enter the number you want:");
				scanf("%f",&number);
				fflush(stdin);
				artichoke_sum = artichoke_sum + number;
				break;
			case 'b':
				printf("Please enter the number you want:");
				scanf("%f",&number);
				beet_sum = beet_sum + number;
				break;
			case 'c':
				printf("Please enter the number you want:");
				scanf("%f",&number);
				carrot_sum = carrot_sum + number;
				break;
			case 'q':break;
			default:
				printf("Please enter the true character\n");
				continue;
		}
		if(ch == 'q')
			break;
		else 
		{
		printf("Please enter your choice:\n");
		printf("a)Artichoke				b)beet\n");
		printf("c)Carrot				q)quit\n");
			continue;
		}
	}
	artichoke_price = artichoke_sum * ARTICHOKE;
	beet_price = beet_sum * BEET;
	carrot_price = carrot_sum * CARROT;
	price_total = artichoke_price + beet_price + carrot_price;
	if(price_total > DISCOUNT_B)
		discount = price_total * DISCOUNT_RATE;
	weight_total = artichoke_sum + beet_sum + carrot_sum;
	if(weight_total < GRADE1)
		freight = rate;
	else if(weight_total < GRADE2)
		freight = rate2;
	else
		freight = rate2 + (freight - GRADE2) * rate3;
	order_price = price_total + freight;
		
	printf("The artichoke's price is %f,beet's price is %f,carrot's price is %f\n",ARTICHOKE,BEET,CARROT);
	printf("The goods total weight is %f\n",weight_total);
	printf("The vegetable price is %f\n",price_total);
	if(discount != 0)
	{
		printf("The discount is %f\n",discount);
		price_final = order_price + freight -discount;
	}
	printf("The freitht si %f\n",freight);
	
	printf("The final price cost is %f\n",order_price);
	
	return 0;
}
