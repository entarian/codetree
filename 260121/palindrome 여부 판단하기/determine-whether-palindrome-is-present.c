#include <stdio.h>
#include <string.h>
char A[101];
int reverse(char *A){ 
    int cnt=0;
   for(int i=0;i<strlen(A);i++){
    if(A[i]==A[strlen(A)-i-1]){
        cnt++;
    }
   }
   if(cnt==strlen(A)){
    return 1;
   }
   else{
    return 0;
   }
}
int main() {
    scanf("%s", A);
    if(reverse(A)==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    // Please write your code here.
    return 0;
}