#include <stdio.h>
void Squre(int n,int m){
    for(int i=0;i<n;i++){
        for(int r=0;r<m;r++){
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    Squre(n,m);
    // Please write your code here.
    
    return 0;
}