#include<stdio.h>
#define n 5

int a[n], f = -1, r = -1;

int display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertEnd(int val)
{
    if (f >= n - 1)
    {
        printf("\nFully...");
    }
    else
    {
        r++;
        a[r] = val;
    }
}

int deleteFirst()
{
    if (f == n - 1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        f++;
    }   
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    deleteFirst();
    deleteFirst();
    deleteFirst();
    deleteFirst();
    deleteFirst();
    display();

    return 0;
}