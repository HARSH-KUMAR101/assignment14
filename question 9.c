/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
int main()
{ int n,num,i,x,y;
      printf("enter length of array: ");
      scanf("%d",&n);
      y=n;
   int a[n];
      for(i=0;i<n;i++)
      {
          printf("a[%d]=",i);
          scanf("%d",&a[i]);
      }
      printf("reverse order array\n");
        for(x=0,i=y-1;x<y,i>=0;x++,i--)
        {
          printf("a[%d]=%d\n",x,a[i]);
        }
 return 0;
}
