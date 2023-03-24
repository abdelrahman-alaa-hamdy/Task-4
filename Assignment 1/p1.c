#include <stdio.h>
#include <string.h>

struct student_info {
    unsigned int roll: 4;
    unsigned int age: 8;
    unsigned int marks: 3;
    char name[16];
    char address[32];
} students[15];

void print_student_info(struct student_info s) {
    printf("Roll Number: %d\n", s.roll);
    printf("Age: %d\n", s.age);
    printf("Marks: %d\n", s.marks);
    printf("Name: %s\n", s.name);
    printf("Address: %s\n\n", s.address);
}

int main() {
    int i;

    
    for (i = 0; i < 15; i++) {
        students[i].roll = i;
        students[i].age = 16 + i;
        students[i].marks = (i % 4) + 1;
        strcpy(students[i].name, "Abdo");
        strcpy(students[i].address, "Zagzig");
    }

    
    for (i = 0; i < 15; i++) {
        printf("Student %d:\n", i+1);
        print_student_info(students[i]);
    }

    
    printf("Size of struct: %zu bytes\n", sizeof(struct student_info));

    return 0;
}
