#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int getbits()
int main()
{
    bool a[32];
    int decimal;
    int length = 32;
    int decimal_alt;
    int count = 0;
    do {
        scanf("%d", &decimal);
        if (decimal < 0) printf("Enter decimal number NON-zero\n");
    } while (decimal < 0);
    do {
        if (decimal % 2 == 0) a[length] = 0;
        else a[length] = 1;
        decimal /= 2;
        length--;
    } while (decimal != 0);
    for (int i = 0; i < 33; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
    for (int i = 32; i > 0; i--) {
        decimal_alt += pow(2, count) * a[i]; 
        count++;
    }
    printf("%d\n", decimal_alt);
    return 0;
}
