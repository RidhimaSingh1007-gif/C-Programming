#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even No.");
    } else {
        printf("Odd No.");
    }
    return 0;

}