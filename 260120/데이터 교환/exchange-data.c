#include <stdio.h>

int main() {
    // Please write your code here.
    int a=5;
    int b=6;
    int c=7;
    int d=c;
    int temp=b;
    b=a;
    c=temp;
    a=d;
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}