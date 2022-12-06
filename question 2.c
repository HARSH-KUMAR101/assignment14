/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{ int a[10],i;
  float sum=0;
       printf("enter 10 number to calculate their average: ");
         for(i=0;i<10;i++)
         { scanf("%d",&a[i]);
           sum=sum+a[i];
         }
     printf("sum of all num is %.2f",sum/10);
 return 0;
}
