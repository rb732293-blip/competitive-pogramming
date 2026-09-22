#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    int total, present;
};

int main() {
    struct Student s[100];
    int n, i;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Total Classes: ");
        scanf("%d", &s[i].total);

        printf("Enter Present Classes: ");
        scanf("%d", &s[i].present);
    }

    printf("\n--- Attendance Report ---\n");

    for(i = 0; i < n; i++) {
        float percentage = (s[i].present * 100.0) / s[i].total;

        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nAttendance: %.2f%%", percentage);

        if(percentage >= 75)
            printf("\nStatus: Eligible\n");
        else
            printf("\nStatus: Not Eligible\n");
    }

    return 0;
}