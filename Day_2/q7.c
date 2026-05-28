#include <stdio.h>

int main(){
    int n;
    printf("please enter the number n:- ");
    scanf("%d",&n);
    int pro = 1;
    if(n == 0) pro = 0;
    while(n != 0){
        pro *= n%10;
        n = n/10;
    }
    printf("the product of the digits is %d",pro);
    return 0;
}