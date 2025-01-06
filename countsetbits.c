#include <stdio.h>
int count_Set_Bits(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
    }
    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = count_Set_Bits(num);
    printf("Total set bits from 1 to %d: %d\n", num, count);
    return 0;
}
