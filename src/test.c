#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct {
    unsigned int bits[4];
} s21_decimal;

int main()
{
    bool a[32] = {0};
    int decimal;
    int length = 32;
    int decimal_alt;
    int count = 0;
    int count_value = 0;
    do {
        scanf("%d", &decimal);
        if (decimal < 0) printf("Enter decimal number NON-zero\n");
    } while (decimal < 0);
    do {
        if (decimal % 2 == 0) a[length] = 0;
        else a[length] = 1;
        decimal /= 2;
        length--;
        count_value++;
    } while (decimal != 0);
    for (int i = 33 - count_value; i < 33; i++) {
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
