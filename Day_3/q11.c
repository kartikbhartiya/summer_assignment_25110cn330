#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return (a >= 0) ? a : -a;
    return gcd(b, a % b);
}

int main(void) {
    int x, y;
    if (printf("Enter two integers: ") < 0) return 0;
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
    return 0;
}
