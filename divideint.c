#include <stdio.h>
#include <stdlib.h>
int divide_integers_bm(int dividend, int divisor) 
{
    int quotient = 0;
    int sign = (dividend < 0) ^ (divisor < 0);
    dividend = abs(dividend);
    divisor = abs(divisor);
    while (dividend >= divisor) {
        int temp = divisor;
        int i = 1;
        while (dividend >= (temp << 1)) {
            temp <<= 1;
            i <<= 1;
        }
        dividend -= temp;
        quotient += i;
    }
    return sign ? -quotient : quotient;
}
int main() 
{
    int dividend = 987;
    int divisor = 5;
    int result = divide_integers_bm(dividend, divisor);
    printf("%d / %d = %d\n", dividend, divisor, result);
    return 0;
}
