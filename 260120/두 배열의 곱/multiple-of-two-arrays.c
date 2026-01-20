#include <stdio.h>

int main() {
    // Please write your code here.
    int a[3][3];
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int r=0;r<3;r++){
            scanf("%d ",&a[i][r]);
            
            
        }
    }
    for(int i=0;i<3;i++){
        for(int r=0;r<3;r++){
            scanf("%d ",&b[i][r]);
        }
    }
    for(int i=0;i<3;i++){
        for(int r=0;r<3;r++){
            printf("%d ",a[i][r]*b[i][r]);
            
        }
        printf("\n");
    }
    return 0;
}