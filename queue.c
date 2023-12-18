#include<stdio.h>
int a[50],f=-1,r=-1;

int insertend()
{
    if(f==r && r==-1)
    {
        f++;
        r++;
        printf("Enter a value :");
        scanf("%d",&a[r]);
    }
    else if(r>=4){
        printf("Queue is already full\n");
    }
    else if(r<4)
    {
        r++;
        printf("Enter a value :");
        scanf("%d",&a[r]);
    }
}

int deletefirst()
{
    if(f==r)
    {
        if(f!=-1){
            f=r=-1;
        }
        else if(f==-1){
            printf("Queue is already empty\n");
        }
    }
    else if(f==-1){
        printf("Queue is already empty\n");
    }
    else if(f>-1 && f<r){
        f++;
    }
}


int display()
{
    for(int i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int i,j;

printf("1)inseretend\n");
printf("2)deletefirst\n");
printf("3)exit\n");

for(i=0;i<50;i++)
{
    printf("Enter your choice :");
    scanf("%d",&j);

    switch(j)
    {
    case 1:
    {
        insertend();
        break;
    }
    case 2:
    {
        deletefirst();
        break;
      
    case 3:
    {
        goto end;
    }
    default :
    {
        goto end;
    }
    }
}
}      
end :   
    display();

    return 0;
}