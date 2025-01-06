#include <stdio.h>
int Set_Bit_Pos(int n) 
{
    int position = 0;
    while (!(n & 1)) 
    {
        n >>= 1;
        position++;
    }
    return position + 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int position = Set_Bit_Pos(num);
    printf("Position of the only set bit: %d\n", position);
    return 0;
}