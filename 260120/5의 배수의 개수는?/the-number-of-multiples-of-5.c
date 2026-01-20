#include <stdio.h>

int main() {
    int arr[4][4];
    int cnt=0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]%5==0){
                cnt++;
            }
        }}
    printf("%d",cnt);
}
