#include <stdio.h>
void p(int *n,int *m){
    int c=*n;
    *n=*m;
    *m=c;
    
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    p(&n,&m);
    printf("%d %d",n,m);
    // Please write your code here.
    
    return 0;
}