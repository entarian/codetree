#include <stdio.h>
void cal(int m,int d){
    int match=1;
    for(int i=1;i<=12;i++){
        int n=0;
        match=1;
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            n=31;
        }
        else if(m==4||m==6||m==9||m==11){
            n=30;
        }
        else if(m==2){
            n=28;
        }
        else{
            printf("No");
            break;
        }
        for(int r=1;r<=n;r++){
                if(r!=d){
                    match=0;
                    continue;
                    
                }
                else{
                    match=1;
                    break;
                }
            }
    }
    if(match==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    cal(m,d);
    // Please write your code here.
    return 0;
}