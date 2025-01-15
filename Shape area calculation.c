#include <stdio.h>

void main() {
	char shapeId;
	float total, num1, num2;
	int i = 1;
	
	do{
		printf("What shape do you want?\n");
		printf("1. Triangle\t[T/t]\n");
		printf("2. Regtangle\t[R/r]\n");
		printf("3. Circle\t[C/c]\n");
		printf("4. Exit Program\t[E/e]\n");
		printf("Enter shape : ");
		scanf(" %c",&shapeId); //get shapeId
		shapeId = tolower(shapeId);
		printf("--------------------------\n");
		
		switch(shapeId) {
			case 't':
				printf("\tTriangle\n");
				printf("Enter base : ");
				scanf("%f",&num1);
				printf("Enter high : ");
				scanf("%f",&num2);
	
				total = num1 * num2 * 0.5;
				printf("Area = %.2f\n",total);
				printf("--------------------------\n\n");
				break; //end t case
			case 'r':
				printf("\tRegtangle\n");
				printf("Enter wide : ");
				scanf("%f",&num1); //get num1 
				printf("Enter long : ");
				scanf("%f",&num2); //get num2
	
				total = num1 * num2;
				printf("Area = %.2f\n",total);
				printf("--------------------------\n\n");
				break; //end r case
			case 'c':
				printf("\tCircle\n");
				printf("Enter radius : ");
				scanf("%f",&num1); //get num1
	
				total = num1 * num1 * 3.14;
				printf("Area = %.2f\n",total);
				printf("--------------------------\n\n");
				break; //end c case
			case 'e':
				i = 2;
				break; //end e case
			default:
				printf("Unknow shape ID %c\n",shapeId); //end default case
		} //end shapeId switch
	} while(i == 1); //end do-while loops
} //end main function
