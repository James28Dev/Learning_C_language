#include <stdio.h>

struct dataNumber {
	int num1;
	int num2;
	char choice;
} data;

Input(int *num1, int *num2) {
	printf("Number 1 : ");
	scanf("%d", &data.num1);
	printf("Number 2 : ");
	scanf("%d", &data.num2);
}

Process(int *num1, int *num2) {
	printf("Maximum = ");
	if(*num1 > *num2)
		printf("%d\n\n", *num1);
	else if(*num1 < *num2)
		printf("%d\n\n", *num2);
	else
		printf("%d Equals\n\n", *num1);
}

Loop(char *choice) {
	printf("Again? (Y/N)");
	char temp;
	scanf(" %c", &temp);
	temp = toupper(temp);
	*choice = temp;
}

void main() {
	do {
		Input(&data.num1, &data.num2);
		Process(&data.num1, &data.num2);
		Loop(&data.choice);
	} while(data.choice == 'Y');
}
