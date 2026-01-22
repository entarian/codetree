#include <stdio.h>

int arr[101];
int cnt;
void dfas(int arr[],int *m){
    int total=0;
    while(*m>=0){
        total+=arr[*m];
        if(*m==0){
            break;
        }
        if(*m%2==0){
            *m/=2;
        }
        else{
            (*m)--;
        }
    }
    printf("%d",total);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    cnt = m;
    dfas(arr,&m);
    // Please write your code here.
    return 0;
}