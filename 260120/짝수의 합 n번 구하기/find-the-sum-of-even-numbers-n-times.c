#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int b,c,total;
        scanf("%d %d",&b,&c);
        for(int r=b;r<=c;r++){
            if(r%2==0){
                total+=r;
            }
        }
        printf("%d\n",total);
        total=0;
    }
    return 0;
}