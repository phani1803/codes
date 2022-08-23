#include<stdio.h>
int main()
{
   int n,a[10]={10,20,30,420,50,69,70,88,96,90};
   int flag = 0;     
   printf("Enter any value:");
   scanf("%d", &n);
    for(int i=0; i<10;i++)
    {
      if (n==a[i]){
         flag=1;
         printf("%d is found at the index %d",n,i);
         break;
       }
      }
    
    if(! flag)
    printf("not found");
}


