#include<stdio.h>
void input(int a[],int num);
void output(int a[],int num);
void reverse(int a[],int num);
void insert(int a[],int num,int pos,int val);
void deletee(int a[],int num,int pos);
int search(int a[],int num,int ne);

int main()
{
    int n,po,va,lo,se,result;
    int ar[23];
    printf("enter the size of array:");
    scanf("%d",&n);
    
    input(ar,n);
    printf("printed array is \n");
    output(ar,n);
    reverse(ar,n);
    printf("enter the position of value:");
    scanf("%d",&po);
    
    printf("enter the value:");
    scanf("%d",&va);
    
    printf("new array:");
    
    insert(ar,n,po,va);
    
    printf("enter the position of value:");
    scanf("%d",&lo);
    
    deletee(ar,n,lo);
    
    printf("enter the value you need to search:");
    scanf("%d",&se);
    
    result=search(ar,n,se);
    printf("element found at index:%d",result);
    
    
    
    return 0;
    
    
    
    
}

void input(int a[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
}

void output(int a[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("enter the element:%d\n",a[i]);
    }
}

void reverse(int a[],int num)
{
    int i;
    for(i=0;i<=num/2;i++)
    {
        int temp=a[i];
        a[i]=a[num-i-1];
        a[num-i-1]=temp;
        
    }
    
     for(i=0;i<num;i++)
    {
        printf("revrsed:%d\n",a[i]);
    }
    
    
}

void insert(int a[],int num,int pos,int val)
{
    
    
    for(int i=num-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    
   
    
     for(int i=0;i<=num;i++)
    {
        printf(":%d\n",a[i]);
    }
}    
    
void deletee(int a[],int num,int pos)
{
    for(int i=pos;i<num;i++)
    {
        a[i]=a[i+1];
    }
    
    for(int i=0;i<=num-1;i++)
    {
        printf(":%d\n",a[i]);
 
    }
} 


int search(int a[],int num,int ne)
{
    
    for(int i=0;i<num;i++)
    {
        if(a[i]==ne)
        {
            return i;
        }
    }
}
    
