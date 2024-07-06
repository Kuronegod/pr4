#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    printf("Number of equal divisors: %d\n", count);

    return 0;
}
