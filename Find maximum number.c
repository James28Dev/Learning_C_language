#include <stdio.h>

struct dataNumber {
	int num1;
	int num2;
	char choice;
} data;

Input(int *num1, int *num2) {
	printf("  Find maximum number\n");
	printf("------------------------\n");
	printf("Number 1 : ");
	scanf("%d", &data.num1);
	printf("Number 2 : ");
	scanf("%d", &data.num2);
}

Process(int *num1, int *num2) {
	if(*num1 > *num2 || *num1 == *num2)
		return *num1;
	else if(*num1 < *num2)
		return *num2;
}

Loop(char *choice) {
	printf("------------------------\n");
	printf("Again? (Y/N) ");
	char temp;
	scanf(" %c", &temp);
	temp = toupper(temp);
	*choice = temp;
	printf("\n");
}

void main() {
	do {
		Input(&data.num1, &data.num2);
		printf("Maximum = %d", Process(&data.num1, &data.num2));
		if(data.num1 == data.num2)
			printf(" Equals\n");
		else
			printf("\n");
		Loop(&data.choice);
	} while(data.choice == 'Y');
}
