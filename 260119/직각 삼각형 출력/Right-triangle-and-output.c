#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i=1;i<=(2*a-1);i+=2){
        for(int r=0;r<i;r++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}