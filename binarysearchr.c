#include<stdio.h>
#define n 5

int arr[n];

int binarysearch(int a[], int k)
{
    int low = 0,high = n,mid,count = 0;

    mid = (low+high) / 2;

    for(int i=0;i<n;i++)
    {
        if(arr[mid] == k)
        {
            count++;
        }
        else if(arr[mid] > k)
        {
            high = mid - 1;

            for(int i=0;i<mid;i++)
            {
                if (a[i] == k)
                {
                    count++;
                }
            }
        }
        else if(a[mid] < k)
        {
            low = mid + 1;

            for(int i=mid;i<=high;i++)
            {
                if(a[i] == k)
                {
                    count++;
                }
            }

        }
    }

    if(count >= 1)
    {
        printf("number exists");
    }
    else
    {
        printf("number not exists");
    }
}

int main()
{
    int search;

    for(int i=0;i<n;i++)
    {
        printf("enter array[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("enter number to search : ");
    scanf("%d",&search);

    binarysearch(arr,search);

    return 0;
}
