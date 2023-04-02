#include <stdio.h>
int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return gcd(num2, num1 % num2);
}
int lcm(int num1, int num2) {
    return (num1 * num2) / gcd(num1, num2);
}
int main() {
    int num1, num2, lcm_result;
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d", &num1, &num2);
    lcm_result = lcm(num1, num2);
    printf("LCM of %d and %d is %d.", num1, num2, lcm_result);
    return 0;
}

