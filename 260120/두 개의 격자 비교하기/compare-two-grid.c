#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    int arr[10][10];
    int arr1[10][10];
    
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        for(int r=0;r<b;r++){
            scanf("%d",&arr[i][r]);
        }
    }
    for(int i=0;i<a;i++){
        for(int r=0;r<b;r++){
            scanf("%d",&arr1[i][r]);
        }
    }
    int arr3[a][b];
    for(int i=0;i<a;i++){
        for(int r=0;r<b;r++){
            if(arr[i][r]==arr1[i][r]){
                arr3[i][r]=0;
            }
            else{
                arr3[i][r]=1;
            }
            printf("%d ",arr3[i][r]);
        }
        printf("\n");
    }
    return 0;
}