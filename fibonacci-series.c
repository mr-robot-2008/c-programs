#include<stdio.h>
#include<conio.h>
long int fib(long int n)
{
    if(n==0)
    return 0;
    if (n==1)
    return 1;
    return fib(n-1)+fib(n-2);
}
void main(){
    long int i=0, n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d\n", fib(i));
        i++;
    }
}