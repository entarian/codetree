#include <stdio.h>

int main() {
    // Please write your code here.
    int start,end,total;
    int result=0;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++){
        for(int r=1;r<=i;r++){
            if(i%r==0){
                total++;
            }
        }
        if(total==3){
            result++;
        }
        total=0;
    }
    printf("%d",result);
    return 0;
}