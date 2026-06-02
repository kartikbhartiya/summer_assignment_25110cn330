#include <stdio.h>

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(){
    printf("please enter the number to check if the number is strong number: ");
    int n;
    scanf("%d", &n);
    int temp = n;
    while(temp != 0){
        sum += factorial(temp % 10);
        temp /= 10;
    }
    if(sum == n){
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }
    return 0;
}