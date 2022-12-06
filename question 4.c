/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
int main()
{ int a[10],i,j,max;
       printf("enter 10 numbers to find the largest number among them: ");
         for(i=0;i<10;i++)
         { scanf("%d",&a[i]);
         }
          max=a[0];
         for(i=0;i<9;i++)
         { for(j=i+1;j<10;j++)
           { if(max<a[j])
               max=a[j];
           }
         }
         printf("largest number in the given numbers is %d",max);
 return 0;
}
