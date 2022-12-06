/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{ int a[10],i,even=0,odd=0;

       printf("enter 10 number to calculate their sum of even and odd numbers: ");
         for(i=0;i<10;i++)
         { scanf("%d",&a[i]);
           if(a[i]%2==0)
             even=even+a[i];
           else
             odd=odd+a[i];
         }
     printf("sum of even num is %d\n",even);
     printf("sum of odd num is %d",odd);
 return 0;
}
