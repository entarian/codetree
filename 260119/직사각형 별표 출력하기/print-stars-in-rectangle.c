#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        for(int r=0;r<b;r++){
            printf("* ");
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}