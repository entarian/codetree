#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int r=1;r<=a;r++){
            printf("%d * %d = %d",i,r,i*r);
            if(r!=a){
                printf(", ");
            }
        }
        printf("\n");
    }
    return 0;
}