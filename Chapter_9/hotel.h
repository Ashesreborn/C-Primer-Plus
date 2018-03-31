/* hotel.h -- 符号常量和 hotel.c 中所有函数的原型 */
#define QUIT 5
#define  HOTEL1 180.00
#define  HOTEL2 225.00
#define  HOTEL3 255.00
#define  HOTEL4  355.00
#define  DISCOUNT 0.95
#define STARS "*********************************"

//显示选择列表
int menu(void);

//返回预订天数
int getnights(void);

//根据费率,入住天数计算费用
//并显示结果
void showprice(double rate, int nights);
/*
下面是这个多文件程序的运行示例：
*********************************
Enter the number of the desired hotel:
printf("Enter the number of the desired hotel:\n");
printf("1) Fairfield Arms		2) Hotel Olympic\n");
printf("3) Chertwothy Plaza		4) The Stockton\n");
printf("5) quit\n");
*********************************
3
How any nights are needed?1
The total cost will be $255.00.

*********************************
printf("Enter the number of the desired hotel:\n");
printf("1) Fairfield Arms		2) Hotel Olympic\n");
printf("3) Chertwothy Plaza		4) The Stockton\n");
printf("5) quit\n");
*********************************
4
How many nights are needed?3
The total cost will be $1012.64.
*********************************
printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms		2) Hotel Olympic\n");
	printf("3) Chertwothy Plaza		4) The Stockton\n");
	printf("5) quit\n");
*********************************
5
Thank you and goodbye.
*/
 
