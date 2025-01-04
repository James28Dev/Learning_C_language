#include <stdio.h>
#include <ctype.h>

main() {
	char msg[50], choice;
    int i = 0;
    do {
        printf("Enter message : ");
        scanf("%s", msg);
        
        do {i++;}
        while(msg[i] != '\0');
        
        printf("Reverse word : ");
        
        while(i > 0) {
            i--;
            printf("%c", msg[i]);
        }
        printf("\nplay again (Y/N) :  ");
        getchar();
        scanf("%c", &choice);
        choice = toupper(choice);
        }
        
        while(choice == 'Y');
}
