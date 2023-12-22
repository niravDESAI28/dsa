#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    
    head=temp;
}

void insertMiddle(int val)
{
    struct node *ptr = head, *p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    int s,i=1;
    
    if (head == NULL)
    {
        head = temp;
    }
    else if(head->next == NULL)
    {
        head->next = temp; 
    }
    else
    {
        printf("Insert your Position : ");
        scanf("%d",&s);

        i = 1;

        if (s == 1)
        {
            temp->next = head;
            head = temp;
        }
        else{
            while (i<s)
            {
                i++;
                p = ptr;
                ptr = ptr->next;
            }

        temp->next = ptr;
        p->next = temp;
        }
    }
}

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void deleteFirst()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        head = head->next;
    }    
}

void deleteMiddle()
{
    struct node *ptr = head, *p;

    int s,i=1;

    if (head == NULL)
    {
        printf("\nList is already empty");
    }
    else
    {
        printf("delete your position : ");
        scanf("%d",&s);

        i = 1;
        
        if (s == 1)
        {
            head = ptr->next;
            free(ptr);
        }
        else
        {
            while (i<s)
            {
                i++;
                p = ptr;
                ptr = ptr->next;
            }
        
        p->next = ptr->next;
        free(ptr);
        }
    }
}

void deleteEnd()
{
    struct node *ptr = head, *p;

    if (head == NULL)
    {
        printf("List is already empty\n");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
    return;
}

void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    insertEnd(100);
    insertEnd(200);
    insertEnd(300);
    insertEnd(400);
    insertEnd(500);
    display();
    insertMiddle(250);
    printf("InsertMiddle\n");
    display();
    insertFirst(50);
    printf("InsertFirst\n");
    display();
    deleteFirst();
    printf("deleteFirst\n");
    display();
    deleteMiddle();
    printf("deleteMiddle\n");
    display();
    deleteEnd();
    printf("deleteEnd\n");
    display();
}