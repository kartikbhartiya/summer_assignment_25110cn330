#include <stdio.h>

int main(){
    int n;
    printf("please enter the number n:- ");
    scanf("%d",&n);
    int rev = 0;
    int temp = n;
    while(n != 0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    if(temp == rev) printf("pallindrome");
    else printf("Not a pallindrome");
    return 0;
}