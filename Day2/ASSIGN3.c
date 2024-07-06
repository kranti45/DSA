//3. Create array of 10 students(rollno, name, marks) and sort students by their marks. #include <stdio.h>

#include <string.h>

// Define the structure for a student
typedef struct {
    int rollno;
    char name[50];
    float marks;
} Student;

// Function to swap two students
void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort students by their marks using bubble sort
void sortStudentsByMarks(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (students[j].marks > students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

// Function to print the array of students
void printStudents(Student students[], int size) {
    printf("Roll No\tName\t\tMarks\n");
    printf("-----------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

int main() {
    // Create an array of 10 students
    Student students[10] = {
        {1, "mitansh", 88.5},
        {2, "ashu", 92.3},
        {3, "bhumi", 85.0},
        {4, "vaishanvi", 78.9},
        {5, "tanu", 91.0},
        {6, "mansi", 72.5},
        {7, "sanu", 95.5},
        {8, "mahi", 89.4},
        {9, "medha", 76.8},
        {10, "sidhu", 84.3}
    };

    int size = sizeof(students) / sizeof(students[0]);

    printf("Before sorting:\n");
    printStudents(students, size);

    // Sort the students by their marks
    sortStudentsByMarks(students, size);

    printf("\nAfter sorting by marks:\n");
    printStudents(students, size);

    return 0;
}

