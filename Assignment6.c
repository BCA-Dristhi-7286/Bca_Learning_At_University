//Write a C code to find the number of distinct elements in a sorted array.

int main()
{
  int countDistinct(int arr[], int n)
{
    int i, count = 1;
    for (i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int distinctCount = countDistinct(arr, n);
    printf("Number of distinct elements in the array is %d", distinctCount);
  return 0;
}
