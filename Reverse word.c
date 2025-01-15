#include <stdio.h>
#include <ctype.h>

void main() {
	char msg[50], choice;
    int i = 0;
    
    do {
    	printf("  Program reverse word\n");
    	printf("------------------------\n");
        printf("Enter message : ");
        scanf(" %s", msg); //get msg
        
        do {
			i++;
		} while(msg[i] != '\0'); //end do-while loops
        
        printf("Reverse word : ");
        
        while(i > 0) {
            i--;
            printf("%c", msg[i]);
        } //end while loops
        
        printf("\nplay again (Y/N) :  ");
        getchar();
        scanf(" %c", &choice); //get choice
        choice = toupper(choice);
        printf("\n");
        }
    while(choice == 'Y'); //end do-while loops
} //end main function
