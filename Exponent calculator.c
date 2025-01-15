#include <stdio.h>
#include <math.h>

main() {
    int bNum, pNum, total;
    char i;
    
    do {
    	printf("   Exponent calculator\n");
    	printf("------------------------\n");
        printf("Enter base : ");
        scanf("%i", &bNum); //get bNum
        printf("Enter exponent : ");
        scanf("%i", &pNum); //get pNum
        
        total = pow(bNum, pNum);
        printf("%i ^ %i = %i\n",bNum, pNum, total);
        printf("Press enter to exit : ");
        
        i = getchar();
        scanf("%c", &i); //get i
        printf("\n");
    } while(i != '\n'); //end do-while
    printf("EXIT Program");
} //end main function
