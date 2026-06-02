#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    while(n != 0){
        count += n & 1;
        n >>= 1;
    }
    printf("Number of set bits: %d\n", count);
    return 0;
}