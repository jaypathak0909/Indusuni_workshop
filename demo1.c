#include <stdio.h>

int main() {
    float sub[5], total = 0, percentage;
    char *subjectName[5] = {
        "Maths",
        "Science",
        "English",
        "Computer",
        "Gujarati"
    };

    int i;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++) {
        printf("%s: ", subjectName[i]);
        scanf("%f", &sub[i]);
        total += sub[i];
    }

    percentage = total / 5;

    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%\n", percentage);

    printf("\nFailed Subjects:\n");
    int failCount = 0;

    for(i = 0; i < 5; i++) {
        if(sub[i] < 35) {
            printf("%s\n", subjectName[i]);
            failCount++;
        }
    }

    if(failCount == 0)
        printf("None\n");

    if(failCount > 0) {
        printf("\nResult: FAIL\n");
    } else {
        printf("\nResult: PASS\n");

        if (percentage >= 90)
            printf("Grade: A+\n");
        else if (percentage >= 80)
            printf("Grade: A\n");
        else if (percentage >= 70)
            printf("Grade: B\n");
        else if (percentage >= 60)
            printf("Grade: C\n");
        else if (percentage >= 50)
            printf("Grade: D\n");
        else
            printf("Grade: E\n");
    }

    return 0;
}