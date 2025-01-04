#include <stdio.h>
#include <ctype.h>

void main() {
	char msg[50], choice;
    int i = 0;
    
    do {
    	printf("  Program reverse word\n");
    	printf("------------------------\n");
        printf("Enter message : ");
        scanf(" %s", msg);
        
        do {
			i++;
		} while(msg[i] != '\0');
        
        printf("Reverse word : ");
        
        while(i > 0) {
            i--;
            printf("%c", msg[i]);
        }
        
        printf("\nplay again (Y/N) :  ");
        getchar();
        scanf(" %c", &choice);
        choice = toupper(choice);
        printf("\n");
        }
    while(choice == 'Y');
}
