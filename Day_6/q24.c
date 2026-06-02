#include <stdio.h>

int power(int n , int p){
    int ans = 1;
    for(int i = 0; i < p; i++){
        ans *= n;
    }
    return ans;
}

int main(){
    int n;
    printf("Enter the base and the power");
    scanf("%d %d", &n, &p);
    printf("the power is: %d\n", power(n, p));
    return 0;
}