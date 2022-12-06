/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
int main()
{ int a[10]={10,23,25,24,16,4,3,14,12,36},b[10],i;
    for(i=0;i<10;i++)
    {
       b[i]=a[i];
    }
    for(i=0;i<10;i++)
    {
      printf("%d\n",b[i]);
    }
}
