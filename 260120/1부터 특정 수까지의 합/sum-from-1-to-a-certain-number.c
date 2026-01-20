#include <stdio.h>
int sum(int a){
    int total=0;
    for(int i=1;i<=a;i++){
        total+=i;
    }

    return total/10;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d",sum(n));
    // Please write your code here.
    return 0;
}