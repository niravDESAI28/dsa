#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], temp[10];
    int count = 1;

    for (int i = 1; i <= 5; i++)
    {
        printf("enter array1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    for (int i = 1; i <= 5; i++) 
    {
        printf("enter array2[%d]: ", i);
        scanf("%d", &arr2[i]);
    } 

    for (int i = 1; i <= 5; i++)
    {
        temp[count] = arr1[i];
        count++;
    }

    for (int i = 1; i <= 5; i++)
    {
        temp[count] = arr2[i];
        count++;
    }

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", temp[i]);
    }
}