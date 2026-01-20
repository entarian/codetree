#include <stdio.h>
void Squre(int n){
    int a=0;
    for(int i=0;i<n;i++){
        for(int r=0;r<n;r++){
            a++;
            if(a==10){
                a=1;
            }
            printf("%d ",a);
            
        }
        printf("\n");
    }
}
int main() {
    int b;
    scanf("%d",&b);
    Squre(b);
    // Please write your code here.
    return 0;
}