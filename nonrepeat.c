#include <stdio.h>
void NonRepeating(int arr[], int n) 
{
    int XOR = 0;
    for (int i = 0; i < n; i++) {
        XOR ^= arr[i];
    }
    int rightmostSetBit = XOR & -XOR;
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightmostSetBit) 
        {
            num1 ^= arr[i];
        } 
        else 
        {
            num2 ^= arr[i];
        }
    }
    printf("Non-repeating elements: %d and %d\n", num1, num2);
}
int main() {
    int arr[] = {3,5,4,3,3,2,6,7,3,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    NonRepeating(arr, n);
    return 0;
}

