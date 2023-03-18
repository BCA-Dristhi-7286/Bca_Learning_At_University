//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.
#include<stdio.h>
int main()
{
  int n,num,positive=0,negative=0;
  printf("enter n: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter a number" %d: ",i+1)
           scanf("%d",&num);
           if(num>0)
           {
             positive++;
           }
           else if(num<0)
           {
             negative++;
           }
           }
           printf("total positive numbers: %d\n",positive);
           printf("total negative numbers: %d\n",negative);
  return 0;
}
