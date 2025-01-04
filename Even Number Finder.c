#include <stdio.h>

void Show(int start, int stop) {
	if(start < stop) {
		printf("even >> ");
		int i;
		for(i = start; i <= stop; i++) {
			if(i % 2 == 0)
				printf("%d ", i);
		}
	} 
	else {
		printf("even >> ");
		int i;
		for(i = start; i >= stop; i--) {
			if(i % 2 == 0)
				printf("%d ", i);
		}
	}
}

int main() {
	int start, stop;
	
	printf("Start Number : ");
	scanf("%d",&start);
	printf("Stop Number : ");
	scanf("%d",&stop);
	
	Show(start, stop);
	return 0;
}
