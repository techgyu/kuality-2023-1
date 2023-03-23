#pragma warning(disable:4996)
#include <stdio.h>


int main()
{
	char name[100];
	int grade1, grade2, grade3, grade4, grade5, grade6, grade7, sum;
	double ave;


	printf("본인의 이름을 입력하세요:");
	scanf(" %s", &name);

	printf("암호수학의 성적을 입력하세요:");
	scanf(" %d", &grade1);

	printf("Global EnglishⅠ의 성적을 입력하세요 :");
	scanf(" %d", &grade2);

	printf("글쓰기Ⅰ의 성적을 입력하세요:");
	scanf(" %d", &grade3);

	printf("파이썬프로그래밍의 성적을 입력하세요:");
	scanf(" %d", &grade4);

	printf("컴퓨터언어I의 성적을 입력하세요:");
	scanf(" %d", &grade5);

	printf("컴퓨터언어실습Ⅰ의 성적을 입력하세요:");
	scanf(" %d", &grade6);

	printf("기초미적분학및연습의 성적을 입력하세요:");
	scanf(" %d", &grade7);

	printf("----------------------------\n\n\n\n\n");
	sum = grade1 + grade2 + grade3 + grade4 + grade5 + grade6 + grade7;
	ave = (double) sum / 7.0;
	
	printf("%s의 평균 학점은 %.1lf입니다.\n", name, ave);

	return 0;
}
