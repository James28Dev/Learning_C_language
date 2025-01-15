#include <stdio.h>

struct date {
	int date;
	char month[3];
	int year;
}; //end date structure

struct book {
	char name[20];
	char writer[20];
	float price;
	char publisher[30];
	struct date dateDate; //call date structure
} b[]; //end book structure

message (char s[10], int count) {
	int i;
	printf("%s\n", s);
	for(i = 1; i <= count; i++)
		printf("-"); //end for loops
	printf("\n");
} //end message function

display(int i, char n[20], char w[20], float p, char pu[30], int d, char m[3], int y, int ye) {
	printf("%d\t%s\t%s\t%.2f\t%s\t\t%d %s %d\t%d\n", i, n, w, p, pu, d, m, y, 2023 - ye);
} //end display function

main() {
	int i;
	float sum, aver;
	message("Input Data", 40); //call message function
	for(i = 1; i <= 10; i++) {
		printf("Data %d\n", i);
		printf("Enter Name : ");
		scanf("%s", b[i].name); //get name in book structure
		printf("Enter Writer : ");
		scanf("%s", b[i].writer); //get writer in book structure
		printf("Enter Price : ");
		scanf("%f", &b[i].price); //get price in book structure
		printf("Enter Publish : ");
		scanf("%s", b[i].publisher); //get publisher in book structure
		
		printf("First Date\n");
		printf("\tEnter Day : ");
		scanf("%d", &b[i].dateDate.date); //get date in date structure in book structure
		printf("\tEnter Month : ");
		scanf("%s", b[i].dateDate.month); //get month in date structure in book structure
		printf("\tEnter Year : ");
		scanf("%d", &b[i].dateDate.year); //get year in date structure in book structure
	}
	printf("\n");
	message("Output data", 80); //call message function
	printf("ID\tBook\tWriter\tPrice\tPublisher\tFirstDate\tNo.ofYear\n");
	for(i = 1; i <= 10; i++)
		display(i, b[i].name, b[i].writer, b[i].price, b[i].publisher, b[i].dateDate.date, b[i].dateDate.month, b[i].dateDate.year, b[i].dateDate.year); //end for loops	
	printf("\n");
	message("Data Price of Book", 60); //call message function
	for(i = 1; i <= 10; i++) {
		sum = b[i].price + sum;
	} //end for loops
	printf("Sum Price of Book : %.2f\n", sum);
	aver = sum / (i - 1);
	printf("Average Price of Book : %.2f\n", aver);
} //end main function
