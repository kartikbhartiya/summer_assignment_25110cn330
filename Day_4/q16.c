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
    printf("please enter the number of terms:- ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        if(armstrong(i)) printf("%d ",i);
    }
    return 0;
}