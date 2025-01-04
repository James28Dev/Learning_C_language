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
    }
}

inputScore (int i, int score[], int num) {
	for (i = 0; i < num; i++) {
        printf("Input Score [%d] : ", i + 1);
        scanf(" %d", &score[i]);
    }
}

int main () {
	int score[20] ,i, numStudent;
	char total_grade[20];
	
	printf("Program calculate multiple students' grades\n");
	printf("------------------------------------------\n");
	printf("Number of students to be calculated = ");
	scanf(" %d", &numStudent);
    inputScore(i, score, numStudent);

    printf("\n==========================================\n");
	printf("Sudents\t\t Score\t\t Grade\n");
	printf("==========================================\n");
	
    for (i = 0; i < numStudent; i++) {
        total_grade[i] = grade(score[i]);
        printf("%d\t\t %d\t\t %c\n", i + 1, score[i], total_grade[i]);
        
    }

    return 0;
}
