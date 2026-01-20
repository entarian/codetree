#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        if(i%2==1){
            for(int r=a;r>0;r--){
                printf("%d ",r);
            }
        }
        else{
            for(int r=1;r<=a;r++){
                printf("%d ",r);
            }
        }
        printf("\n");
    }
    return 0;
}