#include <stdio.h>

struct date {
	int date;
	char month[3];
	int year;
};

struct book {
	char name[20];
	char writer[20];
	float price;
	char publisher[30];
	struct date dateDate;
} b[];

message (char s[10], int count) {
	int i;
	printf("%s\n", s);
	for(i = 1; i <= count; i++)
		printf("-");
	printf("\n");
}

display(int i, char n[20], char w[20], float p, char pu[30], int d, char m[3], int y, int ye) {
	printf("%d\t%s\t%s\t%.2f\t%s\t\t%d %s %d\t%d\n", i, n, w, p, pu, d, m, y, 2023 - ye);
}

main() {
	int i;
	float sum, aver;
	message("Input Data", 40);
	for(i = 1; i <= 10; i++) {
		printf("Data %d\n", i);
		printf("Enter Name : ");
		scanf("%s", b[i].name);
		printf("Enter Writer : ");
		scanf("%s", b[i].writer);
		printf("Enter Price : ");
		scanf("%f", &b[i].price);
		printf("Enter Publish : ");
		scanf("%s", b[i].publisher);
		
		printf("First Date\n");
		printf("\tEnter Day : ");
		scanf("%d", &b[i].dateDate.date);
		printf("\tEnter Month : ");
		scanf("%s", b[i].dateDate.month);
		printf("\tEnter Year : ");
		scanf("%d", &b[i].dateDate.year);
	}
	printf("\n");
	message("Output data", 80);
	printf("ID\tBook\tWriter\tPrice\tPublisher\tFirstDate\tNo.ofYear\n");
	for(i = 1; i <= 10; i++)
		display(i, b[i].name, b[i].writer, b[i].price, b[i].publisher, b[i].dateDate.date, b[i].dateDate.month, b[i].dateDate.year, b[i].dateDate.year);
		
	printf("\n");
	message("Data Price of Book", 60);
	for(i = 1; i <= 10; i++) {
		sum = b[i].price + sum;
	}
	printf("Sum Price of Book : %.2f\n", sum);
	aver = sum / (i - 1);
	printf("Average Price of Book : %.2f\n", aver);
}
