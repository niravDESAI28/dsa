#include <stdio.h>

int selectSort(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int arr[5] = {54, 2, 34, 21, 15};
    selectSort(arr);
    
    return 0;
}