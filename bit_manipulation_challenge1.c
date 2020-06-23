#include<stdio.h>

// TASKS:
// the ~ operator to each number
// bitwise &, | and ^ operators on two numbers
// << and >> - left and right shift operators to one of the numbers
// after each operation convert the numbers before and after operations to binary

int decimalToBinary(int dec);

int main(int argc, char const *argv[])
{
    int x, y;
    printf("enter two decimal numbers: \n");
    scanf("%d%d",&x, &y);
    printf("the number %d after negation is %d", decimalToBinary(x), decimalToBinary(~x));
    printf("\n the result of bitwise AND of %d and %d is %d", decimalToBinary(x), decimalToBinary(y), decimalToBinary(x & y));
    printf("\n the result of bitwise OR of %d and %d is %d", decimalToBinary(x), decimalToBinary(y), decimalToBinary(x | y));
    printf("\n the result of bitwise XOR of %d and %d is %d", decimalToBinary(x), decimalToBinary(y), decimalToBinary(x ^ y));
    printf("\nthe left shift of the first number %d (%d) is %d (%d)", decimalToBinary(x), x, decimalToBinary(x << 1), x<<1);
    printf("\nthe left shift of the first number %d (%d) is %d (%d)\n", decimalToBinary(x), x, decimalToBinary(x >> 1), x>>1);
    return 0;
}

int decimalToBinary(int dec)
{
    int i=1, bin = 0, r;
    while (dec != 0)
    {
        r = dec % 2;
        dec /= 2;
        bin += i * r;
        i *= 10;
    }
    return bin;
}