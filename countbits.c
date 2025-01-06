#include<stdio.h>
int count_set_bits(int data)
{
    int count=0;
    unsigned int temp = (unsigned int)data;
    while(data!=0)
    {
        if((data&1)==1)
        count++;
        data=data>>1;
    }
    return count;
}
int main() {
    int data;
    printf("Enter a number: ");
    scanf("%d", &data);
    printf("Number of set bits: %d\n", count_set_bits(data));
    return 0;
}
