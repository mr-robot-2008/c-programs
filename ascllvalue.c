#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    int i;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    i = ch;
    printf("\nASCII Value of %c = %d", ch, i);
    getch();
    return 0;
}
