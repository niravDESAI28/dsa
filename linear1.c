#include<stdio.h>
#define n 5
int arr[n];

int linearsearch(int a[],int b)
{
  int x=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]== b)
    {
       x++;
    }
  }
    
if (x >= 1)
  {
    printf(" %d number exists \n",b);
  }
else
  {
    printf("%d number not exists \n",b);
  }
}
int main()
{
    int get;
    
    for(int i=0;i<n;i++)
    {
        printf("enter array[%d] :",i);
        scanf("%d",&arr[i]);
    }
    printf("enter number to search: ");
    scanf("%d",&get);
    
    linearsearch(arr, get);
    return 0;
}