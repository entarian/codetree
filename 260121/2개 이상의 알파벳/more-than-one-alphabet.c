#include <stdio.h>
#include <string.h>
char A[101];
void sc(char *A){
    int num=0;
    for(int i=0;i<strlen(A);i++){
        for(int r=0;r<strlen(A);r++){
            if(A[i]!=A[r]){
                num++;
                break;
            }
            else{
                continue;
            }
        }
    }
    if (num>=2){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

int main() {
    scanf("%s", A);
    sc(A);
    // Please write your code here.
    
    return 0;
}