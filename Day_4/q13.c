#include <stdio.h>

int main(){
    int n;
    printf("Please enter the number of terms:- ");
    scanf("%d",&n);
    if(n <= 0){
        printf("Please enter a valid number of terms.\n");
        return 1;
    }
    printf("The fibonacci series is:-\n");
    int a = 0, b = 1;
    for(int i = 1 ; i <= n ; i++){
        printf("%d ",a);
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}