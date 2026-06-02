#include <stdio.h>

int main(){
    long long n;
    printf("please enter the binary number: ");
    scanf("%lld", &n);
    int decimal = 0;
    for(int i = 0; n != 0; i++){
        int bit = n % 10;
        n /= 10;
        decimal += bit * (1 << i);
    }
    printf("The decimal is: %d\n", decimal);
    return 0;
}
