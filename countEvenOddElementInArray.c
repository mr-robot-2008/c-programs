#include <stdio.h>
int main(void){
    int num[100],n,i,oddCount=0,evenCount=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            oddCount++;
        }else
        {
            evenCount++;
        }
    }
    printf("The total odd numbers in the array is: %d\n",oddCount);
    printf("The total even numbers in the array is: %d",evenCount);
}