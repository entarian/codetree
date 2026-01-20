#include <stdio.h>
int six(int b){
    while(b>0){
        int s=b%10;
        if(s==3||s==6||s==9){
            return 1;
        }
        b/=10;
    }
    return 0;
}
int three(int a,int b){
    int total=0;
    for(int i=a;i<=b;i++){
        if(i%3==0){
            total++;
        }
        else if(six(i)){
            total++;
        }
    }
    printf("%d",total);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    three(a,b);
    // Please write your code here.
    return 0;
}