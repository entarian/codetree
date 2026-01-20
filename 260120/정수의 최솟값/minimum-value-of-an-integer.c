#include <stdio.h>
int min(int a,int b,int c){
    if(a<b){
        if(a<c){
            printf("%d",a);
        }
        else {
            printf("%d",c);
        }
    }
    else{
        if(b<c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    min(a,b,c);
    // Please write your code here.
    
    return 0;
}