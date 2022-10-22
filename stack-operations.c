#include<stdio.h>
#include <stdlib.h>
#define size 4
int top=-1, inp_array[size];
void push();
void pop();
void traverse();
int main(){
    int choice;
    while(1)
    {
        printf("\n operation performed by stack");
        printf("\n1. Push the element \n2. Pop the element \n3. Traverse\n4.End\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice!!");
        }
    }
}
void push()
{
    int x;
    if(top==size-1)
    {
        printf("\nOverflow!!\n\n");
    }
    else{
        printf("\nEnter element to be inserted in the stack:");
        scanf("%d", &x);
        inp_array[top]=x;
    }
}
void pop()
    {
        if(top==-1)
        {
            printf("\n Underflow\n\n");
        }
        else
        {
            printf("popped element: %d", inp_array[top]);
            top=top-1;
        }
    }

void traverse()
{

    if(top==-1)
    {
    printf("\nunderflow\n\n");
    }
else
    {
    printf("\n elements present in the stack: \n");
    for(int i=top; i>=0; --i)
    printf("%d\n", inp_array[i]);
    }
}