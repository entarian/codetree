#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    int arr[9][9];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int num=1;
        if(i%2==0){
            for(int r=0;r<a;r++){
                
                arr[r][i]=num;
                num++;
            }
        }
        else{
            for(int r=a-1;r>=0;r--){
                
                arr[r][i]=num;
                num++;
            }
        }
        
        
    }
    for(int i=0;i<a;i++){
        for(int r=0;r<a;r++){
            printf("%d",arr[i][r]);
        }
        printf("\n");
    }
    return 0;
}