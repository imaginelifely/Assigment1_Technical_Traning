#include <stdio.h>
int flip_atob(int a, int b) 
{
    int flips = 0;
    int mask = 1;
    while (mask <= a || mask <= b) 
    {
        if ((a & mask) != (b & mask)) 
        {
            flips++;
        }
        mask <<= 1;
    }
    return flips;
}
int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int flips = flip_atob(a, b);
    printf("Number of bits to be flipped: %d\n", flips);
    return 0;
}

