#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int r=1;r<=i;r++){
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}