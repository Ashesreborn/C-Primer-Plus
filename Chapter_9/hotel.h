/* hotel.h -- ���ų����� hotel.c �����к�����ԭ�� */
#define QUIT 5
#define  HOTEL1 180.00
#define  HOTEL2 225.00
#define  HOTEL3 255.00
#define  HOTEL4  355.00
#define  DISCOUNT 0.95
#define STARS "*********************************"

//��ʾѡ���б�
int menu(void);

//����Ԥ������
int getnights(void);

//���ݷ���,��ס�����������
//����ʾ���
void showprice(double rate, int nights);
/*
������������ļ����������ʾ����
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
 
