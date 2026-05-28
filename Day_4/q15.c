#include <stdio.h>

int power(int base, int exp){
    int res = 1;
    for(int i = 0 ; i < exp ; i++){
        res *= base;
    }
    return res;
}

int armstrong(int n){
    int temp = n, sum = 0;
    int cnt = 0;
    while(temp != 0){
        cnt++;
        temp = temp/10;
    }
    temp = n;
    while(temp != 0){
        int rem = temp%10;
        sum += power(rem,cnt);
        temp = temp/10;
    }
    if(sum == n) return 1;
    else return 0;
}

int main(){
    int n;
    printf("Please enter the number n:- ");
    scanf("%d",&n);
    if(armstrong(n)) printf("%d is an armstrong number",n);
    else printf("%d is not an armstrong number",n);
    return 0;
}