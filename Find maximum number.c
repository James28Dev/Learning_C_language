#include <stdio.h>

struct dataNumber {
	int num1;
	int num2;
	char choice;
} data; //end dataNumber structure

Input(int *num1, int *num2) {
	printf("  Find maximum number\n");
	printf("------------------------\n");
	printf("Number 1 : ");
	scanf("%d", &data.num1); //get num1 in dataNumber structure
	printf("Number 2 : ");
	scanf("%d", &data.num2); //get num2 in dataNumber structure
} //end Input function

Process(int *num1, int *num2) {
	if(*num1 >= *num2)
		return *num1; //end num1 >= num2 if
	else if(*num1 < *num2)
		return *num2; //end else
} //end Process function

Loop(char *choice) {
	printf("------------------------\n");
	printf("Again? (Y/N) ");
	char temp;
	scanf(" %c", &temp); //get temp
	temp = toupper(temp);
	*choice = temp;
	printf("\n");
} //end Loop function

void main() {
	do {
		Input(&data.num1, &data.num2); //call Input
		printf("Maximum = %d", Process(&data.num1, &data.num2)); //call Process
		if(data.num1 == data.num2)
			printf(" Equals\n"); //end num1 in structure == num2 in structure if
		else
			printf("\n"); //end else
		Loop(&data.choice); //call Loop function
	} while(data.choice == 'Y'); //end do-while loops
} //end main function
