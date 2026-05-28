#include <stdio.h>

void prime(int n){
    int flag = 0;
    if(n == 1) flag = 1;
    for(int i = 2 ; i <= n/2 ; i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("%d\n",n);
}

int main(){
    printf("Please enter the upper range and the lower range:- ");
    int l,r;
    scanf("%d %d",&l,&r);
    printf("The prime numbers between %d and %d are:-\n",l,r);
    for(int i = l ; i <= r ; i++){
        prime(i);
    }
    return 0;
}