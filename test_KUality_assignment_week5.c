#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int	main()
{
	int money, price, res, menu;


	printf("금액 투입: ");
	scanf(" %d", &money);


	printf("\n----------MENU--------- \n");
	printf("메뉴1: 사이다 - 1000won \n");
	printf("메뉴2: 콜라   - 1100won \n");
	printf("메뉴3: 식혜   - 1200won \n");
	printf("메뉴4: 물     -  500won \n");
	printf("메뉴5: 뚱캔   - 1500won \n");
	printf("----------------------- \n");

	printf("\n음료수를 선택하세요(숫자로 입력하세요): ");
	scanf(" %d", &menu);
	

	switch (menu)
	{
	case 1:
		printf("메뉴1: 사이다 - 1000won이 선택 되었습니다. \n");
		price = 1000;
		break;
	case 2:
		printf("메뉴2: 콜라   - 1100won이 선택 되었습니다. \n");
		price = 1100;
		break;
	case 3:
		printf("메뉴3: 식혜   - 1200won이 선택 되었습니다. \n");
		price = 1200;
		break;
	case 4:
		printf("메뉴4: 물     -  500won이 선택 되었습니다. \n");
		price = 500;
		break;
	case 5:
		printf("메뉴5: 뚱캔   - 1500won이 선택 되었습니다. \n");
		price = 1500;
		break;
	default:
		printf("처음부터 다시 해주세요!");
		return 1;
	}

	res = money - price;

	if (res >= 0)
	{
		printf("잔돈은 %d입니다", res);
		printf("결제가 완료되었습니다. 감사합니다.\n");
	}
	else if (res < 0)
	{
		printf("잔액이 부족합니다. 처음부터 다시 이용해주세요");
		return 1;
	}
	else
	{
		printf("error!");
		return 1;
	}
	
}
