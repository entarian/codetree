#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    int b=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int r=1;r<=i;r++){
            b++;
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}