#include <stdio.h>

int arr[101];
int queryA1[101];
int queryA2[101];
void sum(int n,int m){
    
    for(int i=0;i<m;i++){
        int total=0;
        for(int r=queryA1[i];r<=queryA2[i];r++){
            total+=arr[r];
        }
        printf("%d\n",total);
    }
}
int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < m; i++) {
        scanf("%d %d", &queryA1[i], &queryA2[i]);
    }
    sum(n,m);
    // Please write your code here.
    return 0;
}