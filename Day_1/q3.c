#include <stdio.h>

int main(){
    int n;
    printf("please enter the number n:- ");
    scanf("%d",&n);
    int fact = 1;
    if(n < 0){
        printf("the factorial is not possible for a negative number");
        return 0;
    }
    for(int i = 1; i <= n ; i++){
        fact *= i;
    }
    printf("the factorial is %d",fact);
    return 0;
}