#include<stdio.h>
void TOH(int n, char X, char Y, char Z)
{
    if (n>0)
    {
        TOH(n-1,X,Z,Y);
        printf("\n %c to %c",X, Y);
        TOH(n-1,Z,Y,X);
    } 
}
void main(){
    int n;
    printf("How many discs\n");
    scanf("%d", &n);
    TOH(n,'A','B','C');
}
