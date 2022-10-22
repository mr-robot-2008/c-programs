// TO FIND THE POWER SET OF A GIVEN SET
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
void main()
{
    char str[20];
    int i, j, steps, len, ctr = 0;
    printf("\n Enter a string ");
    gets(str);
    len = strlen(str);
    steps = pow(2, len);
    while (ctr < steps)
    {
        j = 0;
        while (j < len)
        {
            if (ctr & (1 << j))
            {
                printf("%c", str[j]);
            }
            j++;
        }
        ctr++;
        printf("\n");
    }
}