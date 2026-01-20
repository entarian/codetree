#include <stdio.h>

int main() {
    // Please write your code here.
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int r=0;r<3;r++){
            scanf("%d",&a[i][r]);
            a[i][r]*=3;
            printf("%d ",a[i][r]);
        }
        printf("\n");
    }
    
    return 0;
}