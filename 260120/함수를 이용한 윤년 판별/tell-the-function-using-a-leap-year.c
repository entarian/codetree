#include <stdio.h>
#include <stdbool.h>
void year(int a){
    if(a%4==0){
        if(a%100==0&&a%400!=0){
            printf("false");
        }
        else{
            printf("true");
        }
    }else{
        printf("false");
    }
    
}
int main() {
    int y;
    scanf("%d", &y);
    year(y);
    // Please write your code here.
    
    return 0;
}