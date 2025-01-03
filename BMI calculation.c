#include <stdio.h>

int calculation(char *sex, float *BMI) {
	switch(*sex) {
		case 'f':
			if(*BMI < 19)
				printf("A BMI of %.2f is considered underweight.", *BMI);
            else if(*BMI < 25)
                printf("A BMI of %.2f is considered acceptable.", *BMI);
            else if(*BMI < 30)
                printf("A BMI of %.2f is considered overweight.", *BMI);
            else if(*BMI < 40)
                printf("A BMI of %.2f is considered obese.", *BMI);
            else
                printf("A BMI of %.2f is considered morbidly obese.", *BMI);
            break;
        case 'm':
            if(*BMI < 20)
				printf("A BMI of %.2f is considered underweight.", *BMI);
            else if(*BMI < 25)
                printf("A BMI of %.2f is considered acceptable.", *BMI);
            else if(*BMI < 30)
                printf("A BMI of %.2f is considered overweight.", *BMI);
            else if(*BMI < 40)
                printf("A BMI of %.2f is considered obese.", *BMI);
            else
                printf("A BMI of %.2f is considered morbidly obese.", *BMI);
            break;
        default:
            printf("Unknown");    
	}
}

void main() {
	float BMI, height, weight;
	char sex;
	int i = 1;

	do{
		printf("BMI calculator\n");
		printf("Enter sex [f/m]\t  : ");
		scanf(" %c",&sex);
		sex = tolower(sex);
		printf("Enter weight [kg] : ");
		scanf(" %f",&weight);
		printf("Enter height [cm] : ");
		scanf(" %f",&height);
		BMI = weight / ((height * 0.01) * (height * 0.01));
		
		calculation(&sex, &BMI);
		printf("\n\n");		
	} while(i == 1);
}
