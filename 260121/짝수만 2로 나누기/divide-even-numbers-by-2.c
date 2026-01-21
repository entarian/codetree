#include <stdio.h>

int n;
int arr[50];
void two(int *a,int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr[i]/=2;
        }
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    two(arr,n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Please write your code here.
    return 0;
}