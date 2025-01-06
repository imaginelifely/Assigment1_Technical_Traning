#include <stdio.h>
void PowerSet(int arr[], int n) 
{
    int numSubsets = 1 << n;
    for (int i = 0; i < numSubsets; i++) 
    {
        printf("{");
        for (int j = 0; j < n; j++) 
        {
            if (i & (1 << j)) 
            {
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }
}
int main() {
    int arr[] = {31, 23, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    PowerSet(arr, n);
    return 0;
}
