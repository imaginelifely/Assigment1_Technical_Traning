#include <stdio.h>
int square_num(int n) 
{
    int result = 0;
    int i = n;
    while (i > 0) 
    {
        if (i & 1) 
        {
            result += n;
        }
        n <<= 1;
        i >>= 1;
    }
    return result;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = square_num(num);
    printf("Square of %d is %d\n", num, result);
    return 0;
}
