


 #include <stdio.h>

int main()
{
	//const int AMOUNT = 100; 
	int amount = 100;
	int price = 0;

	printf("�������Ԫ��:");
	scanf("%d",&price);
	
	printf("������Ʊ�棨Ԫ����");
	scanf("%d",&amount);
	 
	int change = amount-price;
	printf("����%dԪ��\n",change);
	return 0;
	
 } 
