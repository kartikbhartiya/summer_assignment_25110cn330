#include <stdio.h>

int main(){
    printf("Please enter the number n:- ");
    int n;
    scanf("%d",&n);
    int flag = 0;
    if(n == 1) flag = 1;
    for(int i = 2 ; i <= n/2 ; i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("%d is a prime number",n);
    else printf("%d is not a prime number",n);
}