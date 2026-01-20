#include <stdio.h>
int log(int a,int b){
    int c=a;
    for(int i=1;i<b;i++){
        a*=c;
    }
    return a;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",log(a,b));    // Please write your code here.
    return 0;
}