#include <stdio.h>

void Show(int start, int stop) {
	if(start < stop) {
		printf("even >> ");
		int i;
		for(i = start; i <= stop; i++) {
			if(i % 2 == 0)
				printf("%d ", i);
		} //end for loops
	} //end start < stop if 
	else {
		printf("even >> ");
		int i;
		for(i = start; i >= stop; i--) {
			if(i % 2 == 0)
				printf("%d ", i);
		} //end for loops
	} //end else
} //end Show function

int main() {
	int start, stop;
	
	printf("Start Number : ");
	scanf("%d",&start); //get start
	printf("Stop Number : ");
	scanf("%d",&stop); //get stop
	
	Show(start, stop); //call Show function
	return 0;
} //end main function
