#pragma warning(disable:4996)
#include <stdio.h>


int main()
{
	char name[100];
	int grade1, grade2, grade3, grade4, grade5, grade6, grade7, sum;
	double ave;


	printf("������ �̸��� �Է��ϼ���:");
	scanf(" %s", &name);

	printf("��ȣ������ ������ �Է��ϼ���:");
	scanf(" %d", &grade1);

	printf("Global English���� ������ �Է��ϼ��� :");
	scanf(" %d", &grade2);

	printf("�۾��⥰�� ������ �Է��ϼ���:");
	scanf(" %d", &grade3);

	printf("���̽����α׷����� ������ �Է��ϼ���:");
	scanf(" %d", &grade4);

	printf("��ǻ�;��I�� ������ �Է��ϼ���:");
	scanf(" %d", &grade5);

	printf("��ǻ�;��ǽ����� ������ �Է��ϼ���:");
	scanf(" %d", &grade6);

	printf("���ʹ������й׿����� ������ �Է��ϼ���:");
	scanf(" %d", &grade7);

	printf("----------------------------\n\n\n\n\n");
	sum = grade1 + grade2 + grade3 + grade4 + grade5 + grade6 + grade7;
	ave = (double) sum / 7.0;
	
	printf("%s�� ��� ������ %.1lf�Դϴ�.\n", name, ave);

	return 0;
}
