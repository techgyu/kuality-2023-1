#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int	main()
{
	int money, price, res, menu;


	printf("�ݾ� ����: ");
	scanf(" %d", &money);


	printf("\n----------MENU--------- \n");
	printf("�޴�1: ���̴� - 1000won \n");
	printf("�޴�2: �ݶ�   - 1100won \n");
	printf("�޴�3: ����   - 1200won \n");
	printf("�޴�4: ��     -  500won \n");
	printf("�޴�5: ��ĵ   - 1500won \n");
	printf("----------------------- \n");

	printf("\n������� �����ϼ���(���ڷ� �Է��ϼ���): ");
	scanf(" %d", &menu);
	

	switch (menu)
	{
	case 1:
		printf("�޴�1: ���̴� - 1000won�� ���� �Ǿ����ϴ�. \n");
		price = 1000;
		break;
	case 2:
		printf("�޴�2: �ݶ�   - 1100won�� ���� �Ǿ����ϴ�. \n");
		price = 1100;
		break;
	case 3:
		printf("�޴�3: ����   - 1200won�� ���� �Ǿ����ϴ�. \n");
		price = 1200;
		break;
	case 4:
		printf("�޴�4: ��     -  500won�� ���� �Ǿ����ϴ�. \n");
		price = 500;
		break;
	case 5:
		printf("�޴�5: ��ĵ   - 1500won�� ���� �Ǿ����ϴ�. \n");
		price = 1500;
		break;
	default:
		printf("ó������ �ٽ� ���ּ���!");
		return 1;
	}

	res = money - price;

	if (res >= 0)
	{
		printf("�ܵ��� %d�Դϴ�", res);
		printf("������ �Ϸ�Ǿ����ϴ�. �����մϴ�.\n");
	}
	else if (res < 0)
	{
		printf("�ܾ��� �����մϴ�. ó������ �ٽ� �̿����ּ���");
		return 1;
	}
	else
	{
		printf("error!");
		return 1;
	}
	
}