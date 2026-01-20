#include <stdio.h>
void cho(int a,int b){
    int c=0;
    if(a<b){
        for(int i=1;i<=a;i++){
            c=b*i;
            if(c%a==0){
                break;
            }
        }
        printf("%d",c);
    }
    else{
        for(int i=1;i<=b;i++){
            c=a*i;
            if(c%b==0){
                break;
            }
        }
        printf("%d",c);
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    cho(n,m);
    // Please write your code here.
    
    return 0;
}