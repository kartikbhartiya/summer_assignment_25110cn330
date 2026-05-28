#include <stdio.h>

int main(){
    int n;
    printf("please enter the number n:- ");
    scanf("%d",&n);
    int cnt = 0;
    while(n != 0){
        cnt++;
        n = n/10;
    }
    printf("The number of digits are %d",cnt);
    return 0;
}