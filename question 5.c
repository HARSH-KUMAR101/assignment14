/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
int main()
{ int a[10],i,j,min;
       printf("enter 10 numbers to find the smallest number among them: ");
         for(i=0;i<10;i++)
         { scanf("%d",&a[i]);
         }
          min=a[0];
         for(i=0;i<9;i++)
         { for(j=i+1;j<10;j++)
           { if(min>a[j])
               min=a[j];
           }
         }
         printf("smallest number in the given numbers is %d",min);
 return 0;
}
