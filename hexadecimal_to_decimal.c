#include <math.h>
#include <stdio.h>
#include <string.h>
  
int main()
{
    int decimalNumber = 0;
    char hexDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    char hexadecimalnumber[30] = "2D";
    int i, j, power = 0, digit;
  
    for (i = strlen(hexadecimalnumber) - 1; i >= 0; i--) {
  
        for (j = 0; j < 16; j++) {
            if (hexadecimalnumber[i] == hexDigits[j]) {
                decimalNumber += j * pow(16, power);
            }
        }
        power++;
    }
    
    printf("Decimal Number : %d", decimalNumber);
    return 0;
}