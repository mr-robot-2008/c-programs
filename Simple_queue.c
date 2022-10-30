#include <stdlib.h>
#include <stdio.h>
int pos=1;
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void insert_pos()
{
    struct node *tp,*c;
    tp=(struct node *)malloc(sizeof(struct node));
   
    if(start==NULL)
    {
        printf("Enter the data: ");
        scanf("%d",&tp->data);
        tp->next=NULL;
        start=tp;
        return;
    }
    c=start;
    for(int i=1;i<pos;i++)
    c=c->next;
    if(c==NULL)
    printf("%d",c->data);
    printf("Enter the data: ");
    scanf("%d",&tp->data);
    tp->next=c->next;
    c->next=tp;
    pos++;
}
void del_first()
{
    struct node *temp;
    temp=start;
    printf("Poped data is: %d\n",temp->data);
    start=start->next;
    free(temp);
    printf("Node deleted sucessfully...\n");
}
void display()
{
    struct node *p;
    if(start==NULL)
    {
        printf("No node present.\n");
        return;
    }
    p=start;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    int a,i=0,ch;
    printf("Enter 1 to push the data.\n");
    printf("Enter 2 to pop the data.\n");
    printf("Enter 3 to display the data.\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert_pos();
            break;
            case 2:
            del_first();
            break;
            case 3:
            display();
            printf("Underflow...\n");
            break;
            default:
            exit(0);
        }
    }
}
