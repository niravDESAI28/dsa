#include<stdio.h>
#define n 5
int a[n];
int f = -1, r = -1;

int insertEnd(int val)
{
    if(r<0){
        f = r = 0;
        a[r]=val;
    }
    else if((r+1)%n==f)
    {
        printf("Queue is full...\n");
    }
    else
    {
        r=(r+1)%n;
        a[r]=val;
     }
}
int deleteEnd()
{
    if(f==r)
    {
        f = -1, r = -1;
    }
    if(f<0 || r<0)
    {
        printf("Queue is Empty....");
    }
    else
    {
        f=(f+1)%n;
    }  
}
int main()
{
    int val;
        int ch;
       printf("1).insertend");
    for (int i=0;i<=50;i++)
      {
        printf("\nEnter your choice :");
        scanf("%d",&ch);
    
    switch (ch)
   {
         case 1:
                    printf("Enter Your Array :");
                    scanf("%d",&val);
                    insertEnd(val);
                    break;

         case 3:
                    deleteEnd();
                    break;
   }
  return 0;
   }
}