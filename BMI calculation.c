#include <stdio.h>

int main()
{
	float BMI, height, weight;
	char sex;

	printf("BMI calculator\n");
	printf("Enter sex [f/m]\t  : ");
	scanf("%c",&sex);
	sex = tolower(sex);
	printf("Enter weight [kg] : ");
	scanf("%f",&weight);
	printf("Enter height [cm] : ");
	scanf("%f",&height);
	BMI = weight / ((height * 0.01) * (height * 0.01));

	switch(sex)
	{
		case 'f':
			if(BMI < 19)
				printf("Underweight");
            else if(BMI < 25)
                printf("Acceptable");
            else if(BMI < 30)
                printf("Overweight");
            else if(BMI < 40)
                printf("Obese");
            else
                printf("Morbidly Obese");
            break;
        case 'm':
            if(BMI < 20)
				printf("Underweight");
            else if(BMI < 25)
                printf("Acceptable");
            else if(BMI < 30)
                printf("Overweight");
            else if(BMI < 40)
                printf("Obese");
            else
                printf("Morbidly Obese");
            break;
        default:
            printf("Unknown");
	}
	return 0;
}
