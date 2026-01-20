#include <stdio.h>
void logic(int a){
    if(a%2==0){
        int b=a/10;
        int c=a%10;
        if((b+c)%5==0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    else{
        printf("No");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    logic(n);
    // Please write your code here.
    
    return 0;
}