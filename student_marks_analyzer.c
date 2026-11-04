#include <stdio.h>

int main(void)
{
    int n;
    float marks[100];
    float total = 0.0f;
    float highest, lowest;
    float percentage;

    printf("====================================\n");
    printf("       STUDENT MARKS ANALYZER\n");
    printf("====================================\n");

    printf("Enter the number of subjects (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid number of subjects. Please enter a value from 1 to 100.\n");
        return 1;
    }

    printf("\nEnter marks for each subject (0-100):\n");

    for (int i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);

        if (scanf("%f", &marks[i]) != 1 || marks[i] < 0.0f || marks[i] > 100.0f) {
            printf("Invalid marks. Marks must be between 0 and 100.\n");
            return 1;
        }

        total += marks[i];
    }

    highest = marks[0];
    lowest = marks[0];

    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    percentage = total / n;

    printf("\n========== RESULT ==========\n");
    printf("Total marks : %.2f / %.2f\n", total, n * 100.0f);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Highest mark: %.2f\n", highest);
    printf("Lowest mark : %.2f\n", lowest);

    if (lowest >= 40.0f) {
        printf("Status      : PASS\n");
    } else {
        printf("Status      : FAIL (at least one subject is below 40)\n");
    }

    if (percentage >= 90.0f) {
        printf("Grade       : A+\n");
    } else if (percentage >= 80.0f) {
        printf("Grade       : A\n");
    } else if (percentage >= 70.0f) {
        printf("Grade       : B\n");
    } else if (percentage >= 60.0f) {
        printf("Grade       : C\n");
    } else if (percentage >= 40.0f) {
        printf("Grade       : D\n");
    } else {
        printf("Grade       : F\n");
    }

    printf("============================\n");

    return 0;
}
