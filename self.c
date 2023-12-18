#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;   
};

int main()
{
    struct node a, b, ;
    
    a.data = 10;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 50;
    b.ch = 'B';
    b.ptr = NULL;

    a.ptr = &b;
    printf("A: data: %d, character: %c" , a.data, a.ch);

    b.ptr = &a;
    printf("\nA: data: %d, character: %c" , b.data, b.ch);
    
    return 0;    
}