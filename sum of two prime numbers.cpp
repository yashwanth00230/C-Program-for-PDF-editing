#include <stdio.h>

int is_prime(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n/2; i++) {
        if (is_prime(i) && is_prime(n-i)) {
            printf("%d = %d + %d\n", n, i, n-i);
            flag = 1;
        }
    }
    if (!flag) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    }
    return 0;
}
