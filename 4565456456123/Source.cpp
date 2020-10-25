#include<stdio.h>
void kong() {
	int x;
	printf("Enter Number : ");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		for (int j = 1; j <= x; j++) {
			printf("  ");
		}
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		for (int j = 1; j <= x; j++) {
			printf("  ");
		}
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		printf("\n");
	}


}
int main() {
	kong();

	return 0;
}