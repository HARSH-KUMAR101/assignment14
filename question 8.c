/*Write a program to find the second smallest number in an array.Take array values
from the user.*/
int main()
{ int a[10],i,j,temp;
       printf("enter 10 numbers and get 2nd smallest number: ");
         for(i=0;i<10;i++)
         { scanf("%d",&a[i]);
         }

         for(i=0;i<10;i++)
         { for(j=i+1;j<10;j++)
           { if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
           }
         }
            printf("second smallest num is %d ",a[1]);

 return 0;
}
