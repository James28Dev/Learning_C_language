#include <stdio.h>

struct car {
	char brand[8];
	char model[8];
	int year;
	float price;
} dataCar;

main() {
	printf("========================");
	printf("\n== Input Data of Car ==\n");
	printf("========================");

	printf("\nEnter Brand : ");
	scanf("%s", dataCar.brand);
	printf("Enter Model : ");
	scanf("%s", dataCar.model);
	printf("Enter Year : ");
	scanf("%d", &dataCar.year);
	printf("Enter Price : ");
	scanf("%f", &dataCar.price);
	
	printf("\n");
	printf("================================");
	printf("\n    == Output Data of Car ==\n");
	printf("================================");
	printf("\nBrand\tModel\tYear\tPrice\n");
	printf("%s\t%s\t%d\t%.2f", dataCar.brand, dataCar.model, dataCar.year, dataCar.price);
}
