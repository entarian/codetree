#include <stdio.h>

void prime(int a, int b){
    int pri=1;
    int total=0;
    for(int i=a;i<=b;i++){
        for(int r=2;r<i;r++){
            if(i%r==0){
                pri=0;
                break;
            }
            else{
                int c,d;
                c=i/10;
                d=i%10;
                if((c+d)%2==0){
                    pri=1;
                }
                else{
                    pri=0;
                }
            }
        }
        if(pri==1){
            total++;
        }
    }
    printf("%d",total);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    prime(a,b);
    // Please write your code here.
    
    return 0;
}