#include <stdio.h>

int n1, n2;
int a[100], b[100];
void function(int a[],int b[]){
    int num=0;
    for(int i=0;i<n1;i++){
        int match=1;
        for(int r=0;r<n2;r++){
            if(a[i+r]!=b[r]){
                match=0;
                break;
            }
        }
        if( match==1){
            num=1;
        }
    }
    if( num==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    function(a,b);
    // Please write your code here.
    
    return 0;
}