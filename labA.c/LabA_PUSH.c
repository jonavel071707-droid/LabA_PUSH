/*
  Lab A: Personal Information Display
  Name: Cañete, Ma. Jonavel C.
  Year & Section: DIT 1-2, 1ST YEAR
*/
//ANOTHER EXAMPLE CHANGES FOR BRANCH 2
#include <stdio.h>

int main() {
    char initial = 'J';
    int age = 18;
    float height = 1.57;   
    double gpa = 2.59;
    int isStudent = 1;     

    // Output section
    printf("\n--- PROFILE SUMMARY ---\n");
    printf("Initial: %c\n", initial);
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("GPA: %.2lf\n", gpa);
    printf("Is Student: %d", isStudent);
    if (isStudent)
        printf(" (Yes)\n");
    else
        printf(" (No)\n");

    return 0;
}

