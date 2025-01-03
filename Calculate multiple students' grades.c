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

inputScore (int i, int score[]) {
	for (i = 0; i < 5; i++) {
        printf("Input Score [%d] : ", i + 1);
        scanf(" %d", &score[i]);
    }
}

int main () {
	int score[5] ,i;
	char total_grade[5];

    inputScore(i, score);

    printf("==========================================\n");
	printf("Sudents\t\t Score\t\t Grade\n");
	printf("==========================================\n");
	
    for (i = 0; i < 5; i++) {
        total_grade[i] = grade(score[i]);
        printf("%d\t\t %d\t\t %c\n", i + 1, score[i], total_grade[i]);
        printf("------------------------------------------\n");
    }

    return 0;
}
