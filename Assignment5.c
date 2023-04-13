//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

int main()
{
  #define MAX_STUDENTS 50
#define MIN_PASS_MARKS 50

int main()
{
    int marks[MAX_STUDENTS];
    int n, i, maxMarks = -1, passCount = 0, failCount = 0;
    
   printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] > maxMarks) {
            maxMarks = marks[i];
        }
        if (marks[i] == -1) {
            printf("Student %d was absent\n", i+1);
        }
        else if (marks[i] >= MIN_PASS_MARKS) {
            printf("Student %d passed the exam\n", i+1);
            passCount++;
        }
        else {
            printf("Student %d failed the exam\n", i+1);
            failCount++;
        }
    }

    printf("The maximum marks obtained in the class is %d\n", maxMarks);
    printf("%d students passed the exam and %d students failed the exam\n", passCount, failCount);
    
  return 0;
}
