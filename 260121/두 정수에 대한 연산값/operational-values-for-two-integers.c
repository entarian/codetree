#include <stdio.h>
void pm(int *a,int *b){
    if(*a<*b){
        *b+=25;
        *a*=2;
    }
    else{
        *b*=2;
        *a+=25;
    }
}
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    pm(&a,&b);
    printf("%d %d",a,b);
    // Please write your code here.

    return 0;
}