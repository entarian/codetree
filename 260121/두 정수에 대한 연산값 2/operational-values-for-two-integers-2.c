#include <stdio.h>

int a, b;
void da(int *a,int *b){
    if(*a<*b){
        *b*=2;
        *a+=10;
    }
    else{
        *b+=10;
        *a*=2;
    }
}
int main() {
    scanf("%d %d", &a, &b);
    da(&a,&b);
    printf("%d %d",a,b);
    // Please write your code here.
    
    return 0;
}