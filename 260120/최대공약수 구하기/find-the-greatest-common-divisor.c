#include <stdio.h>
void c(int n,int m){
    int total=0;
    if(n<m){
        for(int i=1;i<=m;i++){
            if(n%i==0&&m%i==0){
                total=i;
            }
        }
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0&&m%i==0){
                total=i;
            }
        }
    }
    printf("%d",total);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    c(n,m);
    // Please write your code here.
    
    return 0;
}