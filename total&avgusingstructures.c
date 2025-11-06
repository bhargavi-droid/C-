#include <stdio.h> 
// Define the structure for student information 
struct Student { 
    char name[50]; 
    int marks; 
}; 
int main() { 
    int n; 
    // Get the number of students 
    printf("Enter the number of students: "); 
    scanf("%d", &n); 
    // Declare an array of structures to store student information 
    struct Student students[n]; 
    // Input information for each student 
    for (int i = 0; i < n; i++) { 
        printf("Enter the name of student %d: ", i + 1); 
        scanf("%s", students[i].name); 
        printf("Enter the marks for %s: ", students[i].name); 
        scanf("%d", &students[i].marks); 
    } 
    // Calculate total and average marks 
    int total = 0; 
    for (int i = 0; i < n; i++) { 
        total += students[i].marks; 
    } 
    float average = (float)total / n; 
    // Display the total and average marks 
    printf("\nTotal marks: %d\n", total); 
    printf("Average marks: %.2f\n", average); 
    return 0; 
} 
