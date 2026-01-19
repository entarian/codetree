#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int r=0;r<i;r++){
            printf("* ");
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}