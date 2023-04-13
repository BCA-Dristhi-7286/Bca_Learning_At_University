//Write a C code to find the maximum element in each row of the 3 X 3 matrix

int main()
{
  #define ROWS 3
#define COLS 3

int main()
{
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, max;
    
    printf("The given matrix is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("The maximum elements in each row are:\n");
    for (i = 0; i < ROWS; i++) {
        max = matrix[i][0];
        for (j = 1; j < COLS; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("Max in row %d: %d\n", i+1, max);
    }
    
  
  return 0;
}
