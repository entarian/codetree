#include <stdio.h>
int onjeonsu(int a,int b){
    int total=0;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            continue;
        }
        else{
            if(i%10==5){
                continue;
            }
            else{
                if(i%3==0&&i%9!=0){
                    continue;
                }
                else{
                    total++;
                }
            }
        }
    }
    printf("%d",total);
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    // Please write your code here.
    onjeonsu(A,B);
    return 0;
}