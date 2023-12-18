#include <stdio.h>
#define n 5
int arr[n];

int binarySearch(int a[], int k)
{
    int low = 0, high = n - 1, mid, count = 0;

    mid = (low + high) / 2;

    for (int i = 0; i < n; i++)
    {
        if (a[mid] == k)
        {
            count++;
        }
        else if (a[mid] > k)
        {
            high = mid - 1;

            for (int i = low; i <= mid; i++)
            {
                if (a[i] == k)
                {
                    count++;
                }
            }
        }
        else if (a[mid] < k)
        {
            low = mid + 1;

            for (int i = mid; i <= high; i++)
            {
                if (a[i] == k)
                {
                    count++;
                }
            }
        }
    }

    if (count >= 1)
    {
        printf("Number exist\n");
    }
    else
    {
        printf("Number not exist\n");
    }
}

int main()
{
    int search;

    for (int i = 0; i < n; i++)
    {
        printf("enter array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("enter number to search: ");
    scanf("%d", &search);

    binarySearch(arr, search);

    return 0;
}
