#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 31; i >= 0; i--){
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    return 0;
}