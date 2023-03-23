#include <Stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)


int main() {
	int n1, n2, n3;
	char c;

	printf("input number:");
	scanf(" %d %d %d", &n1, &n2, &n3);
	printf("input operator:");
	scanf(" %c", &c);
	
	if (c == '*') {
		printf("%d * %d * %d = %d \n", n1, n2, n3, n1 * n2 * n3);
	}
	else if (c == '+') {
		printf("%d + %d + %d = %d \n", n1, n2, n3, n1 + n2 + n3);
	}
	else if (c == '-') {
		printf("%d - %d - %d = %d \n", n1, n2, n3, n1 - n2 - n3);
	}
	else if (c == '/') {
		printf("%d / %d / %d = %d \n", n1, n2, n3, n1 / n2 / n3);
	}
	else {
		printf("invalid number");
	}
	
	

}