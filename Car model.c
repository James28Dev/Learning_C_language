#include <stdio.h>

struct car {
	char brand[8];
	char model[8];
	int year;
	float price;
} dataCar; //end car Structure

main() {
	printf("========================");
	printf("\n== Input Data of Car ==\n");
	printf("========================");

	printf("\nEnter Brand : ");
	scanf("%s", dataCar.brand); //get brand in car structure
	printf("Enter Model : ");
	scanf("%s", dataCar.model); //get model in car structure
	printf("Enter Year : ");
	scanf("%d", &dataCar.year); //get year in car structure
	printf("Enter Price : ");
	scanf("%f", &dataCar.price); //get price in car structure
	
	printf("\n");
	printf("================================");
	printf("\n    == Output Data of Car ==\n");
	printf("================================");
	printf("\nBrand\tModel\tYear\tPrice\n");
	printf("%s\t%s\t%d\t%.2f", dataCar.brand, dataCar.model, dataCar.year, dataCar.price);
} //end main function
