#include <stdio.h>

char grade (int score) {
    if (score >= 80) {
        return 'A';
    } else if (score >= 70) {
        return 'B';
    } else if (score >= 60) {
        return 'C';
    } else if (score >= 50) {
        return 'D';
    } else {
        return 'F';
    } //end score if
} //end grade function

inputScore (int i, int score[], int num) {
	for (i = 0; i < num; i++) {
        printf("Input Score [%d] : ", i + 1);
        scanf(" %d", &score[i]); //get score
    } //end for loops
} //end inputScore function

int main () {
	int score[20] ,i, numStudent;
	char total_grade[20];
	
	printf("Program calculate multiple students' grades\n");
	printf("------------------------------------------\n");
	printf("Number of students to be calculated = ");
	scanf(" %d", &numStudent); //get numStudent
    inputScore(i, score, numStudent); //call inputScore function

    printf("\n==========================================\n");
	printf("Sudents\t\t Score\t\t Grade\n");
	printf("==========================================\n");
	
    for (i = 0; i < numStudent; i++) {
        total_grade[i] = grade(score[i]); //call grade function
        printf("%d\t\t %d\t\t %c\n", i + 1, score[i], total_grade[i]);
    } //end for loops

    return 0;
} //end main function
