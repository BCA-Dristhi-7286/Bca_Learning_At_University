//Input marks of 10 students in an array and then find the student with maximum marks

#include <stdio.h>

int main() {
    int marks[10];
    int max_marks = 0;
    int max_index = 0;
    
    // input marks of 10 students
    for (int i = 0; i < 10; i++) {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        
        // update max_marks and max_index if necessary
        if (marks[i] > max_marks) {
            max_marks = marks[i];
            max_index = i;
        }
    }
    
    // print the student with maximum marks
    printf("Student %d has the maximum marks: %d\n", max_index+1, max_marks);
    
    return 0;
}

