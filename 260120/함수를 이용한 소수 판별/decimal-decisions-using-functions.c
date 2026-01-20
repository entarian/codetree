#include <stdio.h>
int Prime(int a,int b){
    
    int total=0;
    for(int i=a;i<=b;i++){
        int p=1;
        for(int r=2;r<i;r++){
            if(i%r==0){
                p=0;
                break;
            }
        }
        if(p==1){
            total+=i;
        }
    }
    return total;
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Please write your code here.
    printf("%d",Prime(a,b));
    return 0;
}