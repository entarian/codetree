#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[4][4];
    int total=0;
    for(int i=0;i<4;i++){
        for(int r=0;r<4;r++){
            scanf("%d ",&arr[i][r]);
            total+=arr[i][r];
        }
        printf("%d\n",total);
        total=0;
    }

    return 0;
}