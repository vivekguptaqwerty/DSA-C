#include <stdio.h>

struct student {
    int roll;
    char firstname[20];   //write a program to print a number from 35 to 95 which divisible with 5 using loop
    char lastname[20];
    char address[50];
    float marks;
};

struct student s[5];

int main() {
    for(int i = 0; i < 5; i++) {
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter first name: ");
        scanf("%s", s[i].firstname);

        printf("Enter last name: ");
        scanf("%s", s[i].lastname);

        printf("Enter address: ");
        scanf("%s", s[i].address);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display the information of students
    for(int i = 0; i < 5; i++) {
        printf("\nStudent 1`` %d\n", i+1);
        printf("Roll No: %d\n", s[i].roll);
        printf("First Name: %s\n", s[i].firstname);
        printf("Last Name: %s\n", s[i].lastname);
        printf("Address: %s\n", s[i].address);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
