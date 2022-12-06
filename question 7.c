/*Write a program to find second largest in an array.Take array values from the user.*/
#include<stdio.h>
int main()
{int a[10],i,j,max1=-1,max2=-2;
       printf("enter 10 numbers to find the 2nd largest number among them: ");
         for(i=0;i<10;i++)
         { scanf("%d",&a[i]);
         }
         for(i=0;i<10;i++)
         { if(max1<a[i]){
              max2=max1;
              max1=a[i];
            }
            else if(max2<a[i])
                max2=a[i];
         }
         printf("2nd largest number in the given numbers is %d",max2);
 return 0;

}
