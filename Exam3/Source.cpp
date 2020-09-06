#include<stdio.h>
void cal() {
	int a;
	int b;
	int number;
	printf("Please enter the first number and second number: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	number = a + b;
	if (number > 0) {
		if (number % 2 == 0) {
			printf("Positive Even");
		}
		else {
			printf("Positive Odd");
		}
	}
	else if (number < 0) {
		if (number % 2 == 0) {
			printf("Negative Even");
		}
		else {
			printf("Negative Odd");
		}
	}
	else {
		printf("zero");
	}
}
int main() {
	cal();
}