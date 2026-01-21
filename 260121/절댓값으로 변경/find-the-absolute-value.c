#include <stdio.h>
#define MAX_N 50

int arr[MAX_N];
void ven(int *arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]*=-1;
        }
        else{
            continue;
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ven(arr,n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Please write your code here.
    
    return 0;
}