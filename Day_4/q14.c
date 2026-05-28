#include <stdio.h>

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    printf("Please enter the nth term:- ");
    scanf("%d",&n);
    if(n < 0){
        printf("Please enter a valid term number.\n");
        return 1;
    }
    printf("The %dth term of the fibonacci series is %d",n,fibonacci(n));
    return 0;
}