#include <stdio.h>
#include <math.h>

main() {
    int bNum, pNum, total;
    char i;
    
    do {
    	printf("   Exponent calculator\n");
    	printf("------------------------\n");
        printf("Enter base : ");
        scanf("%i", &bNum);
        printf("Enter exponent : ");
        scanf("%i", &pNum);
        
        total = pow(bNum, pNum);
        printf("%i ^ %i = %i\n",bNum, pNum, total);
        printf("Press enter to exit : ");
        
        i = getchar();
        scanf("%c", &i);
        printf("\n");
    } while(i != '\n');
    printf("EXIT Program");
}
